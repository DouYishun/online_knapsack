#include "knapsack.h"

void oneline_knapsack(Knapsack& B, const Item& newItem) {
    if (B.getOccupy() >= threshold2) {
        dprint("Knapsack larger than 1/q");
        return;
    }

    // B.getOccupy() < 0.618 mean:
    //      1. no large item
    //      2. at most medium item
    if (B.getOccupy() + newItem.getSize() <= B.getCapacity()) {
        B.add(newItem);
    } else {  // need remove some item
        if (newItem.getSize() >= threshold2) {  // newItem is large item
            B.removeAll();
            B.add(newItem);
        } else {  // newItem must be medium item
            if (B.onlySmall()) {  // only small in B
                B.removeSomeSmall(B.getOccupy() + newItem.getSize() - B.getCapacity());
                B.add(newItem);
            } else {  // B has exact a medium item and 0 or more small item
                Item v = B.otherItems[0];
                if (v.getSize() + newItem.getSize() <= B.getCapacity()) {
                    B.removeAll();
                    B.add(v);
                    B.add(newItem);
                } else {
                    if (newItem.getSize() < v.getSize()) {
                        B.otherItems.clear();
                        B.add(newItem);
                    }
                }
            }
        }
    }
}
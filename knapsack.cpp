#include "knapsack.h"

void Knapsack::removeAll() {
    occupy = profit = 0;
    while (!smallItems.empty()) {
        smallItems.pop();
    }
    otherItems.clear();
}

void Knapsack::add(const Item newItem) {
    if (newItem.getSize() >= threshold1)
        otherItems.push_back(newItem);
    else
        smallItems.push(newItem);
    occupy += newItem.getSize();
    profit += newItem.getProfit();
    assert(occupy <= capacity);
}

void Knapsack::removeSomeSmall(double requiredSize) {
    double cnt = 0.0;
    while (cnt < requiredSize) {
        cnt += smallItems.top().getSize();
        smallItems.pop();
    }
}


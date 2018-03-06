#include "algo.h"

void loadItems(std::vector<Item>& items, const std::string& filename) {

}

int main() {
    std::string itemsFileName = "data/items";
    std::vector<Item> items;
    loadItems(items, itemsFileName);

    Knapsack B(maxSize);

    for (Item item : items) {
        oneline_knapsack(B, item);
    }

    std::cout << B.getProfit() << std::endl;

}
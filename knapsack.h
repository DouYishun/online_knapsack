#include "item.h"
#include "def.h"

auto cmp = [](Item left, Item right) { return left.getSize() < right.getSize(); };


class Knapsack {
private:
    double capacity;
    double occupy;
    double profit;
public:

    std::priority_queue<Item, std::vector<Item>, decltype(cmp)> smallItems;
    std::vector<Item> otherItems;

    Knapsack(double capacity) : capacity(capacity) {}

    double getOccupy() { return occupy; }

    double getProfit() { return profit; }

    double getCapacity() { return capacity; }

    bool onlySmall() { return otherItems.empty(); }

    void removeAll();

    void removeSomeSmall(double requiredSize);

    void add(const Item newItem);
};
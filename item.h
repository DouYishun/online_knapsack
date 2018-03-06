class Item {
private:
    double id;
    double size;
    double profit;
public:
    Item(int i, int s, int p) : id(i), size(s), profit(p) {}

    double getId() const {
        return id;
    }

    double getSize() const {
        return size;
    }

    double getProfit() const {
        return profit;
    }
};
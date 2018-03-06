#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cassert>
#include <functional>

const double maxSize = 1.0;
const double goldenRatio = 1.618;
const double threshold1 = 0.382;
const double threshold2 = 0.618;

const bool debug = true;

void dprint(const std::string& str) {
    if (debug) {
        std::cout << str << std::endl;
    }
}

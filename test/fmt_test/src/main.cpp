#include <fmt/core.h>
#include <iostream>
#include "../include/MySum.hpp"

using namespace std;


int main() {

    float x = 2.4;
    float y = 1.1;
    
    float z = 0.0;
    z = MySum(x, y);
    fmt::print("{:.2f}\n ", z);
    return 0;
}
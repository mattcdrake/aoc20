#include <iostream>

#include "day1.h"

int main() {
    std::cout << "Solving..." << std::endl;
    std::cout << "----------" << std::endl;

    Day1* day1 = new Day1("input/day1.txt");
    std::cout << "Day 1, Part 1: " << day1->p1() << std::endl;
    std::cout << "Day 1, Part 2: " << day1->p2() << std::endl;
    delete day1;

    return 0;
}

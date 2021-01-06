//
// Created by fires on 1/6/21.
//

#ifndef AOC_CPP_DAY1_H
#define AOC_CPP_DAY1_H

#include <string>
#include <vector>

#include "helpers.h"

class Day1 {
public:
    Day1(std::string path);
    std::string p1();
    std::string p2();

private:
    std::vector<std::string> raw_input;
    std::vector<long int> input;
};

#endif //AOC_CPP_DAY1_H

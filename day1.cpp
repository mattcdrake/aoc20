//
// Created by fires on 1/6/21.
//

#include "day1.h"

Day1::Day1(std::string path) {
    raw_input = parse_input(path);
    input = string_to_int_vec(raw_input);
}

std::string Day1::p1() {
    for (int i = 0; i < input.size(); ++i) {
        for (int j = i + 1; j < input.size(); ++j) {
            if (input[i] + input[j] == 2020) {
                return std::to_string(input[i] * input[j]);
            }
        }
    }
    return "Unable to find a solution";
}

std::string Day1::p2() {
    for (int i = 0; i < input.size(); ++i) {
        for (int j = i + 1; j < input.size(); ++j) {
            for (int k = j + 1; k < input.size(); ++k) {
                if (input[i] + input[j] + input[k] == 2020) {
                    return std::to_string(input[i] * input[j] * input[k]);
                }
            }
        }
    }
    return "Unable to find a solution";
}

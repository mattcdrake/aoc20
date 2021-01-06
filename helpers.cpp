//
// Created by fires on 1/6/21.
//

#include "helpers.h"

/*
 * Reads an input file and returns a vector where each element is a line from the file, in order.
 */
std::vector<std::string> parse_input(std::string path) {
    // Try to open the file
    std::ifstream input(path);

    if (!input.is_open()) {
        std::cout << "Error opening file at " << path << std::endl;
        throw;
    }

    // Read each line of the file, adding it to the vector
    std::vector<std::string> output;
    std::string line;
    while (getline(input, line)) {
        output.push_back(line);
    }

    // Return the vector
    return output;
}

/*
 * Takes a vector of strings and returns a vector of integer conversions.
 */
std::vector<long int> string_to_int_vec(std::vector<std::string>& string_vec) {
    std::vector<long int> output;
    for (auto it = string_vec.begin(); it != string_vec.end(); ++it) {
        output.push_back(std::stoi(*it));
    }
    return output;
}

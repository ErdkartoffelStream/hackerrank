/**
 * @author      : worldpotato
 * @file        : main
 * @created     : Sunday Dec 13, 2020 11:59:33 CET
 */

#include "set-operations.hpp"
#include <iostream>
#include <sstream>

int main()
{
    int numberOfOperations;
    std::cin >> numberOfOperations;
    int operation;
    int value;
    std::set<int> set;

    std::string inputLine;
    getline(std::cin, inputLine);
    std::istringstream iss(inputLine);

    for (int i = 0; i < numberOfOperations; i++) {
        std::cin >> operation;
        std::cin >> value;

        if (operation == 1) {
            set = setOps::add(set, value);
        } else if (operation == 2) {
            set = setOps::remove(set, value);
        } else if (operation == 3) {
            std::string output = "";
            output = setOps::lookup(set, value) ? "Yes" : "No";
            std::cout << output << std::endl;
        } else {
            std::cout << "Wrong input" << std::endl;
        }
    }
}


/**
 * @author      : 
 * @file        : main
 * @created     : Sunday Dec 13, 2020 11:59:33 CET
 */

#include <iostream>

void print_english_representation(int input)
{
    std::string output;
    output = input <= 9 ? input == 1 ? "one"
            : input == 2             ? "two"
            : input == 3             ? "three"
            : input == 4             ? "four"
            : input == 5             ? "five"
            : input == 6             ? "six"
            : input == 7             ? "seven"
            : input == 8             ? "eight"
                                     : "nine"
                        : "Greater than 9";

    std::cout << output << std::endl;
}

void print_odd_or_even(int input)
{
    std::string output;
    if (input % 2) {
        output = "odd";
    } else {
        output = "even";
    }

    std::cout << output << std::endl;
}

void solve_exercise(int first)
{
    if (first < 10) {
        print_english_representation(first);
    } else {
        print_odd_or_even(first);
    }
}

int main()
{
    int first;
    int second;

    std::cin >> first;
    std::cin >> second;

    for (; first <= second; first++) {
        solve_exercise(first);
    }
}


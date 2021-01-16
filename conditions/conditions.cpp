/**
 * @author      : worldpotato
 * @file        : main
 * @created     : Sunday Dec 13, 2020 11:59:33 CET
 */

#include <iostream>


int main()
{
    int input;
    std::cin >> input;
    std::string output;

    // the evil is here
    // it hurts but it's funny
    output = input <= 9 ?
            input == 1 ? "one" :
                input == 2 ? "two" :
                    input == 3 ? "three" :
                        input == 4 ? "four" :
                            input == 5 ? "five" :
                                input == 6 ? "six" :
                                    input == 7 ? "seven" :
                                        input == 8 ? "eight" : "nine"
        : "Greater than 9";

    std::cout << output << std::endl;
}



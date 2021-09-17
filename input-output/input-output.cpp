/**
 * @author      : worldpotato
 * @file        : main
 * @created     : Sunday Dec 13, 2020 11:59:33 CET
 */

#include "myMath.hpp"
#include <iostream>

int main()
{
    myMath m;

    int x;
    int y;
    int z;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    int result = m.add3(x, y, z);

    std::cout << result << std::endl;
}


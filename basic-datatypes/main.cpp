/**
 * @author      : worldpotato
 * @file        : main
 * @created     : Sunday Dec 13, 2020 11:59:33 CET
 */

#include <iostream>
#include <iomanip>


int main()
{

    int i;
    long l;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    std::cout << std::fixed << i << std::endl
        << l << std::endl
        << c << std::endl
        << std::setprecision(3) << f << std::endl
        << std::setprecision(9) << d << std::endl;

}



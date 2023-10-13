#include <iostream>
#include <iomanip>

int main()
{
    int verst;

    std::cout << "Enter the number of versts:\n";
    std::cin >> verst;

    double km;
    km = verst * 1.067;

    std::cout << "Your versts in kilometers are equal " << std::setprecision(4) << km;
}
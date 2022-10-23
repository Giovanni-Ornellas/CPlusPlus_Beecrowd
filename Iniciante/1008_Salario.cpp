#include <iostream>
#include <iomanip>

int main(){
    int NUMBER, WORKED_HOURS;
    double VALUE_PER_HOUR, SALARY;

    std::cin >> NUMBER >> WORKED_HOURS; 
    std::cin >> VALUE_PER_HOUR;

    SALARY = WORKED_HOURS * VALUE_PER_HOUR;

    std::cout << "NUMBER = " << NUMBER << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "SALARY = U$ " << SALARY << std::endl;


    return 0;
}
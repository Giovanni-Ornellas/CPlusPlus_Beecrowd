#include <iostream>
#include <iomanip>


int main(){
    double A, B, MEDIA;

    std::cin >> A >> B;

    MEDIA = (A*3.5+B*7.5)/11;

    std::cout << std::fixed << std::setprecision(5) << "MEDIA = " << MEDIA << std::endl;

    return 0;
}
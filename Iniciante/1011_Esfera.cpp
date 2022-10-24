#include <iostream>
#include <iomanip>
#include <cmath>

const double pi = 3.14159;

int main(){
    double R, VOLUME;
    //Recebe o valor do raio
    std::cin >> R;
    //Calcula o valor do volume
    VOLUME = pow(R,3)*pi*(4/3.0);
    //Imprime o valor do volume
    std::cout << std::fixed << std::setprecision(3) << "VOLUME = "<< VOLUME << std::endl; 
    return 0;
}
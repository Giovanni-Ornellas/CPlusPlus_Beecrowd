#include <iostream>
#include <cmath>
#include <iomanip>

//Variáveis globais
double const n = 3.14159;

int main(){
    double raio, A;

    //Define a precisão de todos os cout
    std::cout << std::fixed << std::setprecision(4);

    //Recebe o valor do raio
    std::cin >> raio;

    //Calcula a área do círculo
    A = n * pow(raio,2);

    //Imprimindo o valor de A
    std::cout<< "A=" << A << std::endl;

    return 0;
}
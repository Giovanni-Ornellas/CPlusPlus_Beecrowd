#include <iostream>
#include <iomanip>
#include <cmath>

const double pi = 3.14159;

int main(){
    //Declara as variáveis
    double A, B, C;
    double area_T, area_C, area_Trap, area_Q, area_R;
    //Recebe as variáveis
    std::cin >> A >> B >> C;
    //Calcula as areas
    area_T = (A*C)/2;
    area_C = pi*pow(C,2);
    area_Trap = ((A+B)*C)/2;
    area_Q = pow(B,2);
    area_R = A*B;
    //Imprime os valores encontrados
    std::cout << std::fixed << std::setprecision(3) << "TRIANGULO: " << area_T << std::endl;
    std::cout << std::fixed << std::setprecision(3) << "CIRCULO: " << area_C << std::endl;
    std::cout << std::fixed << std::setprecision(3) << "TRAPEZIO: " << area_Trap << std::endl;
    std::cout << std::fixed << std::setprecision(3) << "QUADRADO: " << area_Q << std::endl;
    std::cout << std::fixed << std::setprecision(3) << "RETANGULO: " << area_R << std::endl;
    return 0;
}
#include <iostream>
#include <iomanip>

int main(){
    int X;
    double Y, distancia_por_litros;
    
    std::cin >> X;
    std::cin >> Y;

    distancia_por_litros = (X/Y);

    std::cout << std::fixed << std::setprecision(3) << distancia_por_litros << " km/l "<< std::endl;


    return 0;
}
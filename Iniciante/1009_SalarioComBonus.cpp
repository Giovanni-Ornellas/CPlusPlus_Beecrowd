#include <iostream>
#include <string>
#include <iomanip>


int main(){
    std::string nome;
    double salario_fixo, montante_total,total;

    std::cin >> nome >> salario_fixo >> montante_total;
    
    total = salario_fixo + (0.15*montante_total);

    std::cout << std::fixed << std::setprecision(2) << "TOTAL = R$ " << total << std::endl;


    return 0;
}
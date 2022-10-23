#include <iostream>
#include <iomanip>

int main(){
    int codigo_01, numero_da_peca_01, codigo_02, numero_da_peca_02;
    double valor_unitario_01, valor_unitario_02,valor_a_pagar;

    std::cin >> codigo_01 >> numero_da_peca_01 >> valor_unitario_01; 
    std::cin >> codigo_02 >> numero_da_peca_02 >> valor_unitario_02;

    valor_a_pagar = (numero_da_peca_01*valor_unitario_01) + (numero_da_peca_02*valor_unitario_02);

    std::cout << std::fixed << std::setprecision(2) << "VALOR A PAGAR: R$ " << valor_a_pagar << std::endl;
    

    return 0;
}
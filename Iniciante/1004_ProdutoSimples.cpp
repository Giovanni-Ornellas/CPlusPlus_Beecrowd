#include <iostream>

int main(){
    int n1,n2,PROD;

    //Recebe os valores das variáveis n1 e n2
    std::cin >> n1 >> n2;

    //Faz o cálculo do produto
    PROD = n1*n2;

    //Imprime o valor do produto na tela
    std::cout << "PROD = " << PROD << std::endl;

    return 0;
}
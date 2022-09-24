#include <iostream>

int main(){
    int A,B,X;

    //Lê as variáveis A e B do teclado
    std::cin >> A >> B;

    //Realiza a soma de A e B e atribui a X
    X = A+B;

    //Printa a variável X
    std::cout << "X = " << X << std::endl;

    return 0;
}
#include <iostream>


int main(){
    int A, B, C, Maior;

    std::cin >> A >> B >> C;

    Maior = (A+B+abs(A-B))/2;
    Maior = (C+Maior+abs(C-Maior))/2;

    std::cout << Maior << " eh o maior\n";

    return 0;
}
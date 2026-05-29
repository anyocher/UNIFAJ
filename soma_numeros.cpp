// ATIVIDADE DE REVISÃO DA PROVA DE ALGORITIMO 29/05/26 --> SOMA DE DOIS NÚMEROS INTEIROS 
#include <iostream>

using namespace std;

int main() {
    int num1, num2, soma;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    
    cout << "Digite o segundo numero: ";
    cin >> num2;
    soma = num1 + num2;
    cout << "A soma de " << num1 << " + " << num2 << " e igual a " << soma << endl;
    return 0;
}

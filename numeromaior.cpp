// ATIVIDADE DE REVISÃO DA PROVA DE ALGORITIMO 29/05/26 --> c++ leia dois numeros e informe qual é o maior 
#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    // Solicita e lê os dois números
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;

    // Compara os números
    if (num1 > num2) {
        cout << "O maior número é: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "O maior número é: " << num2 << endl;
    } else {
        cout << "Os dois números são iguais." << endl;
    }

    return 0;
}

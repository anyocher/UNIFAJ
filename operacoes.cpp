// ATIVIDADE DE REVISÃO DA PROVA DE ALGORITIMO 29/05/26 -->  c++ leia dois numeros e faça as operações (+ - * /)
#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "\n--- Resultados ---\n";
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    } else {
        cout << num1 << " / " << num2 << " = Impossivel dividir por zero" << endl;
    }

    return 0;
}

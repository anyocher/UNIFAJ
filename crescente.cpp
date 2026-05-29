// ATIVIDADE DE REVISÃO DA PROVA DE ALGORITIMO 29/05/26 -->  c++ leia dois numeros e faça a ordem crescente do primeiro numero e a decressente do segundo numero 
#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

for(int x = num1; <= num2; x++)
{
    cout << x << " - " ;
}

cout << endl;

for(int x = num2; >= num1; x--)
{
    cout << x << " - " ;
}

    return 0;
}

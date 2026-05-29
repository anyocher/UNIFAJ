// ATIVIDADE DE REVISÃO DA PROVA DE ALGORITIMO 29/05/26 // 
#include <iostream>

using namespace std;

int main() {
    int numero, antecessor, sucessor;

    cout << "DIGITE UM NÚMERO PARA SABER SEU ANTECESSOR E SUCESSOR: ";
    cin >> numero;

    antecessor = numero - 1;
    sucessor = numero + 1;

    cout << "ANTECESSOR " << numero << " DE: " << antecessor << endl;
    cout << "SUCESSOR " << numero << " DE: " << sucessor << endl;

    return 0;
}

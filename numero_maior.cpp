// ATIVIDADE DE REVISÃO DA PROVA DE ALGORITIMO 29/05/26 --> EM C++ LEIA 10 NÚMEROS E EXIBA O MAIOR 

#include <iostream>

using namespace std;

int main() {
    int numero, maior;

    // Loop para ler os 10 números
    for (int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "o número: ";
        cin >> numero;

        // Se for o primeiro número, ele é o maior inicial
        if (i == 1) {
            maior = numero;
        } else {
            // Se o número lido for maior que o 'maior' atual, ele é atualizado
            if (numero > maior) {
                maior = numero;
            }
        }
    }

    // Exibe o maior número encontrado
    cout << "O maior número digitado foi: " << maior << endl;

    return 0;
}

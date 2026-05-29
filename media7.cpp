// ATIVIDADE DE REVISÃO DA PROVA DE ALGORITIMO 29/05/26 --> c++ calcule a media com dois numeros , sendo a media 7 
#include <iostream>

using namespace std;

int main() {
    double n1, n2, media;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    media = (n1 + n2) / 2.0;

    cout << "A media entre " << n1 << " e " << n2 << " e: " << media << endl;

    if (media == 7.0) {
        cout << "A media atingiu exatamente 7!" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

// O tabuleiro são apenas 9 variáveis char, uma por casa
char c1='1', c2='2', c3='3',
     c4='4', c5='5', c6='6',
     c7='7', c8='8', c9='9';

// Exibe o tabuleiro na tela
void exibir() {
    cout << c1 << "|" << c2 << "|" << c3 << "\n";
    cout << "-+-+-\n";
    cout << c4 << "|" << c5 << "|" << c6 << "\n";
    cout << "-+-+-\n";
    cout << c7 << "|" << c8 << "|" << c9 << "\n\n";
}

// Verifica se um jogador ganhou — checa as 8 combinações possíveis
bool venceu(char p) {
    return (c1==p && c2==p && c3==p) ||  // linha 1
           (c4==p && c5==p && c6==p) ||  // linha 2
           (c7==p && c8==p && c9==p) ||  // linha 3
           (c1==p && c4==p && c7==p) ||  // coluna 1
           (c2==p && c5==p && c8==p) ||  // coluna 2
           (c3==p && c6==p && c9==p) ||  // coluna 3
           (c1==p && c5==p && c9==p) ||  // diagonal
           (c3==p && c5==p && c7==p);    // diagonal
}

// Coloca o símbolo do jogador na casa escolhida
void marcar(int pos, char jogador) {
    if      (pos == 1) c1 = jogador;
    else if (pos == 2) c2 = jogador;
    else if (pos == 3) c3 = jogador;
    else if (pos == 4) c4 = jogador;
    else if (pos == 5) c5 = jogador;
    else if (pos == 6) c6 = jogador;
    else if (pos == 7) c7 = jogador;
    else if (pos == 8) c8 = jogador;
    else if (pos == 9) c9 = jogador;
}

// Verifica se a casa já está ocupada
bool ocupada(int pos) {
    if (pos==1) return c1=='X' || c1=='O';
    if (pos==2) return c2=='X' || c2=='O';
    if (pos==3) return c3=='X' || c3=='O';
    if (pos==4) return c4=='X' || c4=='O';
    if (pos==5) return c5=='X' || c5=='O';
    if (pos==6) return c6=='X' || c6=='O';
    if (pos==7) return c7=='X' || c7=='O';
    if (pos==8) return c8=='X' || c8=='O';
    if (pos==9) return c9=='X' || c9=='O';
    return true; // posição inválida = bloqueada
}

int main() {
    int pos;

    for (int rodada = 0; rodada < 9; rodada++) {

        // Alterna entre X e O a cada rodada
        char jogador = (rodada % 2 == 0) ? 'X' : 'O';

        exibir();

        // Pede uma posição válida e livre
        do {
            cout << "Jogador " << jogador << ", escolha (1-9): ";
            cin >> pos;
        } while (pos < 1 || pos > 9 || ocupada(pos));

        marcar(pos, jogador);

        // Checa vitória após cada jogada
        if (venceu(jogador)) {
            exibir();
            cout << "Jogador " << jogador << " venceu!\n";
            return 0;
        }
    }

    exibir();
    cout << "Empate!\n";
    return 0;
}

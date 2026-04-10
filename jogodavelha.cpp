#include <iostream>
using namespace std;

// 1. TABULEIRO — representado como array de char
char tabuleiro[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

// 2. EXIBIR O TABULEIRO
void exibir() {
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            cout << tabuleiro[l][c];
            if (c < 2) cout << "|";
        }
        cout << "\n";
        if (l < 2) cout << "-----\n";
    }
}

// 3. VERIFICAR VITÓRIA — checa linhas, colunas e diagonais
bool venceu(char p) {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0]==p && tabuleiro[i][1]==p && tabuleiro[i][2]==p) return true; // linha
        if (tabuleiro[0][i]==p && tabuleiro[1][i]==p && tabuleiro[2][i]==p) return true; // coluna
    }
    if (tabuleiro[0][0]==p && tabuleiro[1][1]==p && tabuleiro[2][2]==p) return true; // diagonal
    if (tabuleiro[0][2]==p && tabuleiro[1][1]==p && tabuleiro[2][0]==p) return true; // diagonal
    return false;
}

// 4. LOOP PRINCIPAL
int main() {
    for (int rodada = 0; rodada < 9; rodada++) {
        exibir();

        char jogador = (rodada % 2 == 0) ? 'X' : 'O';
        int pos;

        // Pedir jogada válida
        do {
            cout << "Jogador " << jogador << ", escolha (1-9): ";
            cin >> pos;
        } while (pos < 1 || pos > 9 || tabuleiro[(pos-1)/3][(pos-1)%3] == 'X'
                                     || tabuleiro[(pos-1)/3][(pos-1)%3] == 'O');

        // Marcar no tabuleiro
        tabuleiro[(pos-1)/3][(pos-1)%3] = jogador;

        // Checar vitória
        if (venceu(jog

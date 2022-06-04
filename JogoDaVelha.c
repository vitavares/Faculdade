//Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e perguntar se deseja jogar novamente.
#include <stdio.h>

int main(){

    int linha, coluna, i, e;
    char tabuleiro[3][3];

//Preencher o tabuleiro com espaços em branco para ganhar uma forma.
    for(linha=0; linha<3; linha++)
    {
        for ( coluna = 0; coluna < 3; coluna++)
        {
            tabuleiro[linha][coluna] = '  ';
        }
    }
//Preencher as linhas do tabuleiro.
    for ( i = 0; i < 3; i++)
    {
        for ( e = 0; e < 3; e++)
        {
            printf("%c", tabuleiro[i][e]);
            if (e < 2)
            {
                printf("|");
            }
        }
        if (i < 2)
        {
            printf("\n------\n");
        }
    }
    
    return 0;
}

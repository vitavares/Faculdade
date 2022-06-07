//Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e perguntar se deseja jogar novamente.
/*
    qual estrutura de dados será utilizada? -> ok
    como inicializar nossa estrutura de dados? -> ok
    imprimir jogo (tabuleiro) -> ok
    ler coordenadas
    salvar coordenadas
    alguém ganhou por linha?
    alguém ganhou por coluna?
    alguém ganhou na diagonal principal?
    alguém ganhou na diagonal secundária?
    repetir os passos a partir de 3 até alguém ganhar ou atingir 9 jogadas.
*/
#include <stdio.h>

int main(){

    int x, y, i, jogador=1;
    char tabuleiro[3][3];

//Preencher o tabuleiro com espaços em branco para ganhar uma forma.
    for(x=0; x<3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            tabuleiro[x][y] = ' ';
        }
    }
//Preencher as linhas do tabuleiro.
    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            printf("  %c  ", tabuleiro[x][y]);
            if (y < 2)
            {
                printf("|");
            }
        }
        if (x < 2)
        {
            printf("\n------------------\n");
        }
    } 
//Ler coordenadas.
    do
    {
        printf("\nLinha e coluna que você deseja jogar: ");
        scanf("%d%d", &x, &y);
    } while ( x<0 || x>2 || y<0 || y>2 || tabuleiro[x][y] != ' ');
    
    if (jogador=1)
    {
        tabuleiro[x][y]='X';
        jogador++;
    }
    else
    {
        tabuleiro[x][y]='O';
        jogador=1;
    }

    return 0;
}

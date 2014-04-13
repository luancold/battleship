#include <stdio.h>
#include <stdlib.h>

// Funcao para renderizar cada frame
int RenderFrame(char *player_1, char *player_2, int map_1[10][10], int map_2[10][10])
{
    int i,j; // Variaveis utilizadas para iteracao das matrizes de campo
    system("cls"); // Limpar console antes da renderizacao

    printf("Campo de %s\t\t\tCampo de %s\n\n",player_1, player_2);
    printf("  1 2 3 4 5 6 7 8 9 10\t\t\t  1 2 3 4 5 6 7 8 9 10\n");
    for(i = 0; i < 10; i++){
        printf("%c ",65 + i);
        for(j = 0; j < 10; j++){
            if(map_1[i][j] == 0)
                    printf("%c ",126);
        }
        printf("\n");
    }
    return 0;
}

int main(int argc, char *argv[]){

    // Checagem de parametro
    if( argc < 2 ){
        printf("Passe o nome do jogador como parametro\n");
        return EXIT_FAILURE;
    }

    // Declaracao e inicializacao de variaveis
    int i,j; // Variaveis utilizadas para iteracao das matrizes de campo
    char *player_1 = argv[1];
    char *player_2 = "Rola";
    int map_1[10][10]; // Campo do jogador 1
    int map_2[10][10]; // Campo do jogador 2

    // Loop usado para zerar os valores das matrizes
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            map_1[i][j] = 0;
        }
    }

    RenderFrame(player_1, player_2, map_1, map_2);

    //...
    return EXIT_SUCCESS;
}

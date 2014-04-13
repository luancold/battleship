#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *player_1;
    char *player_2;
    int map_1[10][10];
    int map_2[10][10];
    int i,j;
    if( argc < 2 ){
        printf("Passe o nome do jogador como parametro\n");
        return EXIT_FAILURE;
    }
    player_1 = argv[1];
    printf("Bem Vindo %s\n\n",player_1);
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            map_1[i][j] = 0;
        }
    }
    printf("  1 2 3 4 5 6 7 8 9 10\n");
    for(i = 0; i < 10; i++){
        printf("%c ",65 + i);
        for(j = 0; j < 10; j++){
            printf("%i ",map_1[i][j]);
        }
        printf("\n");
    }

    //...
    return EXIT_SUCCESS;
}

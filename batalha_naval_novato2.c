//Batalha Naval - Novato
#include <stdio.h>

int main() {
    char* colunas[10] = {"a ", "b ", "c ", "d ", "e ", "f ", "g ", "h ", "i ", "j "};
    char* linhas[10] = {"1 ", "2 ", "3 ", "4 ", "5 ", "6 ", "7 ", "8 ", "9 ", "10 "};
    char* naviohorizontal[3] = {"3s", "3s", "3s"};
    char* naviovertical[3] = {"3s", "3s", "3s"};

    
    printf("   ");
    for (int j = 0; j <= 9; j++) {
        printf("%s ", colunas[j]);
    }
    printf("\n");
    
    for (int i = 0; i <= 9; i++) {
        printf("%s  ", linhas[i]);
        for (int j = 0; j <= 9; j++) {
            if (i == 0 && (j >= 2 && j <= 4)){
            printf("%s ", naviohorizontal[j - 2]);
            } else {
                if(j == 8 && (i >= 7 && i <= 9)) {
                    printf("%s ", naviovertical[i - 7]);
                } else {
                printf("0  ");
            }
        }
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

//Filype ottoni campos rodrigues coelho
//UC22200168

#define SIZE 4

int main() {
    int matriz[SIZE][SIZE] = {{37, 32, 26, 14}, {45, 43, 42, 40}, {74, 65, 55, 48}, {95, 83, 79, 77}};
    int num, a, b;
    int TG = 0;

    printf("Insira o valor que deseja buscar: ");
    scanf("%d", &num);

    for (a = 0; a < SIZE; a++) {
        for (b = 0; b < SIZE; b++) {
            if (matriz[a][b] == num) {
                printf(" %d encontrado na linha %d, coluna %d da matriz.\n", num, a+1, b+1);
                TG = 1;
            }
        }
    }

    if (!TG) {
        printf("%d nao encontrado, tente outro numero.\n", num);
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

//filype ottoni campos rodrigues coelho
//UC22200168

#define SIZE 4

void insertionSort(int arr[], int n) {
    int i, k, j;
    for (i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

int main() {
    int matriz[SIZE][SIZE] = {{37, 32, 26, 14}, {45, 43, 42, 40}, {74, 65, 55, 48}, {95, 83, 79, 77}};
    int temp[SIZE*SIZE];
    int i, j, x = 0;

    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            temp[x++] = matriz [i][j];
        }
    }


    insertionSort(temp, SIZE*SIZE);

 
    x = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matriz[i][j] = temp[x++];
        }
    }


    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


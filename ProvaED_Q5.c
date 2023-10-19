#include <stdio.h>
#include <stdlib.h>

//Filype ottoni campos rodrigues coelho
//UC22200168

#define SIZE 4

void bubbleSort(int arr[], int n) {
    int i, f, temp;
    for (i = 0; i < n-1; i++) {
        for (f = 0; f < n-i-1; f++) {
            if (arr[f] > arr[f+1]) {
                temp = arr[f];
                arr[f] = arr[f+1];
                arr[f+1] = temp;
            }
        }
    }
}

int main() {
    int matriz[SIZE][SIZE] = {{37, 32, 26, 14}, {45, 43, 42, 40}, {74, 65, 55, 48}, {95, 83, 79, 77}};
    int temp[SIZE*SIZE];
    int i, f, x = 0;

  
    for (i = 0; i < SIZE; i++) {
        for (f = 0; f < SIZE; f++) {
            temp[x++] = matriz[i][f];
        }
    }

   
    bubbleSort(temp, SIZE*SIZE);

 
    x = 0;
    for (i = 0; i < SIZE; i++) {
        for (f = 0; f < SIZE; f++) {
            matriz[i][f] = temp[x++];
        }
    }

  
    for (i = 0; i < SIZE; i++) {
        for (f = 0; f < SIZE; f++) {
            printf("%d ", matriz[i][f]);
        }
        printf("\n");
    }

    return 0;
}


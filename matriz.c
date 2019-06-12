#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 4
 
int main () {
    int i, j;
    int mat[3][3] = { {1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}
                    };
    for (i=0; i < 3; i++) {
        for (j=2; j>=0; j--)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}

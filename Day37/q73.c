// Write a program to find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];
    int rowSum[rows];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}

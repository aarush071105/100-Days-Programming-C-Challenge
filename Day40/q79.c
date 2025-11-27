// Write a program to perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        int r = d < cols ? 0 : d - cols + 1;
        int c = d < cols ? d : cols - 1;

        while (r < rows && c >= 0) {
            printf("%d ", mat[r][c]);
            r++;
            c--;
        }
    }

    printf("\n");
    return 0;
}

//Q72 Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int rows, cols, sum = 0;
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("%d", sum);
    getchar();
    getchar();
    return 0;
}
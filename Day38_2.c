/*

Check if a matrix is symmetric.
Input 1:
2 2
1 2
2 1
Output 1:
True
Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int is_symmetric = 1;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(matrix[i][j] != matrix[j][i]){
                is_symmetric = 0;
                break;
            }
        }
        if(!is_symmetric){
            break;
        }
    }
    if(is_symmetric){
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
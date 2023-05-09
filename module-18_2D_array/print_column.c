// 3 3
// 1 2 4
// 2 3 5
// 6 7 8
// 1

// 2 3 7

#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int e_col;
    scanf("%d", &e_col);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(j==e_col){
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
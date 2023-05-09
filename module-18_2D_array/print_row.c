// 3 3
// 1 2 4
// 2 3 5
// 6 7 8
// 1

// 2 3 5

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
    int e_row;
    scanf("%d", &e_row);
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==e_row){
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}
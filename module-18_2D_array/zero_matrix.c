// 2 3

// 0 0 0
// 0 0 0


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
    int elements = row*col;
    int count=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]==0){
                count++;
            }
        }
    }
if(count==elements){
    printf("Zero Matrix");
}
else{
    printf("Not Zero Matrix");
}
    return 0;
}
// Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

// Input
// First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

// Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105).

// Last line contains a number X (0 ≤ X ≤ 105) described above.

// Output
// Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".

// input
// 2 2
// 1 2
// 3 4
// 3
// output
// will not take number

// input
// 2 2
// 1 2
// 3 4
// 10
// output
// will take number

#include <stdio.h>

int main() {
    
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int num;
    scanf("%d", &num);
    int exist = 0;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(a[i][j]==num){
               exist = 1; 
            }
        }
    }
    if(exist==1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    return 0;
}
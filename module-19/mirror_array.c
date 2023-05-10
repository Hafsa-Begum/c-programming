// Given two numbers 𝑁
// , 𝑀
//  and a 2D array of size 𝑁
//  * 𝑀
// . Print the inverted array that appeared in the mirror.

// Input
// First line contains two numbers 𝑁
// , 𝑀
//  (1≤𝑁,𝑀≤100)
//  𝑁
//  donates number of rows and 𝑀
//  donates number of columns.

// Each of the next 𝑁
//  lines will contain 𝑀
//  numbers (1≤𝐴𝑖,𝑗≤109)
// .

// Output
// Print the inverted array.

// Example
// input
// 3 3
// 2 3 5
// 7 9 20
// 35 1 12
// output
// 5 3 2 
// 20 9 7 
// 12 1 35 

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
    
    for(int i=0; i<row; i++){
        for(int j=col-1; j>=0; j--){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
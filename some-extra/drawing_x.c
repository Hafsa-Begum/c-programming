// Some day, an artist wanted to draw an X mark on the wall in a fashionable way.

// He wanted to do so by grouping snippets of slashes /, backslashes \, asterisks * and a capital X letter in an 𝑁×𝑁
//  square as shown in the sample. Can you help him?

// Input
// Only one line containing one odd number 𝑁
//  (3≤𝑁≤49
// ).

// Output
// Print the fashionable drawing.

// Example
// inputCopy
// 5
// outputCopy
// \***/
// *\*/*
// **X**
// */*\*
// /***\


#include <stdio.h>

int main() {
    int row;
    scanf("%d", &row);
    for(int i = 1; i<=row; i++){
        for(int j = 1; j<=row; j++){
            if(i+j==row+1 && i!=((row+1)/2)){
                printf("/");
            }
            else if(i==j && i!=((row+1)/2)){
                printf("\\");
            }
            else if(i==j && i==((row+1)/2)){
                printf("X");
            }
             else printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Given the width and the height of a shape determine whether it's for a square or a rectangle?

// Input
// The first line contains a single integer 𝑡(1≤𝑡≤1000)
//  the number of test cases.

// The first and only line of each test case contains two integers 𝑤,ℎ(1≤𝑤,ℎ≤106)
//  representing the width and the height, respectively.

// Output
// For each test case print 'Square' if the shape is a square otherwise print 'Rectangle';

// Example
// inputCopy
// 3
// 10 10
// 13 200
// 300 300
// outputCopy
// Square
// Rectangle
// Square

#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        if(a==b){
            printf("Square");
        }
        else{
            printf("Rectangle");
        }
        printf("\n");
    }
    return 0;
}
//  Given two numbers X and Y, Print their summation.

// Note: Solve this problem using function.

// Input
// Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 10^5).
// 5 2

// Output
// Print the summation value.
// 7

#include <stdio.h>

int sum (int a, int b){
    int total = a+b;
    return total;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int summation = sum(x,y);
    printf("%d\n", summation);
    return 0;
}
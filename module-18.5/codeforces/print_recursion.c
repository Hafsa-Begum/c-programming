// Given a number 𝑁
// . Print "I love Recursion" 𝑁
//  times.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number 𝑁
//  (1≤𝑁≤100)
//  .

// Output
// Print "I love Recursion" 𝑁
//  times.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        printf("I love Recursion\n");
    }

    return 0;
}
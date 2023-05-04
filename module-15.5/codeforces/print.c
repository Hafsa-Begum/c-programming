// Given a number N. Print all numbers from 1 to N.

// Note: Solve this problem using function.

// Input
// Only one line contains a number N (1 ≤ N ≤ 103).
// 5

// Output
// print numbers form 1 to N separated by a single space.
// 1 2 3 4 5

#include <stdio.h>

int print_1_to_n (int a){
    for(int i = 1; i<=a; i++){
        if(i==a){
            printf("%d", i);
        }else{
            printf("%d", i);
            printf(" "); 
        }
    }
}

int main() {
    int x;
    scanf("%d", &x);
    print_1_to_n(x);
    return 0;
}
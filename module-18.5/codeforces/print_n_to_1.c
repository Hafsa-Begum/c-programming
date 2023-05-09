// Given a number N. Print all numbers from N to 1 separated by a single space.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print from N to 1 separated by a single space.

// 4
// 4 3 2 1

#include <stdio.h>

void print_from_n_to_1(int n){
    if(n==0) return;
    if(n==1){
        printf("%d", n);
    }else{
        printf("%d ", n);
    }
    print_from_n_to_1(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    print_from_n_to_1(n);

    return 0;
}
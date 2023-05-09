// Given a number N. Print numbers from 1 to N in separate lines.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print N lines according to the required above.

// 5

// 1
// 2
// 3
// 4
// 5


#include <stdio.h>

void print_from_1_to_n(int num, int n){
    if(num==n+1) return;
    printf("%d\n", num);
    print_from_1_to_n(num+1, n);
}
int main() {
    int n;
    scanf("%d", &n);
    print_from_1_to_n(1, n);

    return 0;
}
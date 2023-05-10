// Given a number N. Print factorial of N.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 20).

// Output
// Print the factorial of the number N.

// Example
// input
// 5
// output
// 120

#include <stdio.h>
 
long long int fun (int n){
    if(n==0) return 1;
    return n*fun(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    long long int fact = fun(n);
    printf("%lld", fact);
    return 0;
}
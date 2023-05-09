// Given a number N and an array A of N numbers. Print the summation of the array elements.

// Note: Solve this problem using recursion.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print the summation of the N numbers.

// Examples
// input
// 4
// 1 4 2 7
// output
// 14
// input
// 4
// 5 5 5 5
// output
// 20

#include <stdio.h>

long long int fun(int a[],int n){
    if(n==0) return a[0];
    return a[n]+fun(a, n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
   long long int sum = fun(a,n-1);
    printf("%lld", sum);
    return 0;
}
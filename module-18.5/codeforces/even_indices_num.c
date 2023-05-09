// Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

// Note:

// Assume array A is 0-based indexing.
// Solve this problem using recursion.
// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print numbers in even indices in a reversed order separated by spaces.

// input
// 7
// 1 5 8 2 3 9 11
// output
// 11 3 8 1 


#include <stdio.h>

void print_even_indices_num(int a[],int n, int i){
    if(i==n) return;
    print_even_indices_num(a, n, i+1);
    if(i==0 || i%2==0){
        printf("%d ", a[i]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    print_even_indices_num(a,n,0);

    return 0;
}
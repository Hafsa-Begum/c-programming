// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

// Input
// First line contains a number N (1  ≤  N  ≤  106) number of digits.

// Second line contains N digits (0 ≤ Ai ≤ 9).

//input
//5
//13305
// Output
// 1+3+3+0+5=12

// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char ar[1000001];
    int n;
    scanf("%d %s", &n, ar);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum=sum+(ar[i]-'0');
    }
    printf("%d", sum);
    return 0;
}
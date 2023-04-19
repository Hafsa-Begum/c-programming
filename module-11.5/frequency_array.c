// Given 2 numbers 𝑁
// , 𝑀
//  and an array 𝐴
//  of 𝑁
//  numbers. For every number from 1 to 𝑀
// , print how many times this number appears in this array.

// Input
// First line contains two numbers 𝑁
// , 𝑀
//  (1≤𝑁≤105,1≤𝑀≤105)
// .

// Second line contains 𝑁
//  numbers (1≤𝐴𝑖≤𝑀)
// input
// 10 5
// 1 2 3 4 5 3 2 1 5 3
//output
//2
// 2
// 3
// 1
// 2

// Note
// Numbers from 1 to 5 appearance are :

// 1 appears 2 times in the array .
// 2 appears 2 times in the array.
// 3 appears 3 times in the array.
// 4 appears once in the array.
// 5 appears 2 times in the array.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int cnt[m];
    for (int i = 0; i < m; i++) {
        cnt[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cnt[a[i] - 1]++;
    }
    for (int i = 0; i < m; i++) {
        printf("%d\n", cnt[i]);
    }
    return 0;
}

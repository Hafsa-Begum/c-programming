// You are given 𝑁
//  numbers, and you should divide them into consecutive groups of size 𝐾
// , then print the minimum among each group. If the last group is of size <𝐾
// , print the minimum number found just after the last number received.

// For more explanation, see the notes.

// Input
// First line contains two numbers 𝑁,𝐾
//  (1≤𝐾≤𝑁≤105
// ) – the number of values, and the range length after which you should print the minimum.

// Second line contains 𝑁
//  numbers (−109≤𝑥≤109
// ).

// Output
// Print the answer in a single line.

// Examples
// inputCopy
// 8 3
// 4 -1 2 3 5 0 2 7
// outputCopy
// -1 0 2 
// inputCopy
// 8 4
// 4 -1 2 3 5 0 2 7
// outputCopy
// -1 0 



#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
    int n, m, index=0;
    scanf("%d %d", &n, &m);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    int x = ceil((n*1.0)/m);
    
    for(int i = 0; i<x; i++){
        int min = INT_MAX;
        for(int j = 0; j<m; j++){
            if(min>a[index]){
                min=a[index];
            }
            index++;
            if(index==n){
                break;
            }
        }
        printf("%d ", min);
    }

    return 0;
}
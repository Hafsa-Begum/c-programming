// You are given an array 𝑎
//  of 𝑛
//  integers, count the number of element 𝑎𝑖
//  in the array such that 𝑎𝑖+1
//  is also exists in the array 𝑎
//  .

// If there're duplicates in 𝑎
// , count them separately.

// Input
// The first line contains an integer 𝑛(1≤𝑛≤103)
//  the number of elements in the array 𝑎

// The second line contains 𝑛
//  integers 𝑎𝑖(0≤𝑋𝑖≤103)
//  the elements of the array 𝑎
// .

// Output
// output the number of elements as descriped above.

// Examples
// inputCopy
// 3
// 4 4 5
// outputCopy
// 2
// inputCopy
// 3
// 1 2 3
// outputCopy
// 2
// inputCopy
// 8
// 1 1 3 3 5 5 7 7
// outputCopy
// 0
// inputCopy
// 6
// 1 3 2 3 5 0
// outputCopy
// 3

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(a[i]+1 == a[j]){
                cnt++;
                break;
            }
        }
    }
    printf("%d ", cnt);
    return 0;
}
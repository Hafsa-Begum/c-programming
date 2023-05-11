// You are given an array 𝑎
//  of 𝑛
//  integers, and an integer 𝑘
// You can choose at most 𝑘
//  elements and get their summation.

// What is the maximum summation you can get?

// Input
// The first line contains two integers 𝑛
//  and 𝑘(1≤𝑘≤𝑛≤103)
//  the number of elements in the array 𝑎
//  and the maximum elements you can choose respectively.

// The second line contains 𝑛
//  integers 𝑎𝑖(−109≤𝑎𝑖≤109)
//  the elements of the array 𝑎
// .

// Output
// Output the maximum summation you can get.

// Examples
// input
// 2 2
// 1 2
// output
// 3
// input
// 2 1
// 1 2
// output
// 2
// input
// 3 3
// 1 2 3
// output
// 6

#include <stdio.h>
 
int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int a[n];
    for(long long int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    for(long long int i = 0; i<n-1; i++){
        for(long long int j = i+1; j<n; j++){
            if(a[i]<a[j]){
                long long int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    long long int sum = 0;
    for(long long int i=0; i<k; i++){
        if(a[i]<0){
            break;
        }
        sum = sum+ a[i];
    }
    
    printf("%lld", sum);
    return 0;
}
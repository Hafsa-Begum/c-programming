// You are given an array 𝑎
//  of 𝑛
//  integers, your task is to print the first (front) element then remove it, then print the last(end) element then remove it, and so on until the array becomes empty.

// Input
// The first line contains an integer 𝑛(1≤𝑛≤105)
//  the number of elements in the array 𝑎

// The second line contains 𝑛
//  integers 𝑎𝑖(−109≤𝑎𝑖≤109)
//  the elements of the array 𝑎
// .

// Output
// Print the array 𝑎
//  with the required order.

// Example
// inputCopy
// 5
// 1 2 3 4 5
// outputCopy
// 1 5 2 4 3

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int i=0;
    int j=n-1;
    
    while(i<j){
        printf("%d ",a[i]);
        printf("%d ",a[j]);
        i++;
        j--;
    }
    
    if(i==j){
        printf("%d ",a[i]);
    }
    return 0;
}
// You are given an array 𝑎
//  of 𝑛
//  integers. we want to make some operations on it.

// The operation is at each element that is equal to 𝑍𝑒𝑟𝑜
//  - starting from the beginning of the array-, reverse the order of all elements before it.

// What is the final order of this array?

// Input
// The first line contains an integer 𝑛
//  (1≤𝑛≤100)
//  the number of the elemnnts in the array 𝑎
// .

// The second line contains 𝑛
//  integers 𝑎𝑖
//  (0≤𝑎𝑖≤105)
//  the elements of the array 𝑎
// .

// Output
// You have to print the 𝑛
//  numbers after performing all operations (reversing) on it.

// Example
// inputCopy
// 7
// 1 2 0 4 0 5 6
// outputCopy
// 4 0 1 2 0 5 6 


#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]==0){
            int j=i-1;
            int k=0;
            while(k<j){
                int temp = a[k];
                a[k] = a[j];
                a[j] = temp;
                j--;
                k++;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
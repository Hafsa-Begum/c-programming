// You are given an array 𝑎
//  of 𝑛
//  integers. You have two kinds of operations

// increment any element in 𝑎
//  (increase it by one).
// decrement any element in 𝑎
//  (decrease it by one).
// What is the minimum number of operations to make the number of even elements equal to the number of odd elements, or detect that this is impossible?

// Input
// The first line contains a single integer 𝑡(1≤𝑡≤10)
//  the number of test cases.

// The first line of each test case contains an integer 𝑛(1≤𝑛≤105)
//  the number of elements in the array 𝑎
//  .

// The second line of each test case contains 𝑛
//  integers 𝑎𝑖(1≤𝑎𝑖≤105)
//  the elements of the array 𝑎
// .

// Output
// For each test case, print the minimum number of operations required, or −1
//  if it's impossible

// Example
// inputCopy
// 3
// 4
// 1 2 3 4
// 4
// 1 1 1 1
// 3
// 1 2 3
// outputCopy
// 0
// 2
// -1

#include <stdio.h>
#include <math.h>
 
int main() {
   int t;
   scanf("%d", &t);
   for(int i = 0; i<t; i++){
        int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int even = 0;
    int odd = 0;
    int val = n/2;
    for(int i = 0; i<n; i++){
        if(a[i]%2==0){
            even++;
        }
        else{
         odd++;   
        }
    }
    if(n%2!=0){
            printf("-1\n");
        }
    else if(even==odd){
        printf("0\n");
    }
    else if(even>odd){
        printf("%d\n", even-val);
    }
    else{
        printf("%d\n", odd-val);
    }
   }
    return 0;
}
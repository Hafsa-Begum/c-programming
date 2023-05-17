// Let's define 𝑓(𝑥)
//  as the number of times at which the integer 𝑥
//  can be divided by 2
// .

// You are given 𝑁
//  numbers, and you should print the maximum 𝑓(𝑥)
//  among all these numbers.

// Input
// The first line contains one number 𝑁
//  (1≤𝑁≤105
// ).

// The second line contains 𝑁
//  space-separated numbers where each number is between 1
//  and 1018
//  (inclusive).

// Output
// Print the maximum 𝑓(𝑥)
//  among all numbers.

// Examples
// inputCopy
// 3
// 18 24 7
// outputCopy
// 3
// inputCopy
// 4
// 14 7 9 5
// outputCopy
// 1
// Note
// In the first test case:

// 𝑓(18)
//  is equal to 1
// ; because we can divide 18
//  by 2
//  resulting in 9
// , but we cannot divide 9
//  by 2
//  (9
//  is not divisible by 2)
// .
// 𝑓(24)
//  is equal to 3
// ; because we can divide 24
//  by 2
//  resulting in 12
// ; again we can divide 12
//  by 2
//  (12
//  is divisible by 2
// ) resulting in 6
// ; again we can divide 6
//  by 2
//  (6
//  is divisible by 2
// ) resulting in 3
// , but we cannot divide 3
//  by 2
//  (3
//  is not divisible by 2
// ); so we could divide 24
//  three times.
// 𝑓(7)
//  is equal to 0
// ; because we cannot divide 7
//  by 2
// .


#include <stdio.h>
#include <limits.h>
long long int fun(long long int a){
    if(a%2!=0) return 0;
    long long int cnt = 1+fun(a/2);
    return cnt;
}
int main() {
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for(long long int i = 0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    
    long long int c[n];
    for(long long int i = 0; i<n; i++){
        c[i]=0;
    }
    for(long long int i = 0; i<n; i++){
        if(a[i]%2==0){
            c[i]=fun(a[i]);
        }
    }
    long long int max = INT_MIN;
    for(long long int i = 0; i<n; i++){
        if(c[i]>max){
            max=c[i];
        }
    }
    printf("%lld", max);
    return 0;
}
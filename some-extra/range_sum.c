// You are given a range represented by two integers 𝐿
//  and 𝑅
// , and you should find the sum of the numbers in the range between 𝐿
//  and 𝑅
//  inclusive.

// Input
// First line contains a number 𝑇
//  (1≤𝑇≤105
// ) – the number of test cases.

// Each of the next 𝑇
//  lines contains two numbers 𝐿,𝑅
//  (1≤𝐿,𝑅≤109
// ).

// Output
// For each test case, print the sum.

// Example
// inputCopy
// 4
// 3 6
// 2 11
// 4 16
// 7 17
// outputCopy
// 18
// 65
// 130
// 132

#include <stdio.h>
 
int main() {
    long long int t;
    scanf("%lld", &t);
    for(long long int j=0; j<t; j++){
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        long long int sum;
        long long int sum_b=(b*(b+1))/2;
        long long int sum_a=(a*(a+1))/2;
        if(b>a){
            sum=sum_b-sum_a+a;
        }
        else{
            sum=sum_a-sum_b+b;
        }
        if(sum<0){
            continue;
        }
        printf("%lld\n", sum);
        }
    return 0;
}
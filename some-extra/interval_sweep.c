// Given two numbers 𝑎
//  and 𝑏
// . You have to answer with "YES" if there is a non-empty interval consisting of numbers from 𝑙
//  to 𝑟
//  (𝑙,𝑙+1,𝑙+2,...,𝑟
// ) with a odd numbers and b even numbers, or "NO" otherwise.

// Input
// Only one line containing two numbers 𝑎
//  and 𝑏
//  (0≤𝑎,𝑏≤100
// )the number of odd numbers and the number of even numbers in the interval respectively.

// Output
// Print "YES" or "NO" as described in the statement.

// Examples
// inputCopy
// 2 3
// outputCopy
// YES
// inputCopy
// 3 1
// outputCopy
// NO
// Note
// Example 1 :

// some valid intervales that contain 2
//  odd numbers and 3
//  even numbers can be

// 𝑙=6,𝑟=10
//  contains numbers (6,7,8,9,10)
// .

// 𝑙=14,𝑟=18
//  contains numbers (14,15,16,17,18)
// .

#include <stdio.h>
#include <math.h>
 
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(abs(a-b)>1 || (a==0 && b==0)){
        printf("NO");
    }
    else{
        printf("YES");
    }
 
    return 0;
}
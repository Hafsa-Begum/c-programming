// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

// Examples
// input
// abba
// output
// YES
// input
// icpcassiut
// output
// NO
// input
// mam
// output
// YES


#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    gets(s);
    int len = strlen(s);
    int flag= 1;
    int i = 0;
    int j=len-1;
    while(i<j){
        if(s[i]!=s[j]){
            flag=0;
        }
        i++;
        j--;
    }
    if(flag==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}
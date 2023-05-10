// Given a string S. Print number of vowels in the string.

// Note:

// Vowel letters: ['a', 'e', 'i', 'o', 'u'].
// Vowel letters could be capital or small.
// Solve this problem using recursion.
// Input
// Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

// Output
// Print number of vowels in string S.

// Example
// input
// Data Structure Lab
// output
// 6

#include <stdio.h>
#include <string.h>

int fun(char s[], int i){
    
    if(s[i]=='\0') return 0;
    int count=fun(s, i+1);
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
           return count+1;
    }else{
        return count;
    }
}

int main() {
    char s[201];
    fgets(s, 201, stdin);
    int len = strlen(s);
    int count=fun(s,0);

    printf("%d", count);
    return 0;
}
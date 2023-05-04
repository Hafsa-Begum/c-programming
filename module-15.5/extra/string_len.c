// Question: Write a function named my_len() which receives a string as a parameter and then counts the length of that string and returns that count. Don’t use strlen() function to get the length of the string. After receiving that count in the main function print it.
// Note: The string will not have any spaces.

// hello
// 5

#include <stdio.h>
int my_len(char s[]){
    int count = 0;
    for(int i=0; s[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main() {
    char s[1000001];
    gets(s);
    int len = my_len(s);
    printf("%d", len);
    return 0;
}
#include <stdio.h>
#include <string.h>
int is_palindrome(char s[]){
    int len = strlen(s);
    int flag = 1;
    int i = 0;
    int j = len-1;
    while(i<j){
       if(s[i]!=s[j]){
           flag=0;
       }
       i++;
       j--;
    }
    return flag;
}
int main() {
    char s[1000001];
    gets(s);
    int val = is_palindrome(s);
    if(val==0){
        printf("Not Palindrome");
    }
    else{
       printf("Palindrome"); 
    }
    return 0;
}
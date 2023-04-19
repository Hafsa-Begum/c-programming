#include <stdio.h>
#include <string.h>

int main() {

    char a[100];
    scanf("%s", a);
    int cnt[26] = {0};
    for(int i=0; i<strlen(a); i++){
        cnt[a[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        printf("%c is %d times\n", i+'a',cnt[i]);
    }
    return 0;
}
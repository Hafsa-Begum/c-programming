#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    char c;
    int freq[26] = {0};
    while(scanf("%c", &c)!=EOF){
        freq[c-'a']++;
    }
    for(int i = 0; i<26; i++){
         while(freq[i]>0){
            printf("%c", i+'a');
            freq[i]--;
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[1001], b[1001];
    scanf("%s %s", a,b);
    // for(int i = 0; i<=strlen(b); i++){
    //     a[i] = b[i];
    // }
    strcpy(a,b);
    printf("%s", a);
    return 0;
}
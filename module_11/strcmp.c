// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[1001], b[1001];
    scanf("%s %s", a,b);
    int v = strcmp(a,b);
    if(v>0){
        printf("%s is smaller",b);
    }
    else if (v<0){
        printf("%s is smaller",a);
    }
    else{
        printf("%s is same as %s",a,b);
    }
    return 0;
}
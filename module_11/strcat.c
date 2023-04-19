// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[1001], b[1001];
    scanf("%s %s", a,b);
    strcat(a,b);
    printf("%s",a);
    return 0;
}
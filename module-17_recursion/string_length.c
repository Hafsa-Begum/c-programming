#include <stdio.h>
int fun(char a[], int i){
    if(a[i]=='\0') return;
    int len;
    len = fun(a, i+1);
    return len+1;
}
int main() {
    char a[1001];
    gets(a);
    int length = fun(a,0);
    printf("%d\n", length);
    return 0;
}
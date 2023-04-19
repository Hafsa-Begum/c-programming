// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[1001], b[1001];
    scanf("%s %s", a,b);
    int j=strlen(a);
    int i = 0;
    while(i<=strlen(b)){
        a[j]=b[i];
        j++;
        i++;
    }
    printf("%s",a);
    return 0;
}

//if we want to concat 2 or 3 char upto second string
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[1001], b[1001];
    scanf("%s %s", a,b);
    int j=strlen(a);
    int i = 0;
    while(i<2){
        a[j]=b[i];
        j++;
        i++;
    }
    a[j]='\0';
    printf("%s",a);
    return 0;
}
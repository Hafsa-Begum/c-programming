// Question: Take a positive integer N as input and print the pattern shown in the sample input output.
// ****
// ***
// **
// *

#include <stdio.h>

int main() {
    // Write C code here
    int n, k;
    scanf("%d", &n);
    k=n;
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=k ; j++){
            printf("*");
        }
        k--;
        printf("\n");
    }

    return 0;
}
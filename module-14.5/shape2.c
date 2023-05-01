// Given a number N. Print a pyramid that has N rows.
// 4
//    *
//   ***
//  *****
// *******

#include <stdio.h>

int main() {
    int n, s, k;
    scanf("%d", &n);
    s=n-1;
    k=1;
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=s ; j++){
            printf(" ");
        }
        for(int j = 1; j<=k ; j++){
            printf("*");
        }
        s--;
        k=k+2;
        printf("\n");
    }

    return 0;
}
// *********
// *********
// *********
// *********
// *********

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    k=2*n-1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=k; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
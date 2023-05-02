// *
// **
// ****
// ********

#include <stdio.h>
#include <math.h>

int main() {
    int n, k;
    scanf("%d", &n);
    k=0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=pow(2,k); j++){
                printf("*");
            
        }
        k++;
        printf("\n");
    }

    return 0;
}
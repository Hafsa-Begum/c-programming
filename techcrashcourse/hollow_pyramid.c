//     *
//    * *
//   *   *
//  *     *
// *********

#include <stdio.h>

int main() {
    int n, k, s;
    scanf("%d", &n);
    s=n-1;
    k=1;
    for(int i = 1; i<n; i++){
        for(int j = 1; j<=s; j++){
                printf(" ");
            
        }
        for(int j = 1; j<=k; j++){
                if(j==1 || j==k){
                    printf("*");
                }
                else {
                    printf(" ");
                }
        }
        s--;
        k=k+2;
        printf("\n");
    }
    for(int i = 1; i<=2*n-1; i++){
        printf("*");
    }
    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    k=2*n-1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=k; j++){
            if(i==1 || j==1 || i==n || j==k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
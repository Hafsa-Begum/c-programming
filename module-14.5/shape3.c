// Given a number N. Print a diamond that has 2N rows.
// 4

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *


#include <stdio.h>

int main() {
    int n, s, k;
    scanf("%d", &n);
    s=n-1;
    k=1;
    for(int i=1; i<=2*n; i++){
        for(int j = 1; j<=s ; j++){
            printf(" ");
        }
        for(int j = 1; j<=k ; j++){
            printf("*");
        }
        if(i<n){
            s--;
            k=k+2;
        }
        else if(i>=n+1){
            s++;
            k=k-2;
        }
        else{
            s=s;
            k=k;
        }
        printf("\n");
    }

    return 0;
}
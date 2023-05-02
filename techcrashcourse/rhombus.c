// ******
//  ******
//   ******
//    ******
//     ******
//      ******


#include <stdio.h>
#include <math.h>

int main() {
    int n, k, s;
    scanf("%d", &n);
    s=0;
    k=n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=s; j++){
                printf(" ");
            
        }
        for(int j = 1; j<=k; j++){
                printf("*");
            
        }
        s++;
        printf("\n");
    }

    return 0;
}
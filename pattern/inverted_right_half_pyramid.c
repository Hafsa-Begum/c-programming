#include <stdio.h>

int main() {
    int row, col, n;
    scanf("%d", &n);
    for(row = 1; row<=n; row++){
        for(col = n-row; col>=0; col--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
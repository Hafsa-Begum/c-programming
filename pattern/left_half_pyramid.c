#include <stdio.h>

int main() {
    int row, col, n;
    scanf("%d", &n);
    for(row = 1; row<=n; row++){
        for(col =1; col<=n; col++){
            
                if (row==1 || row ==n || col==1 || col ==n)
                {
                   printf("* ");
                }
        }
        printf("\n");
    }
    return 0;
}

//         * ===> row=1, col=5
//       * * ===> row=2, col=4,5
//     * * * ===> row=3, col=3,4,5
//   * * * * ===> row=4, col=2,3,4,5
// * * * * * ===> row=5, col=1,2,3,4,5

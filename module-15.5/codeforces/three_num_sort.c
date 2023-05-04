// Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

// Input
// Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)
// 3 -2 1

// Output
// Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
// -2
// 1
// 3

// 3
// -2
//1


#include <stdio.h>
#include <limits.h>
int ar_sort(int a[]){
    int min;
    int max;
    int middle;
    int x=a[0], y=a[1], z=a[2];
    if(x>=y && x>=z){
        max=x;
        if(y>=z){
            middle=y;
            min=z;
        }else{
            middle=z;
            min=y;
        }
    }
    else if(y>=x && y>=z){
        max=y;
        if(x>=z){
            middle=x;
            min=z;
        }else{
            middle=z;
            min=x;
        }
    }
    else{
        max=z;
        if(x>=y){
            middle=x;
            min=y;
        }
        else{
            middle=y;
            min=x;
        }
    }
    printf("%d\n%d\n%d\n", min, middle, max);
}
int main() {
    int ar[3];
    for(int i=0; i<3; i++){
        scanf("%d", &ar[i]);
    }
    ar_sort(ar);
    printf("\n");
    for(int i=0; i<3; i++){
        printf("%d\n", ar[i]);
    }
    return 0;
}
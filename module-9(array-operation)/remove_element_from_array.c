//remove particular element from particular position

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int index;
    scanf("%d",&index);
    for(int i = index; i<n-1; i++){
        ar[i]=ar[i+1];
    }
    for(int i = 0; i<n-1; i++){
        printf("%d ", ar[i]);
    }
    return 0;
}
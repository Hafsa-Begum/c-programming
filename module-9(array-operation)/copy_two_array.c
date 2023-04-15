// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n1, n2, n3;
    scanf("%d", &n1);
    int ar1[n1];
    for(int i = 0; i<n1; i++){
        scanf("%d", &ar1[i]);
    }
    scanf("%d",&n2);
    int ar2[n2];
    for(int i = 0; i<n2; i++){
        scanf("%d", &ar2[i]);
    }
    int ar3[n1+n2];
    for(int i= 0; i<n1; i++){
        ar3[i] = ar1[i];
    }
    int i = n1;
    for(int j = 0; j<n2; j++){
        ar3[i] = ar2[j];
        i++;
    }
    for(int i = 0; i<n1+n2; i++){
        printf("%d ", ar3[i]);
    }
    return 0;
}
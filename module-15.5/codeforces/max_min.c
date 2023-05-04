#include <stdio.h>

int max_min (int a[], int n){
    int max, min;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(a[i]<a[j]){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
    min = a[n-1];
    max = a[0];
    printf("%d %d", min, max);
}

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    max_min(ar, n);
    return 0;
}
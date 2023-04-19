#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int cnt[9] = {0};
    for(int i=0; i<n; i++){
        cnt[a[i]]++;
    }
    for(int i=0; i<10; i++){
        printf("%d is %d times\n", i,cnt[i]);
    }
    return 0;
}
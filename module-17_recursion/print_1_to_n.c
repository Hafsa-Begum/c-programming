//1

// 1
// 2
// 3
// 4
// 5

#include <stdio.h>
void fun(int n){
    if(n==6) return;
    printf("%d\n", n);
    fun(n+1);
}
int main() {
    int n;
    scanf("%d", &n);
    fun(n);

    return 0;
}
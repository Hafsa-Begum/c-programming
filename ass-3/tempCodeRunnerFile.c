#include <stdio.h>
int multiply(int a, int b){
    int mul = a*b;
    return mul;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int mul = multiply(n, m);
    printf("%d", mul);
    return 0;
}
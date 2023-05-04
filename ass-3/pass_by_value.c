#include <stdio.h>

int increament_of_x(int x){
    x++;
    printf("x value inside function: %d\n", x);
}
int main() {
    int x;
    scanf("%d", &x);
    increament_of_x(x);
    printf("x value outside function: %d\n", x);
    return 0;
}
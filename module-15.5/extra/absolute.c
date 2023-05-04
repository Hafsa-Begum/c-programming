// Question: Write a function named my_abs() that receives
// an integer value as parameter and returns the absolute
// value of that. Absolute value means if the value is negative
// it will be converted to positive value. Then print the value
// in the main function.

// 5
// 5

// -7
// 7


#include <stdio.h>
int my_abs(int num){
    int n = num;
    if(num<0){
        n = -1*num;
    }
    return n;
}
int main() {
    int a;
    scanf("%d", &a);
    int positive = my_abs(a);
    printf("%d", positive);
    return 0;
}
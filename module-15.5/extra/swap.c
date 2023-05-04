// Question: Write a function named swap_it() which will receive addresses of two integer variables. That means you need to receive them as integer pointers in the function parameter. In the function you need to swap the values of each other, you know that you can access the values of them by using dereferencing. You don’t need to return anything. After the function calls print the values of those two variables in the main function and see if anything happens!
// 10 20 

// 20 10

#include <stdio.h>
int swap(int *n, int *m){
    int temp = *n;
    *n = *m;
    *m=temp;
    printf("%d %d", *n, *m);
}
int main() {
    int n ,m;
    scanf("%d %d", &n, &m);
    swap(&n, &m);
    return 0;
}
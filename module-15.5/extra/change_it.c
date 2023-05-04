// Question: Make a function named change_it() which receives an array of integers and the size of that integer. In the function you need to change the value of the last index of that array and assign 100 there. You don’t need to return anything. After that print the array in the main function and see if it is updated.
// 5
// 10 20 30 40 50

// 10 20 30 40 100

#include <stdio.h>
int change_it(int s[], int n){
    int *p = &s[n-1];
    *p = 100;
    for(int i=0; i<n; i++){
        printf("%d ", s[i]);
    }
    
}
int main() {
    int n;
    scanf("%d", &n);
    int s[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &s[i]);
    }
    change_it(s,n);
    return 0;
}
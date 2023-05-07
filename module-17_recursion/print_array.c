// print array elements
// 5
// 10 20 30 40 50

// 10 
// 20
// 30
// 40
// 50
#include <stdio.h>
void fun(int a[], int n, int i){
    if(i==n) return;
    printf("%d\n", a[i]);
    fun(a, n, i+1);
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    fun(a,n,0);

    return 0;
}

// print array elements in reverse way
// 5
// 10 20 30 40 50

//50
//40
//30
//20
//10

// Online C compiler to run C program online
#include <stdio.h>
void fun(int a[], int n, int i){
    if(i==n) return;
    fun(a, n, i+1);
    printf("%d\n", a[i]);
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    fun(a,n,0);

    return 0;
}
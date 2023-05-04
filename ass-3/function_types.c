// #include <stdio.h>
// int multiply(int a, int b){
//     int mul = a*b;
//     return mul;
// }
// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int mul = multiply(n, m);
//     printf("%d", mul);
//     return 0;
// }

#include <stdio.h>
float greetings(){
    float time;
    printf("what time is it now? ");
    // insert international time: 0 to 24
    scanf("%f", &time);
    return time;
}
int main() {
    float time = greetings();
    if(time<12){
        printf("Good Morning!");
    }
    else if(time>12 && time<16){
        printf("Good afternoon!");
    }
    else if(time>16 && time<19){
        printf("Good Evening!");
    }
    else if(time>24){
        printf("Insert international time: 0 to 24");
    }
    else{
        printf("Good Night!");
    }
    return 0;
}

#include <stdio.h>
void elements_of_arrar(int a[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i =0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    elements_of_arrar(ar,n);
    return 0;
}

#include <stdio.h>
void sum(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("summation: %d", a+b);
}
int main() {
    sum();
    return 0;
}
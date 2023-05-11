// Given a number N and an array A of N numbers. Determine if the array is lucky or not.

// Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.

// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105).

// Output
// Print "Lucky" (without quotes) if the frequency of the minimum element is odd, otherwise print "Unlucky"(without quotes).

// Examples
// input
// 5
// 8 8 9 5 9
// output
// Lucky
// input
// 5
// 3 3 3 5 3
// output
// Unlucky

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int min = a[0];
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(min == a[i]) {
            cnt++;
        }
    }
    if(cnt%2==0) printf("Unlucky");
    else printf("Lucky");
    return 0;
}
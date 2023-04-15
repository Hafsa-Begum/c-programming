// insert element to a particular index

// two way solution
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int element, index;
    scanf("%d %d", &element, &index);
    for (int i = n; i > index; i--)
    {
        ar[i] = ar[i - 1];
        //or
        // if (i == index)
        // {
        //     ar[index] = element;
        // }
        // else
        // {
        //     ar[i] = ar[i - 1];
        // }
    }
    ar[index] = element;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}
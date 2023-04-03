// You need to take one integer value as input and tell if the value is positive or negative or zero.
// See the sample input and output for more clarification.
// -50 negative
// 0 zero
// 100 positive

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a > 0)
    {
        printf("positive");
    }
    else if (a < 0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
    return 0;
}
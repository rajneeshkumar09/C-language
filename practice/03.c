// write a c program to display n terms of natural numbers and their sum
#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
//        sum == 0;
        sum = sum + i;
    }
    printf("The sum of %d terms = %d", n, sum);
    return 0;
}

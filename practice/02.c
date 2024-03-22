// write a C program to compute the sum of the first 10 natural numbers
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
//    	sum==0;
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}

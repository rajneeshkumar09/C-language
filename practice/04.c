// write a program in C to read 10 numbers from the keybord and find their sum and average.
#include <stdio.h>
int main()
{
    int a, sum = 0, i;
    float avg;
    printf("Enter 10 numbers : ");
    for (i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d", &a);
        sum = sum + a;
    }
    avg = sum / 10.0;
    printf("the average of %d is %0.3f", a, avg);
    return 0;
}

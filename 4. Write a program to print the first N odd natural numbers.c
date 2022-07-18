// 4. Write a program to print the first N odd natural numbers
#include <stdio.h>
int main()
{
    int x, i;
    printf("enter a number\n");
    scanf("%d", &x);
    for (i = 1; i <= x * 2; i += 2)
    {
        // if (i % 2)
        printf("%d ", i);
    }
    return 0;
}

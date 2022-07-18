// 2. Write a program to print the first N natural numbers
#include <stdio.h>
int main()
{
    int x, i;
    printf("enter a number\n");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
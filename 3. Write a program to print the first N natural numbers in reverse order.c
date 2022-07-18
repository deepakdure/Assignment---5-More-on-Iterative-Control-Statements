// 3. Write a program to print the first N natural numbers in reverse order
#include <stdio.h>
int main()
{
    int x, i;
    printf("enter a number\n");
    scanf("%d", &x);
    for (i = x; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
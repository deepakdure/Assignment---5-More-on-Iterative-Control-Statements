// 7. Write a program to print the first N even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number\n");
    scanf("%d", &n);
    for (i = n * 2; i >= 2; i -= 2)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
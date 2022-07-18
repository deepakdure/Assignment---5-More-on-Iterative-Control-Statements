// 5. Write a program to print the first N odd natural numbers in reverse order
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a natural number\n");
    scanf("%d", &n);
    for (i = n * 2; i >= 1;)
    {
        if (i % 2)
        {
            printf("%d ", i);
            i -= 2;
        }
        else
            i--;
    }
    return 0;
}
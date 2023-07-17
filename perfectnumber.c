#include <stdio.h>
int perfect();

void main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    perfect(x);
}

int perfect(num)
{
    int sum = 0, rem, i;
    for (i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
        if (sum == num)
        {
            printf("%d is a perfect number", num);
        }
        else
        {
            printf("%d is not a perfect number", num);
        }
        return 0;
    }

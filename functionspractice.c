#include <stdio.h>
int perfect(num); // function prototype//

void main()
{
    int a; // a is a local variable//
    printf("Enter the numbers : ");
    scanf("%d", &a);
}

int perfect(num)
{
    int sum = 1, i;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    }
    if (sum == num && n != 1)
        return true;

    return false;
}
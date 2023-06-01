#include <stdio.h>
int main()
{
    long long n;
    int count = 0;
    printf("Enter any integer\n");
    scanf("%lld", &n);

    do
    {
        n /= 10;
        ++count;
    } while (n != 0);
        printf("number of digits = %d", count);
    return 0;
}
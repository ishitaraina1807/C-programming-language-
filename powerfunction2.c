#include <stdio.h>
int power(num1, num2); // function prototype//

void main()
{
    int x, y; // a is a local variable//
    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);
    printf("%d to the power %d = %d\n", x, y, power(x, y)); // function call in main//
}

int power(num1, num2) // num is a global variable//
{
    int ans = 1, i;
    for (i = 1; i <= num1; i++)
        ans = ans * num2;
    return ans;
}
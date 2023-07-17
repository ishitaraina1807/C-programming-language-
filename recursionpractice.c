#include <stdio.h>
int fibonacci(int i) // function definition//
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(i - 1) + fibonacci(i - 2); // function calling itself//
    }
}
int main()
{ // function call//
    int i;
    for (i=0 ; i<15 ; i++)
    printf("%d\n",fibonacci(i));
    return 0;
}

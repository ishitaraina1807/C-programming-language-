#include <stdio.h>
int sum(num1, num2); // function declaration//

void main()
{
    int a, b; // a is a local variable//
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("sum = %d\n", sum(a,b)); // function call in main//
}

int sum(num1, num2) // num is a global variable//   //definition//
{
    int result;
    result = num1 + num2;
    return result;
}  
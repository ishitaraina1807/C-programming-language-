#include<stdio.h>
int main()
{
    char operation;
    double x, y ;
    printf("enter the operation(+,-,*,/,^):\t");
    scanf("%c", &operation);
    printf("enter two operands\t");
    scanf("%lf%lf", &x, &y);

    switch(operation)
    {
        case '+':
        printf("%.1lf + %.1lf = %.1lf", x, y, x+y);
        break;
        case '-':
        printf("%.1lf - %.1lf = %.1lf", x, y, x-y);
        break;
        case '*':
        printf("%.1lf * %.1lf = %.1lf", x, y, x*y);
        break;
        case '/' :
        printf("%.1lf / %.1lf = %.1lf", x , y, x/y);
        break;
        case '^':
        printf("%.1lf^%.1lf",x , y, x^y);
        break;
        default :
        printf("enter valid input");
    }
    return(0);
}

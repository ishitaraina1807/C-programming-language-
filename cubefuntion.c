#include <stdio.h>
int cube(num); // function prototype//

void main()
{
    int a; // a is a local variable//
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Cube of %d = %d\n", a, cube(a)); // function call in main//
}

int cube(num) // num is a global variable//
{
    int result;
    result = num * num * num;
    return result;
}
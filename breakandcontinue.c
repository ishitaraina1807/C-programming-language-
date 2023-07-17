#include <stdio.h>
int main()
{
    printf("WELCOME");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n ENTER YOUR AGE\n", i);
        scanf("%d", &age);

        if (age < 18)

           continue;
    
     printf("member");
    }
    return (0);
}

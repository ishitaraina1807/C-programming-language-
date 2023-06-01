#include<stdio.h>
int main()
{
    char alphabet;
    alphabet='A';
    printf("Uppercase alphabets:\n");
        while(alphabet<='Z')
           { printf("%c\t", alphabet);
           alphabet++;
           }
        
    return 0;
}

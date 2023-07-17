#include <stdio.h>
int  checkprime()  //declaration//

int main()          //call//
{
int n, flag;   
printf("enter a number");
scanf("%d", &n);

flag = checkprime(n);
if (flag == 1)
printf("it is a prime number");
else
printf("it is not a prime number");
}

int checkprime (int n)        //definition//
{
    while (n%2!=0)
    flag == 1 ;
return 0 ;
}
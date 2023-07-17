#include<stdio.h>
int squareroot(num);

int main()
{
   int x;
   printf("enter a positive number : ");
   scanf("%d", &x);
   printf("Squareroot of %d is %d", x , squareroot(x));
}
int squareroot(num)
{
   int counter = 1, sqroot = 1;
   while(sqroot <= num)
   {
       counter ++;
       sqroot = counter * counter;
   }
   return counter - 1;
}
// Int counter=1,sqroot=1,val=14;
// while(sqroot <= val)
// {
// counter++;
// sqroot = counter*counter;
// }
// return counter - 1;
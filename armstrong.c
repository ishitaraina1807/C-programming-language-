#include<stdio.h>
void armstrong(void);
void main()
{
    armstrong();
}
void armstrong()
{
    int num, temp,sum=0,rem; 
    printf("ENTER ANY NUMBER : ");
    scanf("%d", &num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }
    if (sum==temp)
    printf("armstrong number");
    else
    printf("not armstrong");
}
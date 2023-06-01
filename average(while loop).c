/*program to find average of the marks*/
#include<stdio.h>
void main()
{
    int i, num =0;
    float sum = 0, average;
    printf("input the marks, 0 at the end\n");
    scanf("%d", &i);
    while ( i!= 0)
    {
        sum += i;
        num++;
        scanf("%d",&i);
    }
    average = sum/num;
    printf("average is %.2f",average);
}
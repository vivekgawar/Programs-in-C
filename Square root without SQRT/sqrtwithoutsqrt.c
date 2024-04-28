#include<stdio.h>
int main()
{
    float num,i;
    printf("Enter number:");
    scanf("%f",&num);
    for(i=0.01;i*i<num;i=i+0.01);
    printf("\n%0.2f",i);
}

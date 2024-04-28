#include <stdio.h>
//factorial without recursion (with iteration)
int main()
{
    int num;
    int fact = 1;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i = num;i>1;i--)
    {
        fact = fact*i;
    }
    printf("FACTORIAL IS : %d",fact);
}

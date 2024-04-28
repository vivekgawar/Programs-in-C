#include <stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    printf("Enter number:");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        rem = n%10; // 1->153%10 = 3
        sum = sum+(rem*rem*rem); // 1->(3*3*3)
        n = n/10; // 1-> 153/10 = 15 (as int) ------- and the process repeats
    }
    if(sum==temp)
    {
        printf("%d is armstrong number",temp);
    }
    else
    {
        printf("%d is not armstrong number",temp);
    }

}

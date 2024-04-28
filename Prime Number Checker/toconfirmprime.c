#include <stdio.h>
//to check if number is prime
int main()
{
    int num,i;
    printf("Enter number to check prime:");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
        if(num%i==0 && i!=num)
        {
            printf("%d is not prime!",num);
            break;
        }
        else if(num%i==0 && num==i)
        {
            printf("%d is prime!",num);
            break;
        }
    }

}

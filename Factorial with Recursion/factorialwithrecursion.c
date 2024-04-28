#include <stdio.h>
//factorial (with recursion)

int factorial(int x)
{
    if(x==0)
    {
         return 1;
    }
    else if(x!=0)
    {
        return (x*factorial(x-1));
    }

}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("FACTORIAL OF %d IS: %d",num,factorial(num));
}

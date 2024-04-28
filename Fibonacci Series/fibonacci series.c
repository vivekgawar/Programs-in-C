#include <stdio.h>
int main()
{
    int i,n;
    int t1=0,t2=1;
    int newTerm = t1+t2;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    printf("Fibonacci series: %d, %d,",t1,t2);

    for(i=3;i<=n;i++)
    {
        printf(" %d,",newTerm);
        t1 = t2;
        t2 = newTerm;
        newTerm = t1+t2;
    }
    getch();
}

#include <stdio.h>
int main()
{
    int i,j;
    int arr[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter element [%d][%d]:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\tMATRIX REPRESENTATION IS:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d\t",arr[i][j]);
        }
        printf("\t\n");
    }
}

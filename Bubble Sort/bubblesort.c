#include<Stdio.h>
//Bubble Sort
int main()
{
    int arr[6] = {1,324,56,436,64,57};
    int i,j,temp;
    int n = 6;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        printf(" %d,",arr[i]);
    }
}

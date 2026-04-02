#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the limit of the array :");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for (int i=1;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The maximum element in the array is : %d\n",max);
    printf("The minimum element in the array is : %d\n",min);
    return 0;
}
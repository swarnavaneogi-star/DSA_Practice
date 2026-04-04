// array program dsa bubble sort 
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    // inputing array elements from user
    for (int i=0;i<size;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    // bubble sort in ascending order 
    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    printf("The array after sorting in ascending order is :\n");
    // printing sorted array in ascending order 
    printf("Sorted array : ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    // now sorting user array in descending order
    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-1-i;j++)
        {
            if (arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // printing sorted array in descending order
    printf("\n");
    printf("The array after sorting in descending order is :\n");
    printf("\n Sorted array in descending order : ");   
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
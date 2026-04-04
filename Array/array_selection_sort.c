// array program dsa selection sort 
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
    int min_index;
    // selection sort in ascending order
    for (int i=0;i<size-1;i++)
    {
        min_index=i;
        for (int j=i+1;j<size;j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }  
    printf("\n");
    printf("The array after sorting in ascending order is :\n");
    // printing sorted array in ascending order
    printf("Sorted array : ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    // selection sort in descending order
    for (int i=0;i<size-1;i++)
    {
        min_index=i;
        for (int j=i+1;j<size;j++)
        {
            if (arr[j]>arr[min_index])
            {
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    } 
    printf("\n");   
    printf("The array after sorting in descending order is :\n");
    // printing sorted array in descending order
    printf("Sorted array in descending order : ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }     
    return 0;
}

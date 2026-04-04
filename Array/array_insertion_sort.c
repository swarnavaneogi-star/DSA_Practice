//array dsa program insertion sort 
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
    // insertion sort in ascending order
    for (int i=1;i<size;i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    // insertion sort in descending order
    for (int i=1;i<size;i++)    
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]<key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("\n");
    printf("The array after sorting in descending order is :\n");
    // printing sorted array in descending order
    printf("Sorted array in descending order : ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
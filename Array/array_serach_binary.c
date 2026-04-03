// program to search an element in an array using binary search
#include<stdio.h>
int main()
{
    while (1)
    {
        int size,i,value;
        printf("Enter the limit of the array :\n");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++)// taking array input from user
        {
            printf("Enter element no %d  :",i+1);
            scanf("%d",&arr[i]);
        }
        // sorting the array in ascending order
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
        // printing sorted array 
        printf("The array after sorting is  :\n");
        for (int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
        int low =0,high=size-1,mid;
        int flag =0;
        printf("\n Enter a number u want to serach in the array :\n");
        scanf("%d",&value);
        if (value<arr[low] || value>arr[high])
        {
            printf("Element %d not found in the array  \n",value);
        }
        else
        {
            while (low<=high)
            {
                mid=(low+high)/2;
                if (arr[mid]==value)
                {
                    flag=1;
                    break;
                }
                else if (arr[mid]>value)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            if (flag==1)
            {
                printf("Element %d found in the array at position %d \n ",value,mid+1);
            } 
            else 
            {
                printf("Element %d not found in the array  \n",value);
            }
        }
        // asking user if they want to search again
        int choice;
        printf("\n Do you want to search again? (1=Yes / 0=No) : ");
        scanf("%d", &choice);
        if(choice == 0)
        {
            printf("Exiting program. Goodbye!\n");
            break;
        }
    }
    return 0;
}
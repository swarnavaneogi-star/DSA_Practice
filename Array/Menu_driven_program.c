#include<stdio.h>
int main ()
{
    int choice;
    int size;
    int elemntsentered=0;
    int arr[100];
    while(1)
    {
        printf("1. Enter the size of the array\n");
        printf("2. Enter the elements of the array\n");
        printf("3. Display the elements of the array\n");
        printf("4.To sort the array in ascending order :\n");
        printf("5.To sort the array in descending order :\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the size of the array: ");
                scanf("%d",&size);
                break;
            case 2:
                if(size==0)
                {
                    printf("Please enter the size of the array first\n");
                    break;
                }
                if(elemntsentered==size)
                {
                    printf("You have already entered the elements of the array\n");
                    break;
                }
                for(int i=0;i<size;i++)
                {
                    printf("Enter element %d: ",i+1);
                    scanf("%d",&arr[i]);
                    elemntsentered++;
                }
                break;
            case 3:
                if(size==0)
                {
                    printf("Please enter the size of the array first\n");
                    break;
                }
                if(elemntsentered==0)
                {
                    printf("Please enter the elements of the array first\n");
                    break;
                }
                printf("The elements of the array are: ");
                for(int i=0;i<size;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
            case 4:
            if(size==0)
                {
                    printf("Please enter the size of the array first\n");
                    break;
                }
                if(elemntsentered==0)
                {
                    printf("Please enter the elements of the array first\n");
                    break;
                }
                // Sort in ascending order
                for(int i=0;i<size-1;i++)
                {
                    for(int j=0;j<size-1-i;j++)
                    {
                        if(arr[j]>arr[j+1])
                        {
                            int temp=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=temp;
                        }
                    }
                }
                printf("The array sorted in ascending order is: ");
                for(int i=0;i<size;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n\n");
                break;
            case 5:
            if(size==0)
                {
                    printf("Please enter the size of the array first\n");
                    break;
                }
                if(elemntsentered==0)
                {
                    printf("Please enter the elements of the array first\n");
                    break;
                }
                // Sort in descending order
                for(int i=0;i<size-1;i++)
                {
                    for(int j=0;j<size-1-i;j++)
                    {
                        if(arr[j]<arr[j+1])
                        {
                            int temp=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=temp;
                        }
                    }
                }
                printf("The array sorted in descending order is: ");
                for(int i=0;i<size;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n\n");
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice, please try again\n");
        }
    } 
    return 0;                                  
}
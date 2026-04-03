// program to search an element in the array using linear search method
#include<stdio.h>
int main()
{
    while(1)
    {
        int n,i, value;
        printf("Enter the limit of the array :\n");
        scanf("%d",&n);
        int arr[n];
        printf("\nEntering array elemnents :\n");
        for ( i=0;i<n;i++)
        {
            printf("Enter element no %d  :",i+1);
            scanf("%d",&arr[i]);
        }
        printf("\nEnter a number to serach in the array  :");
        scanf("%d",&value);
        int flag =0;
        for ( i=0;i<n;i++)
        {
            if (arr[i]==value)
            {
             
                flag =1;
                 break ;
             
            }
        }

        if( flag==1 )
        {
            printf("Element %d found in the array at position %d \n ",value,i+1);
        } 
        else {
            printf("Element %d not found in the array  \n",value);
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
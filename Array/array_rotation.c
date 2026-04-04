#include<stdio.h>
int main ()
{
    int size, rotation;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    // inputing array elements from user
    for (int i=0;i<size;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of rotations :");
    scanf("%d",&rotation);
    // left rotation
    for (int i=0;i<rotation;i++)
    {
        int temp=arr[0];
        for (int j=0;j<size-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[size-1]=temp;
    }
    printf("\n");
    printf("The array after left rotation is :\n");
    // printing array after left rotation
    printf("Array after left rotation : ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int original[size];
    for(int i = 0; i < size; i++)
    {
        original[i] = arr[i];
    }
     // right rotation
     for (int i=0;i<rotation;i++)
     {
         int temp=arr[size-1];
         for (int j=size-1;j>0;j--)
         {
             original[j]=original[j-1];
         }
         original[0]=temp;
     }
     printf("\n");
     printf("The array after right rotation is :\n");
     // printing array after right rotation
     printf("Array after right rotation : ");
     for (int i=0;i<size;i++)
     {
         printf("%d ",original[i]);
     }
     printf("\n");

     return 0;
}
#include<stdio.h>
int main ()
{
    int r,c;
    printf("Enter the number of rows and columns of the 2d matrix :");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    // inputing 2d array elements from user
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("Enter element at position (%d,%d) :  ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    // displaying all the elements of the array 
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sum =0;
    // calculating the sum off all elements of the 2d array 
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements of the 2D array is: %d\n ", sum);
    printf("\n");
    int largest =arr[0][0];
    // finding the largest element in the 2d array
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (arr[i][j]>largest)
            {
                largest = arr[i][j];
            }
        }
    }
    printf("Largest element in the 2D array is: %d\n ", largest);
    return 0;
}
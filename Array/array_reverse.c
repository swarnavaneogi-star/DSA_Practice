#include<stdio.h>
void reverse(int *arr, int size) 
{
    for (int i = 0; i < size / 2; i++) 
    {
        // Swap arr[i] and arr[size - i - 1]
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
}
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
    int i=0;
    int j=n-1;
    reverse(arr,n);
    printf("The reversed array is : ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

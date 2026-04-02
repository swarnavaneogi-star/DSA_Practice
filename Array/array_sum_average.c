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
    int sum =0;
    float average;
    for (int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    average = (float)sum/n;
    printf("The sum of the elements in the array is : %d\n",sum);
    printf("The average of the elements in the array is : %.2f\n",average);
    return 0;
}
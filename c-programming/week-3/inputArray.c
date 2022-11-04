#include<stdio.h>
int main()
{
    int n=1000;
    int arr[n];
    int i;

    for(i=0;i<n;i++)
    {
        printf("Enter the value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("The value of arr[%d] is %d\n", i, arr[i]);
    }
    return 0;
}
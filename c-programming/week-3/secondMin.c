#include<stdio.h>
int main()
{
    int n=6;
    int a[] = {1,2,3,4,5,6};
    int i;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
        else
        {
            // do nothing
        }
    }
    printf("The maximum element of the array is %d\n",m);
    return 0;
}
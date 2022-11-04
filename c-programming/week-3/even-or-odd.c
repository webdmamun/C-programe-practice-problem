#include<stdio.h>
int main()
{
    int n=100;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the value of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    int e_c = 0, o_c = 0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e_c++;
        }
        else
        {
            o_c++;
        }
    }
    printf("The number of even numbers in the array is %d\n",e_c);
    printf("The number of odd numbers in the array is %d\n",o_c);
}
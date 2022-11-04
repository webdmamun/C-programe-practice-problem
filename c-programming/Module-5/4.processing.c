#include<stdio.h>

int main()
{
    // processing
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    int sum;
    sum = a+b;
    printf("Sum of the two numbers is %d\n", sum);

    int dif;
    dif = a-b;
    printf("Difference of the two numbers is %d", dif);

    return 0;
}

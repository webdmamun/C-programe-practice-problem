#include<stdio.h>

int main()
{
    int x;
    printf("Please enter an input: ");
    scanf("%d",&x);
    if(x%2==0){
        // Code will be  executed if the code is true
        printf("input is even number.\n");
    }
    else{
        printf("input is an odd number.\n");
    }


    return 0;
}

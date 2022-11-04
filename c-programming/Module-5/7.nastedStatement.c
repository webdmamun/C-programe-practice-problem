#include<stdio.h>

int main()
{
    int x,y;
    printf("Please enter two input: ");
    scanf("%d%d",&x,&y);
    if(x>y){
        // Code will be  executed if the code is true
        printf("X is large\n");
    }
    else if(x<y)
    {
        printf("Y is large");
    }
    else
    {
        printf("They are equal");
    }


    return 0;
}


#include<stdio.h>
int main()
{
    int N, x;
    int a[200001];
    int i;

    scanf("%d", &N);
    // for ( i = 0; i < N; i++)
    // {
    //     printf("%d\n", a[i]);
    // }
    for(i = 1; i < N; i++)
    {
        scanf("%d", &x);
        a[x] = 1;
    }
    for(i = 1; i <= N; i++)
    {
        if(a[i] != 1)
        {
            printf("%d\n", i);
            break;
        }
        
    }
    return 0;
}

#include<stdio.h>
int  main()
{
    int n,sum;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int a=0;
    int b=1;
    for (int i = 1; i <=n ; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
    return 0;

}
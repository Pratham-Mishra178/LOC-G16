#include<stdio.h>
void main()
{
    int prv=0,pre=1,term,i,n;
    printf("enter the number of terms = \n ");
    scanf("%d",&n);
    printf("the fibonacci series:  ");
    printf("0   1    ");
    for (i=3;i<=n;i++)
    {
        term=prv+pre;
        printf("%d   ",term);
        prv=pre;
        pre=term;
    }
    printf ("\n");
}

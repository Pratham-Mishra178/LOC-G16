#include<stdio.h>
int main()
{  
int arr[2][2];int sum=0;int arr2[2][2];int prod=1;
    
    printf("enter the number for the first 2*2 array:\n");
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("enter the numbers for the second arra:\n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("sum matrix:\n");
    for(int i =0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            sum=arr[i][j]+arr2[i][j];
            printf("%d ",sum);
                       
        }
        printf("\n");
    }
    printf("Product matrix:\n");
    for(int i =0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            prod=arr[i][j]*arr2[i][j];
            printf("%d ",prod);
                       
        }
        printf("\n");
    }

    

    return 0;
}
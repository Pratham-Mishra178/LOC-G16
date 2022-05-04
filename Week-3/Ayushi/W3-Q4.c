#include<stdio.h>
void Swap(int *n1 , int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    int n1,n2;
    printf("Enter two numbers for swapping :\n");
    scanf("%d %d",&n1,&n2);

    Swap(&n1,&n2);
    printf("After swapping n1 = %d & n2 = %d",n1,n2);
    return 0;
}

#include<stdio.h>
int Even(int num){
    return num % 2 == 0;
}
int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
    
    return 0;

}
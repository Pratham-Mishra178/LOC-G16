#include<stdio.h>

int GCD(int n1 , int n2){

    while ( n1 != n2)
    {
        if( n1 > n2){
            return GCD(n1-n2 , n2);
        }
        else{
            return GCD(n1 , n2-n1);
        }
    }
    
    
}
int main()
{
    int n1,n2;
    printf("Enter two numbers : \n");
    scanf("%d %d" ,&n1,&n2);

    printf("The GCD of %d and %d is %d",n1,n2,GCD(n1,n2));
    return 0;

}
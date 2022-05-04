#include<stdio.h>
 
int Prime(int , int);

int main()
{
    int num , check;
    printf("Enter a number : \n");
    scanf("%d",&num);

    check = Prime(num , num/2);
    if (check == 1)
    {
        printf("%d is a prime number ,num");
    }
    
    else{
        printf("%d is not a prime number.",num);
    }

    return 0;
}

Prime(int num , int i){
    if (i == 1)
    {
        return 1;
    }
    else if (num % i == 0)
    {
        return 0;
    }
    else{
        return Prime(num , i-1);
    }  
}
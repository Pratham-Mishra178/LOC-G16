#include<stdio.h>
int main()
{  
   printf("enter the number:\n");
   int odd=0;int even=0;int num;
  
   for(int i=1;i<=10;i++)
   {
       scanf("%d",&num);
       if(num%2==0)
       {even=even+num;}
       else{odd=odd+num;}
      
   }
   printf("even sum:%d\n",even);
   printf("odd sum:%d\n",odd);
    return 0;
}
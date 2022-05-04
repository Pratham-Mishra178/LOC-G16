#include<stdio.h>
#include<string.h>
int main()
{
   char str1[50],str2[50];
   printf("Enter the first string:\n");
   gets(str1);
   printf("Enter the second string:\n");
   gets(str2);
   char str[100];
   strcat(str1,str2);
   int l=strlen(str1);
   for(int i=l-1;i>=0;i--) //reversing
   {
      char ch=str1[i];
      strcat(str,&ch);
   }
   puts(str);
   return 0;

}
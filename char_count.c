#include <stdio.h>

int main()
{
   char str[1000], ch;
   int i, frequency = 0;

 
   gets(str);


   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   printf("%d",  frequency);

   return 0;
}
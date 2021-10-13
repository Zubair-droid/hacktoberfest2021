/*

Sample Output:

h      o

 e   l

    l

 e   l

h      o 

*/


#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=1;
    char s[10];
    scanf("%s",s);
    k=strlen(s);
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
         	if(i==j||k-j-1==i)
                printf("%c",s[j]);
            else
     		    printf(" ");
        }
    		printf("\n");
    }
    return 0;
}
#include<stdio.h>
int power_fn(int base,int exp)
{
  int i,sum=1;
  for(i=0;i<exp;i++)
  {
    sum=sum*base;
  }
  return sum;
}
int main()
{
  int binary,sum=0,rem,exp=0;
  scanf("%d",&binary);
  while(binary!=0)
  {
    	rem=binary%10;
    	sum=sum+rem*power_fn(2,exp);
    	exp++;
    	binary=binary/10;
  }
  int array[100],i=0,j;
  while(sum!=0)
  {
    	array[i++]=sum%8;
    	sum=sum/8;
  }
  for(j=i-1;j>=0;j--)
    printf("%d",array[j]);
}
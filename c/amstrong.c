#include<stdio.h>
 int main()
 {
 int a,sum=0,r,temp;
  printf("Enter the number: ");
  scanf("%d",&a);
  
  temp=a;
  while(a>0)
  {
   r=a%10;
   sum=sum+(r*r*r);
   a=a/10;
  }
  if (temp==sum)
  printf("%d is an amstrong number",temp);
  else
  printf("%d is not an amstrong number",temp);
  
  return 0;
 }

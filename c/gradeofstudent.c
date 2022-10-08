#include<stdio.h>

int main()
{
int m1,m2,m3,m4,m5,total;
float percentage;

printf("Enter the marks of five subjects (out of 100):");
scanf("%d %d %d %d %d ",&m1,&m2,&m3,&m4,&m5);

total=m1+m2+m3+m4+m5;
percentage= (total/5);

if (percentage >=80.0)
printf("A grade");
else if (percentage >=60.0)
printf("B grade");
else if (percentage >=40.0)
printf("C grade");
else
printf("FAIL");

return 0;

}

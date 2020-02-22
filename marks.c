#include<stdio.h>
 int main()
{ char name[20];
  float m1,m2,m3,sum;
  float avg;
  printf("enter your name\n");
  scanf("%s", name);
  printf("enter the  1 mark \n");
  scanf("%f",&m1);
  printf("enter the 2 marks\n");
  scanf("%f",&m2);
  printf("enter the 3 marks\n");
  scanf("%f",&m3);
  sum= m1+m2+m3;
  avg= (sum/3.0);
  printf("your name= %s\n",name);
  printf("your total:");
  printf("%f",sum);
  printf("your avg:");
  printf("%f",avg);
}

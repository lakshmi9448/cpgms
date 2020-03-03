#include<stdio.h>
 void main()
 { int a,b,c,d,e,num,sum;
   printf("enter a five digit number\n");
   scanf("%d",&num);
   a=num/10;
   b=a/100;
   c=b/1000;
   d=c/10000;
   e=d/100000;
   sum= a+b+c+d+e;
   printf("sum=%d",sum);
 }

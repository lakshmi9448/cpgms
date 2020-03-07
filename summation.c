#include<stdio.h>
 void main()
 { int num,a,b,c,d,e;
   int sum =0;
   printf("enter a five digit number\n");
   scanf("%d",&num);
   while (num!=0)
   { sum = sum+num%10;
     num = num/10;
   }
   printf("sum %d=",sum);
 }
   

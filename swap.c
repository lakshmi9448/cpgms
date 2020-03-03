#include<stdio.h>
 void main()
 { int a,b,temp;
   printf("enter two int values for a and b \n");
   scanf("%d%d",&a,&b);
   temp = a;
   a = b;
   b= temp;
   printf("after swapping a =%d and b = %d\n",a,b);
 }
   

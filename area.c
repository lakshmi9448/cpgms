#include<stdio.h>
 void main()
 { int r;
   float area,c;
   printf("enter the radius\n");
   scanf("%d" ,&r);
   area = 3.14*r*r;
   c = 2*3.14*r;
   printf("the area is %f = \n",area);
   printf("the circumference %f =\n",c);
}

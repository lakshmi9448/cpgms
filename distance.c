#include<stdio.h>
 void main()
 { float a,b,d;
   printf("enter the loacation of point 1 and 2\n");
   scanf("%f%f",&a,&b);
   if( a>b) 
    { d = a-b;
      }
   else
     d = b-a;
   printf("distance=%f\n",d);
}

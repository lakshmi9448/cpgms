#include<stdio.h>
 void main()
 { float m;
   printf("enter the total marks of a student");
   scanf("%f",&m);
   if((m>=90)&&(m<=100))
   printf("grade = A");
   else if((m>=80)&&(m<=89))
   printf("grade = B");
   else if((m>=70)&&(m<=79))
   printf("grade = C");
   else if((m>=60)&&(m<=69))
   printf("grade = D");
   else if((m>=50)&&(m<=59))
   printf("grade = E");
   else
   printf("grade = F");
 }

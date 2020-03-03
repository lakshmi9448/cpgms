#include<math.h>
#include<stdio.h>
 float emi_calculator(float p,float r,float t)
  {
    float emi;
    r=r/(12*100);
    t=t*12;
    emi =(p*r*pow(1+r,t))/(pow(1+r,t)-1);
    return emi;
  }
int main()
 { 
   float pr,rate,time,emi;
   printf("enter the principal ,rate,time\n");
   scanf("%f%f%f\n",&pr,&rate,&time);
   emi = emi_calculator(pr,rate,time);
   printf("\n monthly emi is = %f\n",emi);
   return 0;
} 

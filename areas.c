#include<stdio.h>
#include<stdlib.h>
 void main()
 float fA(float a, float b, float c) 
{ 
    if (a < 0 || b < 0 || c <0 || (a+b <= c) || 
        a+c <=b || b+c <=a) 
    { 
        printf("Not a valid trianglen"); 
        exit(0); 
    } 
    float s = (a+b+c)/2; 
    return sqrt(s*(s-a)*(s-b)*(s-c)); 
} 
  
int main() 
{   float a,b,c;
    printf("enter the values of three sides \n");
    scanf("%f%f%f", &a,&b,&c); 
    printf("Area is %f", fA(a, b, c)); 
    return 0; 
} 

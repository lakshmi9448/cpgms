#include<stdio.h>
int rd(int num)
 { int r=0;
  while(num>0)
   {
     r= r*10+num%10;
     num=num/10;
   }
return r;
}
void main()
{ int num;
  printf("enter a five digit intger\n");
  scanf("%d",&num);
  printf("reverse no is %d=",rd(num));
  getchar();
 } 
  


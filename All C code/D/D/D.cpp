#include <stdio.h>
int main ()
{
 int a,b,i,temp, remainder, reverse = 0,jum,jum1;
 scanf("%d",&a);
 fflush(stdin);
 for(i=1;i<=a;i++){
  temp=0;
  remainder=0;
  reverse=0;
 scanf("%d",&b);
 fflush(stdin);
 printf("Case #%d: ",i);
 printf("%d",b);
    temp = b;
    while (temp > 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
     }
 printf(" %d",reverse);
 jum = reverse + b;
 printf(" %d",jum);
 reverse=0;
 while (jum > 0)
    {
        remainder = jum % 10;
        reverse = reverse * 10 + remainder;
        jum /= 10;
     }
 printf(" %d\n",reverse);
} 

   getchar();
   return 0;
}
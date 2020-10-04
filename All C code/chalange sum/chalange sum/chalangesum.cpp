#include <stdio.h>
int main()
{ long long int lit,bil,a,b,c,x=0,y,p=0,r=0;

 scanf("%lld",&lit);
 fflush(stdin);

 for(bil=1;bil<=lit;bil++)
 {a=0,b=0,c=0,x=0,y=0,p=0,r=0;
  scanf("%lld",&a);
  fflush(stdin);
  c=a;
  printf("Case #%lld: ",bil);
  printf("%lld ",a);
  while(a!=0){
    b=a%10;
    x=(x*10)+b;
    a=a/10;
  }
  printf("%lld ",x);
  y=c+x;
  printf("%lld ",y);
  while(y!=0){
    p=y%10;
    r=(r*10)+p;
    y=y/10;
  }
  printf("%lld\n",r);
 }
 getchar();
 return 0;
}
#include <stdio.h>

int main()
{
 float n,tot;
 scanf("%f",&n);
 fflush(stdin);
 if(1<=n||n<=1000)
	 {tot=(1+n)/2*n;}
 printf("%.0f\n",tot);
 getchar();
 return 0;
}
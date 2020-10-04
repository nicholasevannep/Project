#include<stdio.h>
int main()
{ int a,b,c;
	scanf("%d",&a);
	fflush(stdin);
	scanf("%d",&b);
	fflush(stdin);
	scanf("%d",&c);
	fflush(stdin);

	if(a<=10)
	{printf("0.00%d...\n",a);}
	else if(a<=100&&a>10)
	{printf("0.0%d...\n",a);}
	else if(a%111==0)
	{printf("0.%d...\n",a/111);}
	else if(a<1000&&a>100)
	{printf("0.%d...\n",a);}

	if(b<=10)
	{printf("0.00%d...\n",b);}
	else if(b<=100&&b>10)
	{printf("0.0%d...\n",b);}
	else if(b%111==0)
	{printf("0.%d...\n",b/111);}
	else if(b<1000&&b>100)
	{printf("0.%d...\n",b);}
	

	if(c<=10)
	{printf("0.00%d...\n",c);}
	else if(c<=100&&b>10)
	{printf("0.0%d...\n",c);}
	else if(c%111==0)
	{printf("0.%d...\n",c/111);}
	else if(c<1000&&c>100)
	{printf("0.%d...\n",c);}
	

getchar();
return 0;
}
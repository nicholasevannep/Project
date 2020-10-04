#include<stdio.h>
int main()
{
	int a,b,c,n;
	n=255;
	a=0;
	b=0;
	for(a=0;a<n;a++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		

	}
	getchar();
	return 0;
}
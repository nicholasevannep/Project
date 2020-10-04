#include<stdio.h>
void calculate (int x, int y, int *p, int *q)
{
	*p=x+y;
	*q=x*y;
}
void main()
{
	int x,y,p,q;
	printf("Input x :\n");
		scanf("%d",&x); fflush(stdin);
	printf("Input y :\n");
		scanf("%d",&y); fflush(stdin);

		calculate(x,y,&p,&q);
		printf("x+y= %d\n",p);
		printf("x*y= %d\n",q);
	getchar();
}
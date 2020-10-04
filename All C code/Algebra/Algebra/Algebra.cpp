#include<stdio.h>
int main()
{	int lit,a;
	scanf("%d",&lit);
	fflush(stdin);

	for(a=1;a<=lit;a++)
	{
		float x1,x2,x3,x4,y1,y2,y3,y4,c1,c2,c3,c4,y,x;
		scanf("%f %f %f",&x1,&y1,&c1);
		fflush(stdin);
		scanf("%f %f %f",&x2,&y2,&c2);
		fflush(stdin);
		x3=x1;
		y3=y1;
		c3=c1;
		x1*=y2;
		c1*=y2;
		x2*=y1;
		c2*=y1;
		y1*=y2;
		x = (c1-c2)/(x1-x2);
		y = (c1-(x1*x))/y1;
		printf("Case #%d:\n",a);
		printf("x = %0.4f\n",x);
		printf("y = %0.4f\n",y);
		}
		
	getchar();
	return 0;
}
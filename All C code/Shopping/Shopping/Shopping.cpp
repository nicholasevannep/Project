#include<stdio.h>
int main ()
{	int lit1,lit2,a,b,x[21],y[21];
	scanf("%d",&lit1);
	fflush(stdin);
	for(a=0;a<lit1;a++)
	{
	scanf("%d",&x[a]);
	}
	fflush(stdin);

	scanf("%d",&lit2);
	fflush(stdin);
	for(b=0;b<lit2;b++)
	{
	scanf("%d",&y[b]);
	printf("%d\n",x[y[b]-1]);
	}
	fflush(stdin);
getchar();
return 0;
}
#include<stdio.h>
int main()
{	int lit,a,b,x,hasil;
	scanf("%d",&lit);
	fflush(stdin);
	for(x=1;x<=lit;x++)
	{scanf("%d %d",&a,&b);
	fflush(stdin);
	hasil=a*b;
	printf("%d x %d = %d\n",a,b,hasil);
	}
	getchar();
	return 0;
}
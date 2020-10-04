#include<stdio.h>
int main()
{
	int lit1,lit2,x,y;
	long long int z;
	scanf("%d",&lit1);
	fflush(stdin);
	for(x=1;x<=lit1;x++)
	{
		int N[100001]={};
	scanf("%d",&lit2);
	fflush(stdin);
	for(y=1;y<=lit2;y++)
		{	int num;
			scanf("%d",&num);
			N[num]+=1;
		}
		fflush(stdin);
		printf("Case #%d:\n",x);
		for(z=1;z<=100001;z++)
		{
			if(N[z]>0)
			{printf("%lld %d\n",z,N[z]);}
		}
	}
	getchar();
	return 0;
}
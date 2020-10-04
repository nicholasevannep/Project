#include<stdio.h>
int main()
{	int lit,x,y,z,i,num;
	scanf("%d",&lit);
	fflush(stdin);
	for(x=1;x<=lit;x++)
	{	
		scanf("%d",&num);
		fflush(stdin);
		long long int sum=1;
		int faktor[10001]={};
		printf("Case #%d:\n",x);
		for(y=2;y<=num;y++)
		{ 
			for(z=2;z<=y;z++)
			{
				if(y%2==0)
				{
					faktor[2]+=1;
					y=y/2;
					z=z-1;
				}
				else if(z%2>0 && y%z==0)
				{
					faktor[z]+=1;
					y=y/z;
					z=z-1;
				}
				else{}
			}
		}
		for(i=1;i<=10001;i++)
		{
			if(faktor[i]>0)
			{
				printf("%d %d\n",i,faktor[i]);
			}
		}
	}
	getchar();
	return 0;
}
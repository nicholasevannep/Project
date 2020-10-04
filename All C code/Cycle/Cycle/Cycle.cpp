#include<stdio.h>
int main()
{
	int lit,x,ulang,hasil;
	int n,a,b,i,j;
	scanf("%d",&lit);
	fflush(stdin);
	for(x=1;x<=lit;x++)
	{	scanf("%d %d %d",&n,&a,&b);
		fflush(stdin);
		ulang=0;
		hasil=0;
		int ans=1,base;
		base=b;
		for(i=0;hasil!=(a%n);i++)
		{	j=i;
			while (j>=0)
			{
			if(j%2==1)
			{ans =(ans*base);}
			j=j/2;	
			base=(base*base);
			}
			hasil=(a*ans)%n;
		}
		printf("Case #%d: %d",x,i);
	}
	getchar();
	return 0;
}
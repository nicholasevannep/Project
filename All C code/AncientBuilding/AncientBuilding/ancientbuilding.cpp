#include<stdio.h>
#include<math.h>
int main()
{	int lit,x,y;
	scanf("%d",&lit);
	fflush(stdin);
	for(x=1;x<=lit;x++)
	{ long long a,b,ans,mod,p,q,ans1,ans2,base1,base2;
		mod=1000000007;
		scanf("%lld %lld",&a,&b);
		fflush(stdin);
		base1=2;
		base2=3;
		ans1=1;
		ans2=1;
	while (a>0)
	{
		if (a%2==1)
			{ans1 = (ans1*base1)%mod;}
		a=a/2;	
		base1=(base1*base1)%mod;
	}
	while (b>0)
	{
		if (b%2==1)
			{ans2 = (ans2*base2)%mod;}
		b=b/2;	
		base2=(base2*base2)%mod;
	}
		ans=(ans1*ans2)%mod;

		printf("%lld\n",ans%mod);
	}
	getchar();
	return 0;
}
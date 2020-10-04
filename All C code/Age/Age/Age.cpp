#include<stdio.h>
int main()
{	int lit,test;
	scanf("%d",&lit);
	fflush(stdin);
	for(test=1;test<=lit;test++)
	{	unsigned int x,y,z,m,n,p;
		unsigned int a,b,bibi,jojo,hasil1,hasil2;
		scanf("%u %u %u %u %u %u",&x,&y,&z,&m,&n,&p);
		fflush(stdin);
		a=x-(m*x);
		b=(n*y)-y;
		bibi=(b-a)/(m-n);
		jojo=m*(bibi-x)+x;
		hasil1=jojo+z;
		hasil2=p*(bibi+z);
		if(hasil1!=hasil2){
			printf("Case #%d: NO\n",test);
		}else{
			printf("Case #%d: YES\n",test);
		}

	}
	getchar();
	return 0;
}
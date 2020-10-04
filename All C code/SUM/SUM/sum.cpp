#include<stdio.h>
int main()
{ int lit,x,y,z,a,b,p,q,arraynum,num;
	scanf("%d",&lit);
	fflush(stdin);
	for(x=1;x<=lit;x++)
	{	long int arry[100000];
		scanf("%d %d",&arraynum,&num);
		fflush(stdin);
		for(y=1;y<=arraynum;y++)
		{
			scanf("%ld",&arry[y]);
		}
		for(z=1;z<=num;z++)
		{	long int sum=0;
			scanf("%d %d",&a,&b);
			fflush(stdin);
			for(p=a;p<=b;p++)
			{	
				sum+=arry[p];
			}
			printf("%d\n",sum);
		}
	}
	getchar();
	return 0;
}
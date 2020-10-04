#include<stdio.h>
int main()
{
	int lit;
	scanf("%d",&lit);
	fflush(stdin);
	for(int i=1;i<=lit;i++)
	{
		int sec;
		scanf("%d",&sec);
		fflush(stdin);
		printf("Case #%d:\n",i);
		for(int x=sec;x>0;x--)
		{
			if(x==sec||x==5||x==10||x==30||x==60)
			{printf("%d SECONDS TILL NEW YEAR!!\n",x);}
			else{printf("%d\n",x);}
		}
	}
	getchar();
	return 0;
}
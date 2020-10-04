#include<stdio.h>
int main()
{
	int lit;
	scanf("%d",&lit);
	fflush(stdin);
	for(int x=1;x<=lit;x++)
	{
		int num,sum0=0,sum1=0,tot0=0,tot1=0;
		scanf("%d",&num);
		fflush(stdin);
		char inp[10001];
		scanf("%s",&inp);
		fflush(stdin);
			for(int y=0;y<num;y++ )
			{	if(y==1)
				{ if(inp[y]=='0')
					{sum0++;}
				else if(inp[y]=='1')
					{sum1++;}
				else{}
				}

				if(inp[y]=='0'&&inp[y-1]=='0')
				{sum0++;
				}
				else if(inp[y]=='1'&&inp[y-1]=='0'||y==num)
				{	
					if(tot0<sum0)
					{
					tot0=sum0;
					sum0=0;
					}
					else{if(tot0==0){tot0=sum0;}}
				}
				else{}
				
				if(inp[y]=='1'&&inp[y-1]=='1')
					{sum1++;
					}
				else if(inp[y]=='0'&&inp[y-1]=='1'||y==num)
				{	
					if(tot1<sum1)
					{
					tot1=sum1;
					sum1=0;
					}
					else{if(tot1==0){tot1=sum1;}}
				}
				else{}
			}

		if(tot1>tot0)
		{printf("%d",tot1);
		printf("%d",tot0);
		printf("case #%d: 1 %d\n",x,tot1);}
		else {printf("case #%d: 0 %d\n",x,tot0);}
	}
	getchar();
	return 0;
}
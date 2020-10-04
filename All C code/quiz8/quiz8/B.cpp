#include<stdio.h>

void sort(int &a, int &b)
{	int temp;
	if(a>b && a!='\0' && b!='\0')
	{ temp=a;
		a=b;
		b=temp;
	}
}

int main()
{
	int lit;
	scanf("%d",&lit);
	fflush(stdin);
	for(int i=1;i<=lit;i++)
	{
		int num;
		int stack;
		int arr[201]={};
		scanf("%d %d",&num,&stack);
		fflush(stdin);
		for(int j=0;j<num;j++)
		{
			scanf("%d",&arr[j]);
		}fflush(stdin);
		for(int k=0;k<=num;k++)
		{	
			for(int l=0;l<=k;l++)
			{
			sort(arr[l],arr[l+1]);
			}
		}
		
		
	}
	getchar();
	return 0;
}
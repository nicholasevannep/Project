#include<stdio.h>
int main()
{	int arr[21];
	int lit;
	scanf("%d",&lit);
	fflush(stdin);
	for(int i=0;i<lit;i++)
	{
	scanf("%d",&arr[i]);
	}fflush(stdin);
	int n;
	int pos;
	scanf("%d",&n);
	fflush(stdin);
	for(int i=0;i<lit;i++)
	{
		if(arr[i]==n){pos=i; break;}
	}
	
	//6 3 7 2 10
	for(int j=pos;j<lit;j++)
	{	
		if(arr[j]<arr[pos])
		{
			printf("%d",&arr[j]);
			break;
		}
		else
		{if(j==lit-1)printf("-1");}
	}

	getchar();
	return 0;
}
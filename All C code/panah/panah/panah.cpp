#include<stdio.h>
int main()
{	int atas,bawah;
	scanf("%d",&bawah);
	fflush(stdin);
	scanf("%d",&atas);
	fflush(stdin);
	for(int i=bawah;i<=atas;i++)
	{
		for(int j=1;j<=i;j++)
		{printf("*");}
		printf("\n");;
	}
	for(int i=atas-1;i>=bawah;i--)
	{
		for(int j=1;j<=i;j++)
		{printf("*");}
		printf("\n");;
	}


	getchar();
	return 0;
}
#include<stdio.h>
int main()
{	
	int lit,i,lit2,x,y,sum;
	char angka[100][100];
	scanf("%d",&lit);
	fflush(stdin);
	for(i=1;i<=lit;i++)
	{	sum=0;
		scanf("%d",&lit2);
		for(x=0;x<2;x++)
			{
			scanf("%s",&angka[x]);
			}
		printf("%d\n",angka[0][1]-38);
		printf("%d\n",angka[1][1]-38);
		fflush(stdin);
		for(y=0;y<lit2;y++)
			{
			sum=0;
			sum=angka[0][y]+angka[1][y];
			printf("%d",sum);
			}
		
	}
	getchar();
	return 0;
}
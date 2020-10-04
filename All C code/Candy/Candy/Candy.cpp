#include<stdio.h>
int main()
{	int lit;
	int num;
	scanf("%d",&lit);
	fflush(stdin);
	for(int x=1;x<=lit;x++)
		{
		int sum=0;
		scanf("%d",&num);
		fflush(stdin);
		for(int y=1;y*y<=num;y++)
		{
			int a = num / y;
			if(num % a == 0 && a != y)
			{
				sum++;
			}
			if(num%y ==0)
			{
				sum++;
			
			}
				
		}
		printf("Case #%d: %d\n",x,sum);
		}
	getchar();
	return 0;

}
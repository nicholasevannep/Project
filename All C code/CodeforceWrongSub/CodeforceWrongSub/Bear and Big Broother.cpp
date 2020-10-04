#include<stdio.h>
int main()
{	int limak,bob;
	scanf("%d %d",&limak,&bob);
	fflush(stdin);
	int year=0;
	while(limak<=bob)
	{
		limak*=3;
		bob*=2;
		year++;
	}
	printf("%d",year);

	getchar();
	return 0;
}
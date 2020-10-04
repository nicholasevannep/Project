#include<stdio.h>
int main(){
	int power,balon;
	char b[10^9];
	scanf("%d %d",&balon,&power);
	fflush(stdin);
	scanf("%c[^\n]",b);
	fflush(stdin);
	if(power<=balon)
	{
		if(power<balon,--power)
		{
		printf("%d",power);
		}

	}
	else
	{
		power=balon;
		printf("%d",power);
	}

	getchar();
	return 0;
}
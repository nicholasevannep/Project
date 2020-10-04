#include<stdio.h>
int pangkat(int n)
	{	int ini=2;
		int sum=1;
		if(n==0)
		{ return 1;}
		else if(n<0){n*=-1;return pan gkat(n);}
		else
		{return 2*pangkat(n-1);}
	}

int main()
{	int n=-2;
	if(n>=0)
	{
	printf("%d",pangkat(n));
	}
	else {printf("1/%d",pangkat(n));}
	getchar();
	return 0;
}
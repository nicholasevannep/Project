#include<stdio.h>

long factor(int n)
{	
	if(n==0) return (1);
	else return (n*factor(n-1));
}

int main()
{	int n;
	scanf("%d",&n);
	fflush(stdin);
	printf("%d",factor(n));
	getchar();
	return 0;
}
#include<stdio.h>

int maximum(int x,int y);
int main()
{
	int a,b;
	printf("Masukkan Nilai a&b:");
	scanf("%d %d",&a,&b);
	fflush(stdin);
	printf("Largest : %d",maximum(a,b));
	getchar();
	return 0;
}
int maximum(int x,int y)
{
	int max=x;
	if(y>max) max=y;
	return max;
}
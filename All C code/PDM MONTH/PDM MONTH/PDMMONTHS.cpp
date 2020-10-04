#include<stdio.h>
int main ()
{ char month[12][10]={"January","February","March","April","Mei","June","July","August","Septemer","October","November","Desember"};
	int x;
	scanf("%d",&x);
	fflush(stdin);
	printf("%s",month[x-1]);
	getchar();
	return 0;
}
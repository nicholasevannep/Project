#include<stdio.h>
#include<string.h>
int main()
{	int num;
	scanf("%d",&num);
	fflush(stdin);

	printf("%.30d\n",num);
	getchar();
	return 0;
}

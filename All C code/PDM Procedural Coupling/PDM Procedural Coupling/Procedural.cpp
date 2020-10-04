#include <stdio.h>
void procedural()
{
	int lit,a,b,c=0;
	printf("Total lit: ");
	scanf("%d %d %d",&a,&b,&lit); fflush(stdin);
	for(int i=1; i<=lit; i++){
	a=b*b-i;
	printf("Loop #%d: %d\n",i,a);
	}
}

int main()
{
	procedural();
	getchar();
}

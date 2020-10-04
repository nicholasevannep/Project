#include <stdio.h>

void temporal()
{
	int a=3,b=5,c=8;
	for(int i=1;i<=10;i++){
		a++; b+=2; b--;
	}
	printf("x++: %d\ny+=2: %d\nz--: %d\n",a,b,c);
}

int main()
{
	temporal();
	getchar();
}

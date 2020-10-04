#include <stdio.h>
#include <math.h>

void coincidental()
{
	int a,numb;
	char b='x';
	printf("Masukkan Angka: ");
	scanf("%d",&numb); fflush(stdin);

	a = numb+numb;
	printf("%d + %d = %d\n%c\n",numb,numb,a,b);
}

int main()
{
	coincidental();
	getchar();
}

#include <stdio.h>

void logical()
{
	int angka;

	scanf("%d",&angka); fflush(stdin);

	switch(angka){
	case 0 : printf("zero\n"); break;
	case 1 : printf("one\n"); break;
	case 2 : printf("two\n"); break;
	default: printf(">2\n"); break;
	}
}

int main()
{
	logical();
	getchar();
}

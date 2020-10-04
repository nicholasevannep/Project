#include<stdio.h>
int main()
{ char x[15];
  char y[15];
  char z[15];
  char a[10];
  char b[10];
  char c[10];
	scanf("%[^0-9]",x);
	scanf("%[0-9]",a);
	scanf("%[^0-9]",y);
	scanf("%[0-9]",b);
	scanf("%[^0-9]",z);
	scanf("%[0-9]",c);
	fflush(stdin);
	printf("%-10s %s\n",x,a);
	printf("%-10s %s\n",y,b);
	printf("%-10s %s\n",z,c);

	getchar();
	return 0;
}
#include<stdio.h>
int main(){
	char operand;
	int a,b,total;
	printf("Masukkan Angka 1:");
	scanf("%d",&a);
	fflush(stdin);
	printf("Masukkan Angka 2:");
	scanf("%d",&b);
	fflush(stdin);
	printf("Masukkan Operasi:");
	scanf("%c",&operand);
	fflush(stdin);

	switch (operand) {
	case '+' :
		total=a+b;
		printf("%d + %d = %d",a,b,total);
		break;
	case '-' :
		total=a-b;
		printf("%d - %d = %d",a,b,total);
		break;
	case '*' :
		total=a*b;
		printf("%d * %d = %d",a,b,total);
		break;
	case '/' :
		total=a/b;
		printf("%d / %d = %d",a,b,total);
		break;
	default :
		printf("tidak terdaftar");



	}
	getchar();
	return 0;
}
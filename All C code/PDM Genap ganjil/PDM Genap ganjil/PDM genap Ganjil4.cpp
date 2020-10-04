#include<stdio.h>
int main(){

	int angka;
	printf("Masukkan angka :");
	scanf("%d",&angka);
	fflush(stdin);



	if(angka%2==0){
		printf("angka genap");
	}
	else
	{
		printf("angka ganjil");
	}

	getchar();
	return 0 ;
}
#include<stdio.h>
int main()
{ int x,deret;
	printf("Mencari pangkat 4\n");
	printf("Masukkan Jumlah Deret Pangkat 4 Yang di Cari:\n");
	scanf("%d",&x);
	fflush(stdin);
	deret = x*x*x*x;
	printf("%d",deret);
	getchar();
	return 0;
}
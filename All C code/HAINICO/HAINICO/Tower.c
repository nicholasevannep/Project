#include <stdio.h>

int main(){
	int a;
	char *bulan[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

	printf("Masukkan Bulan\n");
	scanf("%d",&a);
	fflush(stdin);
	printf("%s", bulan[a-1]);

	getchar();
	return 0;
}
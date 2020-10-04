#include<stdio.h>
int main()
{
	int data,jumlah,cacah;
	jumlah=0;
	data=0;
	cacah=0;
	while(data != 1)
	{
		printf("Masukkan data angka: ");
		scanf("%d",&data);
		fflush(stdin);
		jumlah+=data;
		cacah++;
	}
	printf("Jumlah data adalah: %d\n",jumlah);
	printf("Rata-rata: %d",jumlah/cacah);

	getchar();
	return 0;
}
#include<stdio.h>
int main(){
	int makan;
	printf("Makanan manakah yang anda mau? \n");
	printf("1.Nasi Goreng\n");
	printf("2.Nasi Telur\n");
	printf("3.Ayam Goreng\n");
	printf("4.Nasi Ayam\n");
	printf("5.Telur\n");
	printf("Masukkan nama menu\n");
	scanf("%d",&makan);
	fflush(stdin);

	switch(makan){
	case 1 :
		printf("Pilihan anda adalah nasi goreng\n");
	case 2 :	
		printf("Pilihan anda adalah nasi telur\n");
	case 3 :
		printf("Pilihan anda adalah ayam goreng\n");
	break;
	case 4 :
		printf("Pilihan anda adalah nasi ayam\n");
	break;
	case 5 :
		printf("Pilihan anda adalah telur\n");
	break;
	default :
		printf("Tidak ada\n");
		break;


	}

	getchar();
return 0;
}

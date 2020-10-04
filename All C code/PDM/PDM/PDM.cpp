#include "stdio.h"

int main()
{

	int penjualan,salary,bonus;
	penjualan = 5000000;
		if(penjualan > 5000000){
		bonus=penjualan*0.1;
		salary= 3100000+bonus;}
		else{

			salary=3100000;

		}
		 printf("Gaji = %d",salary);
		 getchar();
	return 0 ;
}

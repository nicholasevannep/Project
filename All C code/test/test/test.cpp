#include<stdio.h>
#include<math.h>
int main() 
{  
	int a,b,c;
	float D,x1,x2;

	printf("masukkan a :");
	scanf("%d"),&a; // meminta input a
	fflush(stdin); // membersihkan memory buffer

	printf("masukkan b :");
	scanf("%d"),&b; // meminta input b
	fflush(stdin); // membersihkan memory buffer
	
	printf("masukkan c :");
	scanf("%d"),&c; // meminta input c
	fflush(stdin); // membersihkan memory buffer

	if(a==0){
		printf("tidak bisa dihitung");
	}
	else{
		D=b*b-(4*a*c);

		if (D<0) {
			printf("Determinan < 0"); }
		else {
			x1=(-b+ sqrt(D))/(2.0*a);
			x2=(-b- sqrt(D))/(2.0*a);

			printf("x1=%0.2f \n",x1);
			printf("x2=%0.2f \n",x2);
		}
	}
	getchar();
	return 0;
}

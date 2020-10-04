#include<stdio.h>
int main(){
	int ijazah;
	printf("IJAZAH PENDIDIKAN? \n");
	printf("1.SD\n");
	printf("2.SMP\n");
	printf("3.SMA\n");
	printf("4.D3\n");
	printf("5.S1\n");
	printf("Kamu lulusan apa(1/2/3/4/5)?\n");
	scanf("%d",&ijazah);
	fflush(stdin);

	switch(ijazah){
	case 1 :
		printf("Kamu lulusan SD\n");
	break;
	case 2 :	
		printf("Kamu lulusan SMP\n");
	break;
	case 3 :
		printf("Kamu lulusan SMA\n");
	break;
	case 4 :
		printf("Kamu lulusan D3\n");
	break;

	defalut :
		printf("Kamu lulusan S1\n");


	}

	getchar();
return 0;
}
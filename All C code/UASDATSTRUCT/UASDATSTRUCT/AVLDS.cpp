#include<stdio.h>
#include<malloc.h>

struct Data{
	int angka;
	int height;
	struct Data *left,*right;
};

void cls(){
	for(int i=0;i<30;i++){
	printf("\n");
	}
}

int max (int a,int b){
	if(a>b) return a;
	return b;
}


int getHeight()

int main(){
	int menu;
	do{
	cls();


	}while(menu!=3);


getchar();
return 0;

}
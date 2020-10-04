#include<stdio.h>

int rec(int a,int b){
	int x;
	if(a==0){
		x=b;
	}
	else if(b==0){
		x=a;
	}
	else {
		x=rec(b,(a%b));
	}
	return x;
}


int main(){
	int lit;
	scanf("%d",&lit);
	getchar();
	int x[100001];
	for(int i=0;i<lit;i++){
	scanf("%d",&x[i]);
	getchar();	
	}
	int max=10000;
	for(int i=0;i<lit;i++){
		for(int j=i+1;j<lit;j++){
			int hasil;
			hasil= rec(x[i],x[j]);
			if(max>=hasil){
				max=hasil;
			}
		}
	}
	printf("%d",max);

getchar();
return 0;
}
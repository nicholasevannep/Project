#include<stdio.h>

int minNum(int a,int b){
	if(a>b) return b;
	else return a;
}

int gcd(int a,int b){
	int num,denum;
	if(a>b){
		num=a;
		denum=b;
	}
	else{
		num=b;
		denum=a;
	}
	int remainder = num%denum;
	while(remainder!=0){
		num = denum;
		denum = remainder;
		remainder = num%denum;
	}
	return denum;
}

int main(){
	int t,n;
	long long int ai[101],max,total;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		max=0;
		scanf("%d", &n);
		for(int j=0;j<n;j++){
			scanf("%lld", &ai[j]);
		}
		for(int j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				total = gcd(ai[j],ai[k]);
				if(total>max) max=total;	
			}
		}
		printf("Case #%d: %lld\n",i,max);
	}
	return 0;
}

#include<stdio.h>

int main()
{
	int N,T;
	scanf("%d",&N);
	
	for(int i=1;i<=N;i++){
						
		scanf("%d",&T);		
		long long int m[1000][0100];
		long long int x[1000][1000];	
		long long int kali[1000][1000];
		long long int mod=1000000007;
		
		for(int j=0;j<T;j++){
			for(int k=0;k<T;k++){
				scanf("%d",m[j][k]);
				x[j][k]=m[j][k];
			}
		}
		
		for(int a=1;a<T;a++){
			for(int j=0;j<T;j++){
				for(int k=0;k<T;k++){
					kali[j][k]=0;
					for(int l=0;l<T;l++){
						kali[j][k] += (m[j][l] % mod * x[l][k] % mod);
						kali[j][k] %= mod;
					}
				}				
			}
			for(int j=0;j<T;j++){
				for(int k=0;k<T;k++){
					m[j][k] = kali[j][k];
					m[j][k]%=mod;
				}
			}
		}
		
		printf("Case #%d:\n",i);
		
		for(int j=0;j<T;j++){
			for(int k=0;k<T;k++){	
				if(k==0){
					printf("%lld",m[j][k]);
				}
				else{
					printf(" %lld",m[j][k]);
				}
			}
			
		printf("\n");
		}
	}
	return 0;
}
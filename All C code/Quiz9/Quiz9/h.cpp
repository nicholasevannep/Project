#include <stdio.h>

int main()
{
	int T;
	int N, ai[1005];

	scanf("%d",&T);
	fflush(stdin);

	for(int i=1; i<=T; i++){
		scanf("%d",&N);
		int duplicate[1005];
		for(int j=0; j<N; j++){
			scanf("%d",&ai[j]);
			duplicate[j]=ai[j];
		}
		int temp;
		for(int k=0; k<N; k++){
			for(int l=N-1; l>k; l--){
				if(duplicate[k]<duplicate[l]){
					temp=duplicate[l];
					duplicate[l]=duplicate[k];
					duplicate[k]=temp;
				}
				else{
					continue;
				}
			}
		}
		printf("Case #%d: ",i);
		for(int m=0; m<N; m++){
			for(int n=0; n<N; n++){
				if(ai[m]==duplicate[n] && m!=N-1){
					printf("%d ",n+1);
					break;
				}
				if(ai[m]==duplicate[n] && m==N-1){
					printf("%d\n",n+1);
					break;
				}
			}
		}
	}

	getchar();
	getchar();
	return 0;
}

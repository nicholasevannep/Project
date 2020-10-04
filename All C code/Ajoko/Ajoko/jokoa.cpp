#include<stdio.h>
int main(){
	int inp,cnt;
	scanf("%d",&inp);fflush(stdin);
	for(int i=1;i<=inp;i++){
		scanf("%d",&cnt);fflush(stdin);
		printf("Case #%d:\n",i);
		for(int j=cnt;j>=1;j--){
			if(j==10||j==5||j==30||j==60||j==cnt){
			printf("%d SECOND TILL NEW YEAR!!\n",j);
		
			}else{
				printf("%d\n",j);
			
			}
		}
	}

	getchar();
	return 0;
}
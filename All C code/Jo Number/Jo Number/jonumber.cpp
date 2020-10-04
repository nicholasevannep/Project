#include <stdio.h>

bool jonumber(long long int x){
	while (x!=0){
	if (x%10!=7 && x%10!=8)
	return false;
	x/=10;
	}
	return true;
}

int main()
{
	int lit;
	long long int semijo;
	scanf("%d",&lit);
	fflush(stdin);

	for(int i=1; i<=lit; i++){
	scanf("%lld",&semijo);
	int flag=0, flag1=0;
	long long int temp=semijo;
	while(temp!=0){
	if(temp%10!=7 && temp%10!=8){
	flag=1;
	}
	temp/=10;
	}
		if(flag==1){
		for(long long int j=2; j*j<=semijo; ++j){
		if(semijo%j==0 && (jonumber(j) || jonumber(semijo/j))){
		flag1=1;
		}
	}
	if(flag1==1){
	printf("Case #%d: YES\n",i);
	} else{
	printf("Case #%d: NO\n",i);
	}
	} else{
	printf("Case #%d: YES\n",i);
	}
	}
	getchar();
	getchar();
	return 0;
}
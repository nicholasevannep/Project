#include<stdio.h>
int sum(int x,int tot)
{	
	if(x==0){return tot;}
	else{tot+=x;return sum(x-1,tot); }
}

int main()
{	int x;
	scanf("%d",&x);
	int y=0;
	printf("%d",sum(x,y));	
	
	getchar();
	return 0;
}

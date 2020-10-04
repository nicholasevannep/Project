#include <stdio.h>
#include <math.h>
int main(){
	FILE *test;
	test=fopen("testdata.in","r");
	int a[10005],temp1=0,count=1,temp2=0;
	while(!feof(test)){
		fscanf(test,"%d ",&a[count]);
		count++;
	}
	for(int i=1;i<=count;i++){
	temp1=sqrt(a[i]);
	if(temp1*temp1==a[i]){
		a[i]=(-1*a[i]);
	}
	temp2+=a[i];
	}
	
	printf("Special sum of %d datas is %d.\n",count-1,temp2);
	
	return 0;
}

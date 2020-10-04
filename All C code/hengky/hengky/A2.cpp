#include<stdio.h>
int main(){
	int lit;
	scanf("%d",&lit);
	getchar();
	for(int i=1;i<=lit;i++){
	/*double tot=0;
	double a,b;
	scanf("%lf %lf",&a,&b);
	getchar();
	tot = (a+b)*((b-a+1)/2);
	printf("Case %d: %.0lf\n",i,tot);
	*/
	int tot=0;
	int a,b;
	scanf("%d %d",&a,&b);
	getchar();
	for(int j=a;j<=b;j++){
	tot+=j;
	}
	printf("Case %d: %d\n",i,tot);
	}


getchar();
return 0;
}
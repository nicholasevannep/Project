//#include<stdio.h>
//#include<string.h>
//int main(){
//	int lit;
//	char inp1[100001];
//	char inp2[100001];
//	scanf("%d",&lit);
//	getchar();
//	scanf("%s",inp1);
//	getchar();
//	scanf("%s",inp2);
//	getchar();
//	int sum[27];
//	int max=0;
//	for(int i=0;i<27;i++){
//		sum[i]=0;
//	}
//	for(int x=0;x<lit;x++){
//		if(inp1[x]==inp2[x]){
//			sum[inp1[x]-96]+=1;
//		}
//		else if(inp1[x]!=inp2[x]){
//				sum[inp1[x]-96]+=1;
//				sum[inp2[x]-96]+=1;
//		}
//	}
//		for(int i=0;i<27;i++){
//		if(max<sum[i]){
//			max=sum[i];
//		}
//	}
//	printf("%d\n",max);
//
//getchar();
//return 0;
//}
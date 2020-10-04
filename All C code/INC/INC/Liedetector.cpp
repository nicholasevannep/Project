//#include<stdio.h>
//#include<string.h>
//
//char inp[100000][10];
//	int lit;
//
//int checker(char cek[],int ite,int con){
//	//printf("%s \n %d\n %d\n",cek,ite,con);
//	if(ite==0&&con==1){
//		if(strcmp(cek,"TRUTH")==0){
//		printf("TRUTH\n");
//		}
//		else if(strcmp(cek,"LIE")==0
//			){
//		printf("LIE\n");
//		}
//	}
//	else if(ite==0&&con==0){
//		if(strcmp(cek,"TRUTH")==0){
//		printf("LIE\n");
//		}
//		else if(strcmp(cek,"LIE")==0){
//		printf("TRUTH\n");
//		}
//	}
//	if(strcmp(cek,"TRUTH")==0&&ite==lit){
//	return checker(inp[ite-1],ite-1,1) ;
//	}
//	else if(strcmp(cek,"LIE")==0&&ite==lit){
//	return checker(inp[ite-1],ite-1,0) ;
//	}
//	else if(strcmp(cek,"TRUTH")==0&&con==1){
//	return checker(inp[ite-1],ite-1,1) ;
//	}
//	else if(strcmp(cek,"TRUTH")==0&&con==0){
//	return checker(inp[ite-1],ite-1,0) ;
//	}
//	else if(strcmp(cek,"LIE")==0&&con==1){
//	return checker(inp[ite-1],ite-1,0) ;
//	}
//	else if(strcmp(cek,"LIE")==0&&con==0){
//	return checker(inp[ite-1],ite-1,1) ;
//	}
//}
//
//
//int main(){
//	scanf("%d",&lit);
//	getchar();
//	for(int i=0;i<lit;i++){
//	scanf("%s",&inp[i]);
//	getchar();
//	}
//	checker(inp[lit-1],lit-1,1);
//	
//getchar();
//return 0;
//}
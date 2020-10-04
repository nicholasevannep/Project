//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//#include<math.h>
//struct data {
//	char nama[100];
//	int nilai;
//	struct data *next;
//};
//struct data *hash[26],*node,inp;
//
//void intial(){
//	for(int i=0;i<26;i++){
//	hash[i]=NULL;
//	}
//}
//
//void cls(){
//	for(int i=0;i<30;i++){
//		printf("\n");
//	}
//}
//
//int key(struct data inp){
//	if(inp.nama[0]>='A'||inp.nama[0]<='Z'){
//		int k= inp.nama[0]-'A';
//		return k;
//	}
//	else if(inp.nama[0]>='a'||inp.nama[0]<='z'){
//		int k= inp.nama[0]-'a';
//		return k;
//	}
//	else{
//		return -1;
//	}
//
//}
//
//void input(struct data inp){
//	int k=key(inp);
//	if(k==-1){
//		printf("inp not valid\n");
//		return;
//	}
//	else{
//	node = (struct data*) malloc(sizeof(struct data));
//	strcpy(node->nama,inp.nama);
//	node->nilai=inp.nilai;
//	node->next=NULL;
//	//data pertama
//	if(hash[k]==NULL){
//		hash[k]=node;
//	}
//	else{//dataselanjutnya
//		struct data *curr=hash[k];
//		while(curr->next!=NULL){
//			curr=curr->next;
//		}
//		curr->next=node;
//	}
//}
//}
//
//void show(){
//	for(int i=0;i<26;i++){
//		struct data *curr=hash[i];
//		printf("%d",i);
//		while(curr!=NULL){
//			printf("%s",curr->nama);
//			printf("%d",curr->nilai);
//		curr=curr->next;
//		}
//	}
//}
//
//
//int main(){
//	intial();
//
//	printf("Masukkan nama\n");
//
//
//getchar();
//return 0;
//}

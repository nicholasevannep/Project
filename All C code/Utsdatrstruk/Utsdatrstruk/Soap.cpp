//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//
//struct data {
//	char item[100];
//	int nilai;
//	struct data *next,*prev;
//}*head=NULL,*tail=NULL,*node,inp;
//
//void cls(){
//for(int i=0;i<30;i++){
//	printf("\n");
//}
//}
//
//void request(){
//	int menu;
//	do{
//		printf("1. Tissue\n");
//		printf("2. Soap\n");
//		printf("3. Detergent\n");
//		printf("Input item number[1..3] : ");
//		scanf("%d",&menu);
//		getchar();
//		if(menu==1){
//			strcpy(inp.item,"Tissue");
//		}
//		else if(menu==2){
//			strcpy(inp.item,"Soap");
//		}
//		else if(menu==3){
//			strcpy(inp.item,"Detergent");
//		}
//	}while(menu<1||menu>3);
//	do{
//		printf("Input quantity needed [1..100] : ");
//		scanf("%d",&inp.nilai);
//		getchar();
//	}while(inp.nilai<1||inp.nilai>100);
//}
//
//
//void input(){
//	node = (struct data*) malloc(sizeof(struct data));
//	strcpy(node->item,inp.item);
//	node->nilai=inp.nilai;
//	node->next=NULL;
//	node->prev=NULL;
//
//	//pertama
//	if(head==NULL){
//		head=node;
//		tail=node;
//	}
//	else{
//	//add di akhir
//		tail->next=node;
//		node->prev=tail;
//		tail=node;
//	}
//}
//
//void initial(){
//	strcpy(inp.item,"Detergent");
//	inp.nilai=6;
//	input();
//	strcpy(inp.item,"Tissue");
//	inp.nilai=10;
//	input();
//	strcpy(inp.item,"Soap");
//	inp.nilai=2;
//	input();
//	strcpy(inp.item,"Tissue");
//	inp.nilai=7;
//	input();
//}
//
//void show(){
//	struct data *curr;
//	curr=head;
//	printf("No.\tItem Name\t\t\tQuantity\n");
//	int i=1;
//	while(curr!=NULL){
//		printf("%d.\t%.30s\t\t\t%d\tpcs\n",i,curr->item,curr->nilai);
//		i++;
//		curr=curr->next;
//	}
//}
//
//void deliv(){
//	int menu;
//	char itm[10];
//	do{
//		printf("1. Tissue\n");
//		printf("2. Soap\n");
//		printf("3. Detergent\n");
//		printf("Input item number[1..3] : ");
//		scanf("%d",&menu);
//		getchar();
//		if(menu==1){
//			strcpy(itm,"Tissue");
//		}
//		else if(menu==2){
//			strcpy(itm,"Soap");
//		}
//		else if(menu==3){
//			strcpy(itm,"Detergent");
//		}
//	}while(menu<1||menu>3);
//	struct data *curr;
//	curr=head;
//	while(curr!=NULL&&strcmp(curr->item,itm)==0){
//		curr=curr->next;
//	}
//
//}
//
//void exit(){
//	struct data *curr;
//	curr=head;
//	while(curr!=NULL){
//		head=curr;
//		curr=curr->next;
//		free(head);
//	}
//}
//
//
//int main(){
//	initial();
//	int menu;
//	do{
//	cls();
//	show();
//	printf("1. Request Item\n");	
//	printf("2. Deliver Item\n");	
//	printf("3. Exit\n");
//	printf("Input your choice : ");
//	scanf("%d",&menu);
//	getchar();
//	if(menu==1){
//	//Req
//	request();
//	input();
//	}
//	else if(menu==2){
//	//Deliver
//	deliv();
//	}
//	else if(menu==3){
//	//Exit
//		exit();
//	}
//	}while(menu!=3);
//
//
//getchar();
//return 0;
//}
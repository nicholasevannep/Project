//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//struct data{
//	int tgl;
//	char kegiatan[160];
//	struct data *next,*prev;
//
//};
//
//struct data *head=NULL,*node,*tail=NULL,*curr;
//
//void clear(){
//	for(int i=0;i<30;i++){
//	printf("\n");
//	}
//
//}
//struct data getinput(){
//	struct data input; // to store input data
//	printf("Input tanggal :");
//	scanf("%d",&input.tgl);getchar();
//	printf("input kegiatan :");
//	scanf("%[^\n]s",&input.kegiatan);getchar();
//
//	return input;
//}
//
//void add( struct data input){
//	node=(struct data*) malloc( sizeof(struct data) );
//	node->tgl = input.tgl;
//	strcpy(node->kegiatan,input.kegiatan);
//	node->next=NULL;
//	node->prev=NULL;
//
//	if(head==NULL){
//		head=node;
//		tail=node;
//	}
//	else {
//		//yang perlu di cek
//		//1. insert depan head
//		//2. insert tengah
//		//3. insert belakang
//		if(node->tgl < head->tgl){
//			node->next = head;
//			head->prev = node;
//			node->prev = NULL;
//			head = node;
//		}
//		else if(node->tgl > tail->tgl){
//			tail->next = node;
//			node->prev = tail;
//			node->next = NULL;
//			tail = node;
//		}
//		else{
//			curr=head;
//			while(curr->next->tgl < node->tgl ){
//				curr=curr->next ;
//			}
//			node->next = curr->next;
//			node->prev = curr;
//			node->next->prev=node;
//			curr->next = node;
//		}
//	}
//
//}
//
//int getdel(){
//	int tgl; 
//	printf("Masukkan Tanggal Untuk di Hapus :");
//	scanf("%d",&tgl);getchar();
//	return tgl;
//}
//
//int check(int tgl){
//	curr=head;
//	while(curr!=NULL){
//		if(curr->tgl == tgl){return 1;}
//		curr=curr->next;
//	}
//	return 0;
//}
//
//void del(int tgl){
//	//kemungkinan yg ada
//	//1. yg di hapus di depan
//	//2. yg di hapus di belakang
//	//3. yg di hapus di tengah
//	//4. data yg dihapus hanya 1
//	if(check(tgl)==1){
//		curr=head;
//		if(head==tail && tgl==head->tgl){
//			head=NULL;
//			tail=NULL;
//			free(curr);
//		}
//		else{ 
//			if(head->tgl==tgl){
//				curr=head;
//				head=head->next;
//				free(curr);
//				head->prev=NULL;
//			}
//			else if(tail->tgl==tgl){
//				curr=head;
//				while(curr->next!=tail){
//				curr=curr->next;
//				}
//				free(tail);
//				tail=curr;
//				tail->next=NULL;
//			}
//			else{
//			
//				curr=head;
//				struct data *temp,*temp2;
//				while(curr->next->next->tgl == tgl ){
//					curr=curr->next;
//				}
//				temp = curr -> next;
//				temp2 = temp -> next;
//				temp2->prev=curr;
//				curr->next = temp2;
//				free (temp);
//			}
//		}
//	}
//	else{
//	printf("Tidak ada\n");
//	}
//}
//
//void display(){
//	curr=tail;
//	while(curr!=NULL){
//		printf("%d                     %s\n",curr->tgl,curr->kegiatan);
//		curr=curr->prev;
//		}
//
//}
//
//void exit(){
//	while(head!=NULL){
//		curr=head;
//		head=head->next;
//		free(curr);
//	}
//}
//
//
//
//int main(){
//	int menu;
//	do{
//		clear();
//		printf("       Agenda Bulan Maret\n");
//		printf("Tanggal                  Kegiatan\n");
//		printf("----------------------------------\n");
//		//display list
//		display();
//		printf("Double Linkedlist\n");
//		printf("1. Add\n");
//		printf("2. Delete\n");
//		printf("3. Exit\n");
//		printf("Pilih Menu :");
//		scanf("%d",&menu);
//		getchar();
//
//		if(menu==1){
//		//add
//			add(getinput());
//		}
//		else if(menu==2){
//		//Del
//			del(getdel());
//		}
//		else{
//		//Exit
//		exit();
//		}
//	}while(menu!=3);
//
//	getchar();
//	return 0;
//}
#include<stdio.h>
#include<malloc.h>
#include<string.h>

struct data {
	int tgl;
	char acara[100];
	struct data *next,*prev;
};
struct data *node,*head=NULL,*tail=NULL,*curr;


void cls(){
	for(int i=0;i<30;i++){
		printf("\n");
	}

}
int check(int tgl){
	curr=head;
	while(curr!=NULL){
		if(curr->tgl==tgl){return 1;}
		if(curr==NULL){return 0;}
		curr=curr->next;
	}
}

void add(struct data inp){
	node = (struct data*) malloc(sizeof(struct data));
	node->tgl=inp.tgl;
	strcpy(node->acara,inp.acara);
	node->next=NULL;
	node->prev=NULL;
	// belum ada data
	if(head==NULL&&tail==NULL){
		head=node;
		tail=node;
		printf("Data pertama ditambahkan\n");
	}
	else {
		//tambah di awal
		if(head->tgl > node->tgl){
			node->next=head;
			head->prev=node;
			head=node;
			printf("Data ditambahkan di awal\n");
		}
		//tambah di akhir
		else if(tail->tgl < node->tgl){
			tail->next=node;
			node->prev=tail;
			tail=node;
			printf("Data ditambahkan di akhir\n");
		}
		//tambah di tengah
		else{
			curr=head;
			while(curr->next->tgl<node->tgl){
				curr=curr->next;
			}
			node->next=curr->next;
			node->next->prev=node;
			curr->next=node;
			node->prev=curr;
			printf("Data ditambahkan di tengah\n");
		}
		
	}


}

void view(){
	curr=head;
	while(curr!=NULL){
		printf("Tgl \t: %d\n",curr->tgl);
		printf("Acara \t:%s\n",curr->acara);
		curr=curr->next;
	}

}

void del(int tgl){
	struct data *temp;
	if(check(tgl)==1){
		//awal
		if(head->tgl==tgl){
			temp=head;
			head=head->next;
			free(temp);
			head->prev=NULL;
			printf("Data di hapus di awal\n");
		}
		//akhir
		else if(tail->tgl==tgl){
			temp=tail;
			tail=tail->prev;
			free(temp);
			tail->next=NULL;
			printf("Data di hapus di akhir\n");
		}
		//tengah
		else{
			curr=head;
			while(curr->tgl!=tgl){
				curr=curr->next;
			}
			curr->prev->next=curr->next;
			curr->next->prev=curr->prev;
			free(curr);
			printf("Berhasil di hapus di tengah\n");
		}
	}
	else{
	printf("Data tidak ada\n");
	}

}


void exit(){
	while(head!=NULL){
		curr=head;
		head=head->next;
		free(curr);
	}
}


int main(){
	int menu;
	do{
		cls();
		printf("Double Linkedlist Menu\n");
		printf("1. Add\n");
		printf("2. View\n");
		printf("3. Remove\n");
		printf("4. Exit\n");
		printf("Choose>> ");
		scanf("%d",&menu);
		getchar();
		if(menu==1){
		//add
			struct data inp;
			printf("Masukkan Tanggal : ");
			scanf("%d",&inp.tgl);
			getchar();
			printf("Masukkan Acara : ");
			scanf("%[^\n]s",inp.acara);
			getchar();
			add(inp);

		}
		else if(menu==2){
		//view
			view();
			getchar();
		}
		else if(menu==3){
		//remove
			view();
			int tgl;
			printf("Masukkan Tanggal : ");
			scanf("%d",&tgl);
			getchar();
			del(tgl);
		}
		else if(menu==4){
		//exit
			exit();
		}

	}while(menu!=4);

getchar();
return 0;
}
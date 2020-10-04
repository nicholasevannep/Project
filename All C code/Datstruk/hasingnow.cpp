#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define SIZE 26
#define clear for(int i=1;i<=25;i++) putchar('\n');

struct data{
	char nama[50], telp[15];
	struct data *next; // chaining
};
struct data *head[SIZE];  //hashingtable ukuran 26

void initialize(){
	for(int i=0; i<SIZE; i++){
		head[i] = NULL;
	}
}


int getHashingKey(char nama[]){
	char hurufAwal=nama[0];
	if(hurufAwal>='A'&&hurufAwal<='Z'){return hurufAwal-'A';}
	else if(hurufAwal>='a'&&hurufAwal<='z'){return hurufAwal-'a';}
	return -1; //nama ga valid
}

void add(struct data input,int key){
	struct data *node;
	node= (struct data*) malloc(sizeof(struct data));
	strcpy(node->nama,input.nama);
	strcpy(node->telp,input.telp);
	node->next=NULL;
	if(head[key]==NULL){
		head[key]=node;
	}
	else{	//kalo ada collision
		struct data *curr;
		curr = head[key];
		while(curr->next!=NULL){
			curr= curr->next;
		}
		curr->next=node;
	}
}



void display(){
	struct data* curr;
	for (int i=0;i<SIZE;i++){
		curr=head[i];
		printf("[%2d] ",i);
		while(curr!=NULL){
		printf("%s %s->",curr->nama,curr->telp);
		curr=curr->next;
		}
		printf("NULL\n");
	}
	printf("\n Tekan Enter Untuk Melanjutakan\n");
	getchar();
}
int search(char nama[]){
	struct data *curr;
	int key;
	key=getHashingKey(nama);
	if(key==-1){
	printf("Nama tidak valid");
	return -1;
	}
	else{
		if(head[key]==NULL){
		printf("Nama tidak ada");
		return -1;
		}
		else{
		curr=head[key];
			for(int i=0;i<sizeof(head[key]);i++){	
				if(strcmp(curr->nama,nama)==0){
				printf("Nama =%s\n",curr->nama);
				printf("Telp =%s\n",curr->telp);
				
				return i;}
				else if(i==sizeof(head[key])){
				printf("Nama tidak ada");		
				return -1;
				}
			curr=curr->next;
			}

		}
	}
}

int del(char nama[]){
	struct data *curr,*temp;
	int key;
	key=getHashingKey(nama);
	if(key==-1){
	printf("Nama tidak valid");
	return -1;
	}
	else{
		if(head[key]==NULL){
		printf("Nama tidak ada");
		return -1;
		}
		else{
		curr=head[key];
		if(curr==head[key]&&curr->next==NULL){
			head[key]=NULL;
			printf("Nama berhasil di delete\n");
			return 1;
		}
		if(strcmp(curr->nama,nama)==0){
			head[key]=curr->next;
			free(curr);
			printf("Nama berhasil di delete\n");
			return 1;
		}
			for(int i=0;i<sizeof(head[key]);i++){	

				if(strcmp(curr->next->nama,nama)==0){
					temp=curr->next;
					curr->next=temp->next;
					free(temp);
					printf("Nama berhasil di delete\n");
				return i;}
				else if(i==sizeof(head[key])){
				printf("Nama tidak ada");		
				return -1;
				}
			curr=curr->next;
			}

		}
	}
	
}
void exit(){

	struct data *curr,*temp;
	for (int i=0;i<SIZE;i++){
		curr=head[i];
		printf("[%2d] ",i);
		while(curr!=NULL){
			temp=curr;
			curr=curr->next;
			free(temp);
		}
		printf("NULL\n");
	}
	printf("\n Program Selesai\nTekan Enter Untuk Melanjutakan\n");

}

int main()
{	
	int menu;
	initialize();
	do{
		clear;
		printf("Phone Book (Hashing,Chaining)\n");
		printf("1. Add\n");
		printf("2. Search\n");
		printf("3. Display\n");
		printf("4. Delete\n");
		printf("5. Exit\n");
		printf("Choose Menu: ");
		scanf("%d",&menu);
		getchar();

		if(menu==1){
			//add
			
			struct data input;
			printf("Input nama: ");
			scanf("%[^\n]",input.nama); getchar();
			printf("Input telp: ");
			scanf("%[^\n]",input.telp); getchar();
			int hashingKey= getHashingKey(input.nama);
			if(hashingKey==-1){
			printf("Invalid name. Gagal add ke hashing table\n");
			}else{
			add(input,hashingKey);
			printf("Berhasil add\n");
			}
		}
		else if(menu==2){
			//search
			struct data input;
			printf("Masukkan nama yang dicari :");
			scanf("%[^\n]s",&input.nama);
			getchar();
			search(input.nama);
			printf("Tekan ENTER untuk melanjutkan\n");
			getchar();
			}
		else if(menu==3){
			//display
			printf("Isi hasing table : \n");
			display();
			}
		else if(menu==4){
			struct data input;
			printf("Masukkan nama yang ingin di hapus :");
			scanf("%[^\n]s",&input.nama);
			getchar();
			del(input.nama);
			printf("Tekan ENTER untuk melanjutkan\n");
			getchar();
			//delete
			}
		else if (menu==5){
			//exit
			exit();
			}
		}
	while(menu!=5);
	getchar();
	return 0;
}
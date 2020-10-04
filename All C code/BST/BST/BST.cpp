#include<stdio.h>
#include<malloc.h>

struct data {
	int val;
	struct data *left,*right;
};

void cls(){
	for(int i=0;i<30;i++){
	printf("\n");
	}
}


struct data* add(struct data *curr,int angka){
	if(curr==NULL){
		curr= (struct data*) malloc(sizeof(struct data));
		curr->val=angka;
		curr->left=NULL;
		curr->right=NULL;
	}
	else{
		if(angka < curr->val){
			curr->left = add(curr->left,angka);
			}
		else if(angka > curr->val){
			curr->right=add(curr->right,angka);
			}
		}
	return curr;
}

void infix(struct data * curr){
	if(curr != NULL){
		infix(curr->left);
		printf("%3d ", curr->val);
		infix(curr->right);
	}
}

void prefix(struct data * curr){
	if(curr != NULL){
		printf("%3d ", curr->val);
		prefix(curr->left);
		prefix(curr->right);
	}
}

void postfix(struct data* curr){
	if(curr != NULL){
		postfix(curr->left);
		postfix(curr->right);
		printf("%3d ", curr->val);
	}
}

void show(struct data *root){
	printf("Prefix :");
	prefix(root);
	printf("\n");
	printf("Infix :");
	infix(root);
	printf("\n");
	printf("Postfix :");
	postfix(root);
	printf("\n");
}
void exit(struct data *curr){
	if(curr!=NULL){
	exit(curr->left);
	exit(curr->right);
	free(curr);
	}
}

struct data *del(struct data *curr,int val){
	struct data *temp;
	if(curr==NULL){
		printf("File tidak ada\n");
	}
	else{
		if(curr->val==val){
			//gapunya anak
			if(curr->left==NULL&&curr->right==NULL){
				free(curr);
				curr=NULL;
			}
			else if(curr->left!=NULL,&curr->right==NULL){//anak 1 kiri
				temp=curr->left;
				*curr=*temp;
				free(temp);
			}else if(curr->left==NULL,&curr->right!=NULL){//anak 1 kanan
				temp=curr->right;
				*curr=*temp;
				free(temp);
			}
			else if(curr->left!=NULL&&curr->right!=NULL){//anak 2
				temp=curr->left;
				while(temp->right!=NULL){
					temp=temp->right;
				}
				curr->val=temp->val;
				curr->left=del(curr->left,temp->val);
			}
		}
		else if(val<curr->val){
			curr->left=del(curr->left,val);
		}else if(val>curr->val){
			curr->right=del(curr->right,val);
		}
	}
	return curr;
}

int main(){
	struct data *root=NULL;
	int menu;
	do{
		cls();
		show(root);
		printf("BST MENU\n");
		printf("1. Insert Number\n");
		printf("2. Delete Number\n");
		printf("3. Exit\n");
		printf("Choose >> ");
		scanf("%d",&menu);
		getchar();
		if(menu==1){
			//insert
			int val;
			printf("Input Value :");
			scanf("%d",&val);
			getchar();
			root=add(root,val);
		}
		else if(menu==2){
			//delete
			int inp;
			printf("Input Value : ");
			scanf("%d",&inp);
			getchar();
			del(root,inp);
		}
		else if(menu==3){
			//exit
			exit(root);
		}
	}while(menu!=3);
	getchar();
	return 0;
}
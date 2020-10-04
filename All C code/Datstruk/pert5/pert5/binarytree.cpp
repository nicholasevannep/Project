#include<stdio.h>
#include<malloc.h>


struct data{
	char c;
	struct data *left;
	struct data *right;
};
struct data *root=NULL;

void add( char c){
	struct data *node,*curr;
		node= (struct data*) malloc(sizeof(struct data));
		node->c=c;
		node->left=NULL;
		node->right=NULL;

	if(root == NULL){
		root=node;
	}
	else{
		int pilih;
		curr=root;
		while(5){
			printf("Input [1]for left [2]for right '%c' : ",curr->c);
			scanf("%d",&pilih);
			getchar();
			if(pilih==1){
				if(curr->left==NULL){
					curr->left=node;
					break;
				
				}else{
				curr=curr->left;
				}
			}
			if(pilih==2){
				if(curr->right==NULL){
					curr->right=node;
					break;
				}
				else{
					curr=curr->right;			
				}
			}
		}
	}

}
void prefix(struct data*curr){
	if(curr!=NULL){
	printf("%c",curr->c);	
	prefix(curr->left);
	prefix(curr->right);}
}
void infix(struct data*curr){
	if(curr!=NULL){
		infix(curr->left);
		printf("%c",curr->c);
		infix(curr->right);
	}
}

void postfix(struct data*curr){
	if(curr!=NULL){	
	postfix(curr->left);
	postfix(curr->right);
	printf("%c",curr->c);
	}
}

int main(){
	char c;
	do{
		printf("Input Char: ");
		scanf("%c",&c);
		getchar();
		add(c);
		printf("Prefix \t\t:");
		prefix(root);
		printf("\n");
		printf("Infix \t\t:");
		infix(root);
		printf("\n");
		printf("Postfix \t:");
		postfix(root);
		printf("\n");

	}while(c !='#');
	getchar();
	return 0;
}
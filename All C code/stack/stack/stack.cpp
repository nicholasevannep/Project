#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


struct stacknode{
	int data;
	struct stacknode *next;
};
struct stacknode* newnode(int data){
	struct stacknode* newnode=(struct stacknode*) malloc(sizeof(struct stacknode)); 
}


void infixtoprefix(char infix[]){



}

void clear(){
	for(int i=0;i<30;i++){
	printf("\n");
	}
}


int main(){
	
	int menu;
	do{
		printf("1.	Convert from infix to prefix and postfix\n");
		printf("2. Evaluate prefix notation\n");
		printf("3. Evaluate postfix notation\n");
		printf("4. Exit");
		printf("Choose>>");
		scanf("%d",&menu);
		getchar();
		switch(menu){
		case 1: 
				char 
				infixtoprefix();
				infixtopostfix();
				break;
		case 2:
				break;
		case 3:
				break;
		case 4: 
				break;
		}

	}while(menu!=4);




	getchar();
	return 0;
}
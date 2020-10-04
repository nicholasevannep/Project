//#include<stdio.h>
//#include<malloc.h>
//struct Data{
//	int angka;
//	struct Data *left, *right;
//};
//
//typedef struct Data Dt;
//
//
//Dt* newNode(int angka){
//	Dt* node;
//	node= (Dt*) malloc(sizeof(Dt));
//	node->angka=angka;
//	node->left=NULL;
//	node->right=NULL;
//	return node;
//}
//
//Dt* add(Dt* curr,int angka){
//	if(curr==NULL){
//		return newNode(angka);
//	}
//	else if(angka < curr->angka){
//		curr->left = add(curr->left,angka);
//	}
//	else if(angka > curr->angka){
//		curr->right = add(curr->right,angka);
//	}
//	return curr;
//}
//
//Dt* del(Dt*curr,int angka){
//	
//		if(curr->angka==angka){
//		//gappunya anak
//			Dt*temp;
//			if(curr->left==NULL&&curr->right==NULL){
//			free(curr);
//			curr=NULL;
//			}//anak 1 kiri atau kanan
//			else if(curr->left!=NULL && curr->right==NULL){
//				temp=curr->left;
//				*curr=*temp;
//				free(temp);
//			}
//			else if(curr->left==NULL && curr->right!=NULL){
//				temp=curr->right;
//				*curr=*temp;
//				free(temp);
//			}//anak 2 kiri dan kanan
//			else {
//				temp=curr->left;
//				while(temp->right !=NULL){
//					temp=temp->right;
//				}
//				curr->angka=temp->angka;
//				curr->left=del(curr->left,temp->angka);
//			}
//		}
//		else if(angka<curr->angka){
//			curr->left = del(curr->left,angka);
//		}
//		else if(angka>curr->angka){
//			curr->right = del(curr->right,angka);
//		}
//		return curr;
//	}
//
//
//
//
//void cls(){
//	for(int i=0;i<30;i++){
//		printf("\n");
//	}
//}
//
//void inorder(Dt *curr){
//	if(curr!=NULL){
//		inorder(curr->left);
//		printf(" %d ",curr->angka);
//		inorder(curr->right);
//	}
//}
//void exit(Dt *curr){
//	if(curr!=NULL){
//		exit(curr->left);
//		exit(curr->right);
//		free(curr);
//	}
//}
//
//
//int main(){
//	Dt *root = NULL;
//	int angka, menu;
//	do{
//		cls();
//		inorder(root);
//		printf("\n");
//		printf("BST Menu\n");
//		printf("1. Add\n");
//		printf("2. Remove\n");
//		printf("3. Exit\n");
//		printf("Input menu :");
//		scanf("%d",&menu);
//		getchar();
//		if(menu==1){
//		//add
//			printf("Input angka :");
//			scanf("%d",&angka);
//			getchar();
//			root=add(root,angka);
//		}
//		else if(menu==2){
//			//remove
//			printf("Input angka :");
//			scanf("%d",&angka);
//			getchar();
//			root = del(root,angka);
//		}
//		else if(menu==3){
//			exit(root);
//		}
//
//		}while(menu!=3);
//
//
//		getchar();
//		return 0;
//}

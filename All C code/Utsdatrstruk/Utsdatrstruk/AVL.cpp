#include<stdio.h>
#include<malloc.h>

struct Data{
	int angka;
	int height;
	struct Data *left,*right;
};

void cls(){
	for(int i=0;i<30;i++){
	printf("\n");
	}
}

typedef struct Data Dt;

int max (int a,int b){
	if(a>b) return a;
	return b;
}


int getHeight(Dt*curr){
	if(curr==NULL) return 0;
	return curr->height;
}

int getBF(Dt*curr){
	if(curr==NULL) return 0;
	return getHeight(curr->left)-getHeight(curr->right);
}


Dt*rightRotate(Dt *x){
	Dt *y,*c;
	y=x->left;
	c=y->right;
	//rotate
	y->right=x;
	x->left=c;
	//updateHeight
	x->height=1+max(getHeight(x->left),getHeight(x->right));
	y->height=1+max(getHeight(y->left),getHeight(y->right));
	return y;
}

Dt*leftRotate(Dt *x){
	Dt *y,*c;
	y=x->right;
	c=y->left;
	//rotate
	y->left=x;
	x->right=c;
	
	//updateHeight
	x->height=1+max(getHeight(x->left),getHeight(x->right));
	y->height=1+max(getHeight(y->left),getHeight(y->right));
	return y;
}
Dt* newNode(int angka){
	Dt *node=(Dt*)malloc(sizeof(Dt));
	node->angka=angka;
	node->height=1;
	node->left=NULL;
	node->right=NULL;
	return node;
}


Dt*add (Dt*curr, int angka){
	if(curr==NULL){
		curr= newNode(angka);
	}
	else if(angka<curr->angka){
		curr->left= add(curr->left,angka);
	}
	else if(angka>curr->angka){
		curr->right= add(curr->right,angka);
	}
	curr->height=1+ max(getHeight(curr->left),getHeight(curr->right));
	int BF= getBF(curr);
	if(BF>1 && angka < curr->left->angka ){//kiri-kiri
		return rightRotate(curr);
	}
	if(BF>1 && angka > curr->left->angka ){//kiri-kanan
		curr->left=leftRotate(curr->left);
		return rightRotate(curr);
	}
	if(BF<-1 && angka > curr->right->angka ){//kanan-kanan
		return leftRotate(curr);
	}
	if(BF<-1 && angka < curr->right->angka ){//kanan-kiri
		curr->right=rightRotate(curr->right);
		return leftRotate(curr);
	}
	return curr;
}

Dt* del(Dt* curr,int angka){
	if(curr==NULL)return NULL;
	if(curr->angka==angka){//ketemu
	//gapunya anak
		if(curr->left==NULL&&curr->right==NULL){
			free(curr);
			curr=NULL;
		}//anak kiri
		else if(curr->left!=NULL&&curr->right==NULL){
			Dt *temp=curr->left;
			*curr=*temp;
			free(temp);
		}
		//anak kanan 
		else if(curr->left==NULL&&curr->right!=NULL){
			Dt *temp=curr->right;
			*curr=*temp;
			free(temp);
		}
		//anak kiri kanan
		else{
			Dt *temp=curr->left;
			while(temp->right!=NULL){
				temp=temp->right;
			}
			curr->angka=temp->angka;
			curr->left=del(curr->left,temp->angka);
		}
	}
	else if(angka<curr->angka){
		curr->left=del(curr->left,angka);
	}
	else if(angka>curr->angka){
		curr->right=del(curr->right,angka);
	}
	if(curr==NULL) return NULL;

	curr->height=1+max(getHeight(curr->left),getHeight(curr->right));
	int BF = getBF(curr);
	if(BF>1 && getBF(curr->left)>=0){//kiri-kiri
		return rightRotate(curr);
	}
	if(BF>1 && getBF(curr->left)<0){//kiri-kanan
		curr->left=leftRotate(curr->left);
		return rightRotate(curr);
	}
	if(BF<-1 && getBF(curr->right)<=0){//kanan-kanan
		return leftRotate(curr);
	}
	if(BF<-1 && getBF(curr->right)>0){//kanan-kiri
		curr->right=rightRotate(curr->right);
	return leftRotate(curr);
	}
	return curr;
}



void removeAll(Dt* curr){
	if(curr!=NULL){
	removeAll(curr->left);
	removeAll(curr->right);
	free(curr);
	}
}
void inorder(Dt* curr){
	if(curr!=NULL){
	inorder(curr->left);
	printf("%d ",curr->angka);
	inorder(curr->right);
	}
}

int main(){
	int menu;
	Dt *root=NULL;
	do{
	cls();
	printf("Inorder : ");
	inorder(root);
	printf("\n1.Add\n");
	printf("2.Del\n");
	printf("3.Exit\n");
	printf("Input menu : \n");
	scanf("%d",&menu);
	getchar();
	if(menu==1){
	//add

		int angka;
		printf("Input angka : ");
		scanf("%d",&angka);
		getchar();
		root=add(root,angka);
	}
	else if(menu==2){
	//del
		int angka;
		printf("Input angka : ");
		scanf("%d",&angka);
		getchar();
		root=del(root,angka);
	}
	else if(menu==3){
	//Exit
		removeAll(root);
	}
	}while(menu!=3);


getchar();
return 0;

}
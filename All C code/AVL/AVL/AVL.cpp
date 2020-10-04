#include <stdio.h>
#include <malloc.h>

struct Data{
	int angka;
	int height;
	struct Data *left, *right;
};

typedef struct Data Dt;			//struct Data alias Dt

int max(int a, int b){
	if(a > b) return a;
	return b;
}

int getHeight(Dt *curr){
	if( curr==NULL ) return 0;
	return curr->height;
}

int getBF(Dt *curr){
	if( curr == NULL ) return 0;
	return getHeight(curr->left) - getHeight(curr->right);
}

Dt* rightRotate(Dt *x){
	Dt *y, *c;

	y = x->left;
	c = y->right;
	//rotate
	y->right = x;
	x->left = c;
	//update height
	x->height = 1 + max( getHeight(x->left), getHeight(x->right) );
	y->height = 1 + max( getHeight(y->left), getHeight(y->right) );

	return y;	//return node yg paling atas
}

Dt* leftRotate(Dt *x){
	Dt *y, *c;

	y = x->right;
	c = y->left;
	//rotate
	y->left = x;
	x->right = c;
	//update height
	x->height = 1 + max( getHeight(x->left), getHeight(x->right) );
	y->height = 1 + max( getHeight(y->left), getHeight(y->right) );

	return y;	//return node yg paling atas
}

Dt* newNode(int angka){
	Dt *node;
	node = (Dt*) malloc( sizeof(Dt) );
	node->angka = angka;
	node->height = 1;		//node baru default height 1
	node->left = NULL;
	node->right = NULL;
	return node;
}

Dt* add(Dt *curr, int angka){
	if( curr==NULL ){
		return newNode(angka);
	}
	else if( angka < curr->angka ){
		curr->left = add(curr->left, angka);
	}
	else if( angka > curr->angka ){
		curr->right = add(curr->right, angka);
	}

	curr->height = 1 + max( getHeight(curr->left), getHeight(curr->right) );
	int BF = getBF(curr);

	if( BF > 1 && angka < curr->left->angka){		//kiri-kiri
		return rightRotate(curr);
	}
	if( BF > 1 && angka > curr->left->angka){		//kiri-kanan
		curr->left = leftRotate(curr->left);
		return rightRotate(curr);
	}
	if( BF < -1 && angka > curr->right->angka){		//kanan-kanan
		return leftRotate(curr);
	}
	if( BF < -1 && angka < curr->right->angka){		//kanan-kiri
		curr->right = rightRotate(curr->right);
		return leftRotate(curr);
	}

	return curr;
}

void clear(){
	for(int i=1; i<=25; i++) putchar('\n');
}

void preorder(Dt *curr){
	if(curr != NULL){
		printf("%d ", curr->angka);
		preorder(curr->left);
		preorder(curr->right);
	}
}

void inorder(Dt *curr){
	if(curr != NULL){
		inorder(curr->left);
		printf("%d ", curr->angka);
		inorder(curr->right);
	}
}

void postorder(Dt *curr){
	if(curr != NULL){
		postorder(curr->left);
		postorder(curr->right);
		printf("%d ", curr->angka);
	}
}

void removeAll(Dt *curr){
	if( curr != NULL ){
		removeAll(curr->left);
		removeAll(curr->right);
		free(curr);
	}
}

Dt* del(Dt *curr, int angka){
	//MASUKKAN CODING DELETE BST DI SINI, PASTIKAN CODE BERJALAN LANCAR TANPA BUG
if(curr == NULL) return NULL;
	if(curr->angka == angka){
		//gapunya anak
		Dt	*temp;	
		if(curr->left == NULL && curr->right == NULL){
			free(curr);
			curr=NULL;
		}
		else if(curr->left != NULL && curr->right == NULL){
			temp = curr->left;
			*curr = *temp;
			free(temp);
		}
		else if(curr->left == NULL && curr->right != NULL){
			temp = curr->right;
			*curr = *temp;
			free(temp);
		}
		else {
			temp = curr->left;
			while( temp->right != NULL ){
				temp = temp->right;
			}
			curr->angka = temp->angka;
			curr->left = del(curr->left, temp->angka);
		}
	}
	else if ( angka < curr->angka){
		curr->left = del(curr->left, angka);
	}
	else if( angka > curr->angka){
		curr->right = del(curr->right, angka);
	}

	if(curr == NULL){
		return NULL;
	}
	

	//tiap kali ada node yg dihapus, update height dan check BF, sudah balance?
	curr->height = 1 + max( getHeight(curr->left), getHeight(curr->right) );
	int BF = getBF(curr);

	if( BF > 1 && getBF(curr->left) >= 0 ){		//kiri-kiri
		return rightRotate(curr);
	}
	if( BF > 1 && getBF(curr->left) < 0 ){		//kiri-kanan
		curr->left = leftRotate(curr->left);
		return rightRotate(curr);
	}
	if( BF < -1 && getBF(curr->right) <= 0 ){	//kanan-kanan
		return leftRotate(curr);
	}
	if( BF < -1 && getBF(curr->right) > 0 ){	//kanan-kiri
		curr->right = rightRotate(curr->right);
		return leftRotate(curr);
	}

	return curr;
}

int main(){
	Dt *root=NULL;
	int angka, menu;

	do{
		clear();
		printf("\npreorder : "); preorder(root);
		printf("\ninorder  : "); inorder(root);
		printf("\npostorder: "); postorder(root);
		printf("\n1. Add");
		printf("\n2. Remove");
		printf("\n3. Exit");
		printf("\ninput menu: ");
		scanf("%d", &menu); getchar();
		if( menu == 1 ){
			printf("\ninput angka: ");
			scanf("%d", &angka); getchar();
			root = add(root, angka);
		}
		else if( menu == 2 ){
			printf("\ninput angka: ");
			scanf("%d", &angka); getchar();
			root = del(root, angka);
		}
		else if( menu == 3 ){
			removeAll(root);
			root = NULL;
		}
	}while(menu != 3);

	return 0;
}
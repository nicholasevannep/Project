#include<stdio.h>
int main(){
	FILE * p;
	char a[19];
	int inp;
	do{
	printf("1. read\n");
	printf("2. write\n");
	printf("3. append\n");
	printf("4. exit\n");
	scanf("%d",&inp);
	fflush(stdin);
	switch(inp){
	case 1 :
		p = fopen("text.txt","r");
		
		while(!feof(p)){

		fscanf(p,"%s\n",a);
		
		printf("%s\n",a);
		}
		
		
		break;
	
	case 2 :

		p = fopen("text.txt","w");
		fprintf(p,"Hai");
		
		break;
	
	case 3 :
	
		p = fopen("text.txt","a");
		fprintf(p,"\nHai");
		
		break;
	}



	fcloseall();
	}while(inp!=4);


getchar();
return 0;
}
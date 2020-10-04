#include <stdio.h>

int x, y=10, z=4, result;
char op;
void control(){
	scanf("%d",&x); fflush(stdin);
}
int main(){
	control();
	switch(x){
		case 1: result=y+z;
			op='+'; break;
		case 2: result=y-z;
			op='-'; break;
		case 3: result=y*z;
			op='x'; break;
		case 4: result=y/z;
			op=':'; break;
		case 5: result=y%z;
			op='%'; break;
	}
	printf("%d %c %d = %d\n",y,op,z,result);
	getchar();
}

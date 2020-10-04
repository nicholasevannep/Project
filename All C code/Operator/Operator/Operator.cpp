#include<stdio.h>
int main(){
	int lit, input, x;
	char a[100], b[100], c[100];
	scanf("%d\n", &input);
	for(lit=1; lit<=input; lit++){
	scanf("%c %c %c%*c", &a[lit], &b[lit], &c[lit]);
	}
	for(lit=1; lit<=input; lit++){
		if(a[lit]>b[lit]){
			x=a[lit];
			a[lit]=b[lit];
			b[lit]=x;
		}
		if(a[lit]>c[lit]){
			x=a[lit];
			a[lit]=c[lit];
			c[lit]=x;
		}
		if(b[lit]>c[lit]){
			x=b[lit];
			b[lit]=c[lit];
			c[lit]=x;
		}
	}
	for(lit=1; lit<=input; lit++){
		printf("Case #%d: %c %c %c\n", lit, a[lit], b[lit], c[lit]);
	}

	return 0;
}
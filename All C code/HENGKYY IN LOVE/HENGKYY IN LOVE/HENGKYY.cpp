#include<stdio.h>
int main() {  
	char name[100];  
	printf("\tBina Nusantara Library System\t"); 
	printf("\t\t\*-*-*-*-*-*-*-*-*\n\n");  
	printf("Please enter your name : ");  
	scanf("%s",&name); 
	fflush(stdin);  
	printf("\n\n Hi! %s, This is a quote for you.....\n\n",name);  
	printf("%c Trying to forget someone you love is like trying to remember someone you never knew \n\n",3);
	printf("Press Enter to other quotes...\n\n");
	getchar();
	printf("%c Eventually, all the pieces will fall into place. Until then.. laugh at the confusion, live for the moment, and know that everything happens for the reason \n\n",3); 
	printf("%c If everything happened when and how we wanted it to, nothing would be worth waiting for.. \n",3);  
	printf("Welcome to C languange... Good Luck!!!!");  
	getchar();  
	return 0 ;
}
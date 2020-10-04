#include <stdio.h>
#include <conio.h>
struct Employee
{int Id;
char Name [25];
char Gender [7];
int Age;

};
void display(struct Employee);
int main(){
	Employee Emp= {1,"John","Male",25};
	display(Emp);
}
void display(struct Employee E)
{ printf("\nEmployee Id:%d",E.Id);
	printf("\nEmployee Name:%s",E.Name);
	printf("\nEmployee Gender:%s",E.Gender);
	printf("\nEmployee Age:%d",E.Age);

	getchar();
}
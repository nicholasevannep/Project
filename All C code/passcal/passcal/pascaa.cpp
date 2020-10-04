#include <iostream>
using namespace std;

int main(void) 
{
	int num;
	cout<<"Enter Number"<<endl;
	cin>>num;
	if(num<1)
	{
		cout<<"Are you gone mad? Number should be greater than 1"<<endl;
		return 0;
	}
	for(int i=1;i<=num;i++)
	{
		for(int k=0;k<i;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	getchar();
	return 0;
}
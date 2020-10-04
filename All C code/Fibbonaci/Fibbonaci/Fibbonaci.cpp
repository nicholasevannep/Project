#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	a=1;
	b=0;
	for(int i=0;i<100;i++)
	{	c=a+b;
		if(c>100)
		{
			break;
		}
		else
		{
			cout<<c<<endl;
		}
		a=b;
		b=c;
	}
	getchar();
	return 0;
}
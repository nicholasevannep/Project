#include<iostream>
using namespace std;
void segitiga(int atas ,int bawah,int i,int j)	
{
	
	for(int i=bawah;i<=atas;i++)
	{
		for(int j=1;j<=i;j++)
		{cout<<"*";}
		cout<<endl;
	}
	for(int i=atas-1;i>=bawah;i--)
	{
		for(int j=1;j<=i;j++)
		{cout<<"*";}
		cout<<endl;
	}
	getchar();
}
	
int main()
	{
		int atas,bawah,i=0,j=0;
	cout<<"William Angel"<<endl;
	cout<<"222018010"<<endl;
	cout<<"masukkan batas bawah : ";
	cin>>bawah;
	cout<<"masukkan batas atas : ";
	cin>>atas;
	segitiga(atas,bawah,i,j);
	getchar();
	}
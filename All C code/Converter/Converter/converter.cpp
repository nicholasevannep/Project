#include<iostream>
using namespace std;
//void ctf(float sum,float d)
//{	cout<<"Masukkan angka yang ingin di conversikan"<<endl;
//	cin>>d;
//	sum=((9/5)*d)+32;
//	cout<<sum<<endl;
//}
//void ftc(float sum,float d)
//{	cout<<"Masukkan angka yang ingin di conversikan"<<endl;
//	cin>>d;
//	sum=(5/9)*(d-32);
//	cout<<sum<<endl;
//}
//void ctr(float sum,float d)
//{	cout<<"Masukkan angka yang ingin di conversikan"<<endl;
//	cin>>d;
//	sum=d/5*4;
//	cout<<sum<<endl;
//}
//void rtc(float sum,float d)
//{	cout<<"Masukkan angka yang ingin di conversikan"<<endl;
//	cin>>d;
//	sum=d/4*5;
//	cout<<sum<<endl;
//}
//void ftr(float sum,float d)
//{	cout<<"Masukkan angka yang ingin di conversikan"<<endl;
//	cin>>d;
//	sum=(4/9)*(d-32);
//	cout<<sum<<endl;
//}
//void rtf(float sum,float d)
//{	cout<<"Masukkan angka yang ingin di conversikan"<<endl;
//	cin>>d;
//	sum=((9/4)*d)+32;
//	cout<<sum<<endl;
//}
void temp()
{	int s;float d;
	float sum=1.0;
	
	cout<<"Temp Converter"<<endl;
	cout<<"1 = change from celcius to fahrenheit"<<endl; 
	cout<<"2 = change from fahrenheit to celsius"<<endl;
	cout<<"3 = change from celcius to reamur"<<endl;
	cout<<"4 = change from reamur to celsius"<<endl;
	cout<<"5 = change from fahrenheit to reamur"<<endl;
	cout<<"6 = change from reamur to fahrenheit"<<endl;
	cin>>s;
	switch(s)
	{
	case 1: cout<<"Masukkan angka yang ingin di conversikan"<<endl;
			cin>>d;
			sum=((1.8)*d)+(float)32;
			cout<<sum<<endl;
			break;
	case 2: cout<<"Masukkan angka yang ingin di conversikan"<<endl;
			cin>>d;
			sum=(d-32)*(5/9);
			cout<<sum<<endl; 
			break;
	case 3: cout<<"Masukkan angka yang ingin di conversikan"<<endl;
			cin>>d;
			sum=d/5*4;
			cout<<sum<<endl;
			break;
	case 4: cout<<"Masukkan angka yang ingin di conversikan"<<endl;
			cin>>d;
			sum=d/4*5;
			cout<<sum<<endl; 
			break;
	case 5: cout<<"Masukkan angka yang ingin di conversikan"<<endl;
			cin>>d;
			sum=(4/9)*(d-32);
			cout<<sum<<endl;
			break;
	case 6: cout<<"Masukkan angka yang ingin di conversikan"<<endl;
			cin>>d;
			sum=((9/4)*d)+32;
			cout<<sum<<endl;
			break;
	}
}
int main()
{	int s;float d;
	float sum=1;
	temp();
	getchar();
	getchar();
	return 0;
}
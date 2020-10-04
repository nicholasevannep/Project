#include<iostream> 
using namespace std; 
  
class kamar 
{ 
public: 
  kamar()  { cout << " kamar 's constructor called" << endl; } 
}; 
  
class customer 
{ 
public: 
  customer ()  { cout << " customer 's constructor called" << endl; } 
}; 
  
class transaksi: public customer, public kamar  // Note the order 
{ 
public: 
  transaksi ()  { cout << " transaksi 's constructor called" << endl; } 
}; 
  
int main() 
{ 
    transaksi; 
    return 0; 
} 

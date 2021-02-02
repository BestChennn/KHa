#include<iostream>
#include<string>
using namespace std;
int main (){
	int a=5;
	char b='A';
	char &c=b;
	int *x=&a;
	void*y=&b;
	void*z=&x;
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<" "<<endl;
	cout<<(void*)&a<<" ";
	cout<<(void*)&b<<" ";
	cout<<(void*)&c<<" ";
	cout<<(void*)&x<<" ";
	cout<<(void*)&y<<" ";
	cout<<(void*)&z<<" "<<endl;
	b='F';
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<" "<<endl;
	b='W';
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<" "<<endl;
	a=6;
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<" "<<endl;
	a=7;
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<x<<" ";
	cout<<y<<" ";
	cout<<z<<" "<<endl;
	
	
}
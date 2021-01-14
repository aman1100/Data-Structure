#include<iostream>
using namespace std;
int main()
{
	int i=10;
	int* p =&i;
	cout<<i<<endl;
	cout<<*p<<endl;	
	cout<< sizeof(*p)<<endl;
	cout<< sizeof(p)<<endl;
	i++;
	
	cout<<i<<endl;
	cout<<*p<<endl;
	(*p)++;
	cout<<i<<endl;
	cout<<*p<<endl;
	*p=23;
	cout<<i<<endl;
	cout<<*p<<endl;
	
	
}

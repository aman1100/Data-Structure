//this program is to understand that if we declare an array eg: a[10]
//then if we access the a it will work as an pointer variable for a
//and there is no new memory allocation for variable a to storing the address of array a
// but if we declare a pointer then it will take another 8 more bytes to store the adddress
//Note: we can not change a further like a=a+1 because we can not change the value in the symbol table
// symbol  table is a location where all the addresses stores of the variable
//but we can do changes in array pointer
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	a[0]=13;
	a[1]=14;
	int *p=a;
	cout<<sizeof(a)<<endl;//this will give size of array*4 =40
	cout<<sizeof(p)<<endl;//this will give the size of allocated pointer variable =4
	
	cout<<a<<endl;
	cout<<&a<<endl;	
	cout<<p<<endl;
	//all the above 3 statements prvide same output
	cout<<*a<<endl;//will print the first element of array also dereferencing
	cout<<*a+1<<endl;//now we can perform arithmetic operations at this
	//but if we do like this
	//a=a+1 throws error because we can not change data in symbol table.
	p=p+1;
	cout<<*p<<endl;
	
	
}

//this program is to understand the arithmetic operations on pointers 
//we can add as well as substract in pointer and it will move bytes respectively
//the only case in which arithmetic in pointers can be used is an array 
#include<iostream>
using namespace std;
int main()
{
	int arr[4]={1,2,3,4};
	int* p=arr;
	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<endl;
	}
	for(int i=0;i<4;i++)
	{
		cout<<*p<<endl;
		(*p)++;
	}
	//Now i want to see if we done operation like pointer ++ on an integer variable address then
	//what will be the output \
	//if it is an int pointer then it will add 4 bytes into the addresss of that variable
	//and the next data stored at that location can be accessed so only in array this operation
	//will be useful  let see by the code
	
	int a=12;//declared an int variable
	int* ptr=&a;//declared an pointer of variable a
	cout<<ptr<<endl;
	ptr++;
	cout<<ptr<<endl;
	
}

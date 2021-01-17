//So in this program we will learn how to find out the last index of an element in an array
//if the size of an array is 0 and the element is not present in that array simply return -1
//I am taking array indexing intially from 0.
//Example array=[1,2,3,4,1,2] an the element is 1
//Output should be 4
#include<iostream>
using namespace std;

int lastIndex(int a[],int size,int x) //from backtraversing of an array.
{
	if(size ==0 ){return -1;} 
	if(a[size-1]==x){return size-1;}
	int smallOutput=lastIndex(a,size-1,x);
	return smallOutput;
}

int main()
{
	int a[10]={1,2,3,4,1,2,3,4,1,2};
	int x=1; // x is the element of which we have to find the index.
	cout<<lastIndex(a,10,x);//lastIndex is the fucntion which will provide the answer and its take
					//an array,size and the element as the parameter.
}

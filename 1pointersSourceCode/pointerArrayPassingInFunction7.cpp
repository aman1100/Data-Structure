//In this program we will see that when we pass an array in an function
//it will not passed as array actually it will pass as an int type pointer
//so if you use sizeof() function in mainfucntion or in sizeOfArray user defined function 
//both will provide you different answer because the size of pointer usually is 8
#include<iostream>
using namespace std;
void sizeOfArray(int a[])
{
	cout<<sizeof(a)<<endl;//will give the answer 8 because the array passed in this as an pointer and the pointer size is 8
}

//As we know when we pass an array in an function so we get an pointer of an array
//So we can actually use integer type pointer as an parameter of function
//we can also define our function like this:
//int sum(int a[],size)
int sum(int* a,int size)
{
	int ans=0;
	for(int i=0;i<size;i++)
	{
		ans+=*a;
		a=a+1;//also we can use rather than these two lines ans+=a[i] provide same output
	}
	return ans;
}
int sumFromThirdElement(int* a,int size)//get reference of third element of array as an parameter
{
	int ans=0;
	for(int i=0;i<size;i++)
	{
		ans+=a[i];
	}
	return ans;
}
int main()
{
	int a[10]={1,1,1,1,1,1,1,5,1,1};
	cout<<sizeof(a)<<endl;//will give the answer 40= size(10)*bytes of int type(4)
	sizeOfArray(a);
	cout<<sum(a,10)<<endl;//we passed our array in this function but reached as an refernece of this array means a pointer
	cout<<sumFromThirdElement(a+3,7)<<endl;//Now we know that the reference reached to the fucntion
	//so we sended the reference of third element of our array by increment thre in our reference/address
}




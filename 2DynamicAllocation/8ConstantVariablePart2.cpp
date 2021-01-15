//Constant Variable Part-2
#include<iostream>
using namespace std;
void rfun(const int & r) // read this after 35 no. of line
{
	//r++; //(Throws error)So as i write const at params it will not grant modification and throw error.
}

void fun(const int* p) //Read this after 30 no. of line.
{
	//So how can i get the assurity here by writing const at the front of the params and provide only read only access.
	//(*p)++; SO if I do something like this it will throw an error.
}
int main()
{
	int const i=10; //created a constant variable i.
	//int *p=&i; This line will throw error because you cannot store the address of a constant variable 
				//into a normal pointer because you can do something like this (*p)++;
				//So the whole meaning of const get destructed. So this is not allowed
				//Now what you can do is create a const type pointer 
	int const * p=&i; //with the help of this we get assurity that pointer also cant perform modification.
	
	int j=12;//created a int type storage with path j
	int const * p2=&j; //created an constant type pointer storing the address of storage of path j
						//Now j can modify the storage but p2 can't. but chnages reflect at both
	j++;
	cout<<j<<endl;
	cout<<*p2<<endl;
	
	//Now the same nonmodification assurity i can get by the functions too.
	int k=20;
	int *p3=&k;
	fun(p3);
	
	//Same as we can do in passing by reference method
	int k2=10;
	int & r1=k2;
	rfun(r1);
}

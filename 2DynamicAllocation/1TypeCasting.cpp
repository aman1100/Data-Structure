#include<iostream>
using namespace std;
int main()
{
	int i=65;
	char c=i; //This is known as implicit type casting which is done by the system/compiler
	//automatically the the ascii value at 65 get into char c and get printed
	cout<<c<<endl;
	
	int* p =&i;
	//char* pc=p;
	//Now it will throw error because compiler get confused what we want to do
	//because now pc character pointer wants to refer the same address of p pointer
	//but if we dereference it, It cannot treat as an character pointer implicitly.
	//So we have to do it now explicitly
	char* pc =(char*)p; //Now i am telling the compiler to treat p as an character pointer reference
	cout<<*p<<endl;
	cout<<*pc<<endl;
	
	//very important lines
	//At the time of dereference the character pointer start dereference the same address of p
	//As we know an integer stored in 4 bytes so 65 will be stored like
	//  \0 \0 \0 65
	//So as we know when an character pointer dereference it will start reading from 1st byte
	//untill it gets null pointer. So pc should print nothing.But we see above *pc printing A.
	//Because in explicitly allocation the most significant bit stored at least significant byte which means
	// 65 \0 \0 \0   let see this from code
	
	cout<<*pc<<endl; //So as we see it will printing the first byte which is 65 
	cout<<*(pc+1)<<endl;//null stored at second byte
	cout<<*(pc+2)<<endl;//null stored at third byte
	cout<<*(pc+3)<<endl;//null stored at fourth byte
	
	char nc='A';
	int ni=nc;
	cout<<ni<<endl;
	
	char* pnc= &nc;
	int* pni=(int*)pnc;
	
	cout<<*pnc<<endl;
	cout<<pnc<<endl;
	cout<<pni<<endl;
	cout<<*pni<<endl;
	cout<<*(pni+1)<<endl;
	cout<<*(pni+2)<<endl;
	cout<<*(pni+3)<<endl;
	
}

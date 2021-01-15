//Constant Variable Part-3
#include<iostream>
using namespace std;
int main()
{
	int i=10;
	int j=20;
	int const *p =&i;//what does this line means that from p path I can not modify i path storage
					//I can not perform action like (*p)++
	p=&j; //But I can change the path of p variable
			//read carefully I am saying that I can not modify the storage from the constant path 
			//But i can change the path stored in p,still I can not perform (*p)++
			//Now p is a constant pointer variable of which is storing the address of variable p.
			
	//But Now I dont want that my constant poiter change the address
	int * const p2=&i; // start reading from left p2 which is a type of constant of pointer of integer type
					//Now i cannot perform action like this:
					//p2=&j it will throw error
	(*p2)++; //But now we can perform this increment function because only the path get constant not the storage
	
	//Now at last i want to that my constant pointer cant change the address and storage as well:
	int const * const p4=&i;
	//p4=&j;
	//(*p4)++; //Both statements will throw error because now the path as well as the pointed storage.	
}

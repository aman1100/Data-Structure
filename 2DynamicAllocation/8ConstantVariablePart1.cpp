//Very Important topic to discuss
//Constant variables Part-1
//In this program we will discuss about constant variables
//A cnstant variable is that variable that we can not modify simple definition. Read carefully all the lines
//further step by step get the logic
#include<iostream>
using namespace std;
int main()
{
	int j=10;//So what I do here is created a memory space for variable j and at that memory space put 10.
	j=12; //Now with the help of memory space name (j) I can simply modify the data ther, j=12. ~Right! No issue.
	
	//Now I want to declare a variable which can not be modified,So I have to create a const type variable
	
	int const j2=10;// Now what I do here is I craeted a memory space of int type which I can access
					//by a path which is constant named as j2 ..Read and understand this line carefully
					//The memory space created by j2 is not constant the path from where I can access that memory
					//space that is constant, which is j2
	const int i2=10;//we can create a constant like this also.
	
	//This means from j2 path i can not perform modification i can only read that memory space
	
	//Now get focused and try to understand this part:
	//TOPIC-1: constant reference from a non const int
	
	int a=10;		 //created a memory space of int type with path a, and can be modified.
	const int & k=a; //created a reference of variable a of const type, what it means
					//I have two paths to access the memory space which is craeted by a;
					//with the help of a and with the help of k
					//But as we can see k is constant type reference we can not modify that memory space
					//with k, yeah but we can modify with a, and changes get reflected to both,Lets see.
	//k++; Throws error as read-only reference.
	a++;
	cout<<a<<endl;
	cout<<k<<endl; //Both statement will print 11, So here we understand the path get constant not the mempry space
	
	//TOPIC-2: constant refernce from a constant int
	int const a2=12;//created a memory space with an constant path named a2(read only access to a2)
					//we can not do modification from a2 path at the memory space.
	int const & k2=a2; //created an reference of int type constant variable accessing the same memory
						//space of a2, but it is type of constant So only get read only access.
					
	//So from a2 and k2 we can not perform any modification at the memory space.				
		
	//TOPIC-3 : reference from a const int
	int const a3=12; //created a memory space with an constant path named a3(read only access to a2)
					//we can not do modification from a2 path at the memory space.
	//int & k3=a3;  //It will throw error of type: [Error] invalid initialization of reference of type 'int&' from expression of type 'const int'
	//k3++;			 // because we created an reference variable of int type which is accessing the same memory space 
				//accessed by a3. which is not possible 
				//because a3 is only getting read-only access.
				
	//So with the help of this we understand only the path get constant.
}

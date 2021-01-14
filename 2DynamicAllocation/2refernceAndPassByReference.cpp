//In this program we wil study about reference or pass by reference
#include<iostream>
using namespace std;
//start reading these two functions after 33 line
void increment(int k)//parameter passing by variable
	{
		k++;
	}
	void increment2(int& k)//parameter passing by reference
	{
		k++;
	}
int main()
{
	int i=10; //we created a new memory for i and at i we put the value 10
	int j=i; //we created a new memory for j and put the same value of i
	i++; // Now if we increment the value of i then the changes doesnot reflect at i
	cout<<j<<endl; //it will print same j value 10
				//Now if we want to access that if we change the value of one variable then the changes will 
				//reflect at anoter, This is what i want Right!
				//We can achieve this by sharing the same variable by reference
	int q=10;//Now we created a new memory named as q and put the data there which is 10
	int& w=q;//In this we dont create a new memory for variable w we are assigning it the same
				//memory g=of q
	int* p=&q;
	int* p2=&w;
	cout<<p<<endl<<p2<<endl;//same address
	q++;
	cout<<w<<endl;//So here we can see the changes get reflected to both because both are sharing the 
				//same memory.
				//Now the main point is this what is the use of this reference
	
	int n=10;
	increment(n);//so when i call increment function the changes doesnt reflect to variable n 
				//because the fucntion variable reflect changes only at its local variable not at main variable
	cout<<n<<endl;//so if we print n nothing get changes prints the same n=10;
	
	increment2(n);//In this function calling the variable k of function is a reference variable 
				//which means a new memory is not allocated to variable k, it is accessing the same memory of variable n.
	cout<<n<<endl;
	
	//Note: Return by address or return by reference of a fucntion is a bad practice because
	//after when the function get execueted the memory get vanished and storing that function data is
	//illogical.
}

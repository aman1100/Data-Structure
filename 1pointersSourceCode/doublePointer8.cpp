#include<iostream>
using namespace std;
void incrementByvariable(int i)
{
	i++;
	cout<<i<<endl;
}
void incrementBySinglePointer(int* sp)
{
	(*sp)++;
	cout<<*sp<<endl;
}
void incrementByDoublePointer(int** dp)
{
	(**dp)++;
	cout<<**dp<<endl;
}
int main()
{
	int i= 10;
	int* sp=&i;
	int** dp=&sp;
	//print the address of variable i 
	cout<<&i<<endl;
	cout<<sp<<endl;
	cout<<*dp<<endl;
	//print the address of our single pointer p
	cout<<&sp<<endl;
	cout<<dp<<endl;
	//print the address of our double pointer dp
	cout<<&dp<<endl;
	//want to print variable i value
	cout<<i<<endl;
	cout<<*sp<<endl;
	cout<<**dp<<endl;
	//want to increment by different function
	incrementByvariable(i);//changes doesnt reflect in main fucntion 
	incrementBySinglePointer(sp);//the value of i get changed to +1 becuase inside function we use dereferncing
	//So at the main address the value get updated
	incrementByDoublePointer(dp);//same in this case
	
}

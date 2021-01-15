//In this program we will discuss about global variables
//Global variable are those variables which are accessed by all.
//please Try to read important point at last.
#include<iostream>
using namespace std;
int a; //This is the global variable, can be accessed by all.
void dec()
{
	a--;
	cout<<a<<endl; //so first main function called wher a get 10 then a get decremented to 9
}
void inc()
{
	a++;
	cout<<a<<endl;//Inside this function the global varible a get incremented by 1 and get 10.
					//The changes will also be reflect in the main method.
}
int main()
{
	//int a;
	a=10; //I created a variable a and put a=10 now i want to increment it as well as decrement it
			//So i created 2 methods. But if i change something in these two methods the changes 
			//doesnot reflect in my main method. and i have to pass my variable as an parameter as well
			//So what we can do is I can create an global variable named a.
			
	dec();
	inc();
	cout<<a<<endl;
	
}

//!!!!!!!!Important Point!!!!!!!!!!!!!!!!!!!
//Declaring global variable is very very bad practice for programmers
//Instead making an global variable use to pass veraible in methods as parameters
//If you end scope of variable in method and dont want to create another memory in methods
//Use pass variable by refernce method
//But dont use global variable because if by mistake the value get changed the whole meaning of code
//get distructed.

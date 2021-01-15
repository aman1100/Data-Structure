//So in this program we will discuss about inline and default arguments
//First to understand inline arguments we created a function named as max which is providig me the 
//max of the two values
//Now what we can do I can simply write if else statement like this:
//if(a>b) { int c=a;}
//else{ int c =b}  ~Right
//But this much line of codes doesnot get inlined by the compiler
//Compiler at max inline 1 to 2 line of code
//So to use inline we have to use ternary operator
//Syntax: (conditional statement)?(if its get true):(if it gets false);
//To create an inline function we just have to write inline first before the method ,like this:
//inline int max(){}

//What are the benefits of inline arguments?
//it reduces the complexity
//So at compilation what compiler does with inline fucntions
//Compiler replaces the line of written in the method where you call the inline function
#include<iostream>
using namespace std;

inline int max(int a,int b) 
{
	return (a>b)?a:b; //here i used ternary operator return (conditional statement)?(if gets true return a):(if gets false return b);
}

//Now lets talk about default arguments
//Sometimes when we create an function we pass parameters in it
//And at the time of calling of that method we have to pass the pass the variables as parameters
//So what I want to do if user called that method and didnt pass the parameter
//Then system should contain some default value of the arguments
//lets create two methods ofsum sum1()without default arguments and sum2() and with default arguments

void sum1(int a,int b,int c,int d)
{
	cout<<a+b+c+d<<endl;
}

void sum2(int a,int b,int c,int d=0)
{
	cout<<a+b+c+d<<endl;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int c=max(a,b);
	cout<<c<<endl;
	
	sum1(1,2,3,4);//So in sum2 method we have 4 parameter if i miss 1 paramter  (sum1(1,2,3)
					// then it will throw error because it require 4 parameters to execute
	sum2(1,2,3);  //In the other case if i do not pass the 4th paramter so there is no issue because
				//I setted the fourth paramter as default whose value is 0;
	sum2(5,5,5,5);//But if you pass the fourth argument it will overwrite the default value
}

//!!!!!!!!!!!!!!!!Important point!!!!!!!!!!!!!!!!
//You can set the default argument value of the right most parameter first then pursue at the left side
//to avoid confusion for compiler
//eg:
//sum3(int a,int b=0,int c=0, int d)
//so when you call this sum3 function like this:
//sum3(1,2,3); Then compiler get confused that what is passed at a,b,c,d
//So the simple rule is to start with right most parameter
//sum3(int a,int b,int c=0,int d=0).

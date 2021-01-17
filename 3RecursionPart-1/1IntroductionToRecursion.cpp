//In this program we will learn about recursion
//So we learn previously that we made a function which return some value and brings the output
//Now the concept recursion based upon when a function call itself to solve the same problem
//known as recursion
//lets take an example of factorial of a number
//when we want factorial of an number (n) Then at time we just need facotorial of it (n-1)
//which means when we need to find out factorial of 4 then we basically need factorial of 3. Right.
//So we made an function named as factorial and passed 4 in it. factorial(4)
//Now I need factorial of 3. factorial(3).
//Same as I need of 2,1,0.
//So as I can see a pattern of n-1 at each step.
//But The main step is to stop the recursion at a point.Because all the above functions are waiting for the output.
//This is known as function stack.
//I am creating an stack below for the function factorial.

//			|factorial(0)| Now at factorial(0) we want to stop our recursion else the fucntion calls itself infinitely
//			|factorial(1)| When factorial(0) returns the answer the waiting time of factorial(1) will end. and return the value to factorial(2)
//			|factorial(2)| When factorial(1) returns the answer the waiting time of factorial(2) will end. and return the value to factorial(3)	
//			|factorial(3)| Sam as for factorial(3)
//			|factorial(4)| Same sa for factorial(4). Now factorial(4) will return the output to the main function.
//			|	main()	 |
//			\____________/

//Important points
//1.For the better understanding we can assume that all the function (factorial) create a new storage for 
//different execution and when get executed the scope of variable  get destructed
//2.The main step of an recursion function is to end at a specific point.

#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==0)
	{
		return 1; //This is the main step the end point of the recursion when factorial(0) called it wil return 1 and recursion calling get sttoped,
					//And above function get executed completely according to function stack.
	}
	int smallOutput=factorial(n-1);
	return n*smallOutput;
}

int main()
{
	cout<<"Enter a number";
	int n;
	cin>>n;
	int output=factorial(n);
	cout<<output;
}


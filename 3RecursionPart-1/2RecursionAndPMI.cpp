//In this program we are discussing about that at what recursion is basically based
//So the recursion is based on maths thorm known as PMI
//principal of mathematical induction
//In this PMI we have basicallu 3 rules

//lets take F(n) is true for all of n
//1- Base Case: Prove F(0) or F(1)  is true.
//2- Induction Hypothesis : In this step we dont have to think just assume that F(k) is true.
//3- Induction step : USing the 2 step(IH) proove that F(k+1) is true

//SO in this way you can easily understand the recursion code
//By understand the base step easily 
//In the previous case of factorial the base case is that the factorial of 0 is 1
//Now from that base case we assumed that factorail(1) is also true.
//So now try to understand the previous factorial function with a better understanding.

#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==0)
	{
		return 1; 
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


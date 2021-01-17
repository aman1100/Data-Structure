//So in this program we will discuss about fibonacci numbers
//fibanacci series is : 0 1 1 2 3 5 8 13 21 ...... and so on
//fibonacci series is a series of numbers based upon sum of previous 2 number which are
//(n-1) and (n-2)
//Now i have to solve this using recursion
//so Applying Pmi to create recursion program I have to apply the pmi steps basically.
//So the first step is to create the base step So now we require two previous numbers
//So we have to create base steps because the numbers are going to jump at n-1 and n-2
#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==0){return 0;} //The base step 1
	if(n==1){return 1;} //The base step 2
	int smallOutput1=fib(n-1);
	int smallOutput2=fib(n-2);
	return smallOutput1+smallOutput2;
}

int main()
{
	cout<<"Enter the nth number of fibonacci series"<<endl;
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
}


//Lets create a diagram for better understanding of this suppose i want to 3rd fibonacci number

//						fib(3) n!=0 and n!=1 so at line 16 smallOutput1 calls fib(2)
//					   /      \ 
//					  /			\	
//					 / 			 \________________________________\
//				fib(2) (smalloutput2 will run now                Now line 17 of fib(3) get executed and call fib(1).
//					and call lien 17.fib(0) which returns 0       which return 1.
//					 which will return so1+so2(0+1)=1)             and returns 1+1=2. and return to main function.
//				/
//			fib(1)
//		Now this will return 1 to fib(2)


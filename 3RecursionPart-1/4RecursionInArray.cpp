//In this program we will find out the first index of a number in an array using recursion
//To write a recursive program we have to break our array or data into parts
//which means that for the base case I will provide the answer and for the rest of
//the array recursive program bring the answer
//So the basic three rules we have to follow for  a recursive program 
//1- Create a base case
//2-Recursive call (the line at which I am calling my function again and again)
//3- Small calculation.
//We can interchange 2 and 3 step as per requirement of my program

//In this program if the number is present inisde the array than the answer will be the index number
//else the answer will be -1. AllRight!
//I am taking array indexing intially from 0.
//Example array=[5,6,7,5,6] and the element is 6
//Output should be 1.
#include<iostream>
using namespace std;

int findIndex(int a[],int size,int x)
{
	if(size ==0){return -1;} //This is my base case line 1 if size of the array is 0 I will return -1
	if(a[0]==x){return 0;} //This is my base case line 2 if I get the element at 0th index I will return 0 as index
	int smallOutput = findIndex(a+1,size-1,x); //Recursive call with incremented index number and reduced the size
	if(smallOutput == -1) //Small calculation part 
	{return -1;}  //If it doesnot find the element simply return -1.
	else
	{return smallOutput +1;} //Now as I am sending a+1 recursively then it will simply retrurn 0 when it find the
				//the element but as am I sending a+1 so it should get answer+1 in return.
	
}

int main()
{
	int a[5]={5,6,7,5,6};
	int x=7; //x is the number whose index we have to find in the array named as a
	cout<<findIndex(a,5,x);//findIndex is the function which took array,size and element.
}

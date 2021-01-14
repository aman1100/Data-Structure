//IN this program we see the difference between integer pointer and char array 
//In case of integer array the name of int array variable stores the address of the first element of array
//and integer array pointer also stores the address of first element of an array
//But in case of an char array the name of the char array variable stores the actual data rather than
//the address of char array
//as well as the char array pointer stores the data of array rather than adddress of the element of array
//and prints the elements until it reached the null element which is \0;
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,4,5,6};
	int* p=arr;
	cout<<arr<<endl;
	cout<<p<<endl;
	char carr[]="abc";
	char* cp=carr;
	cout<<carr<<endl;
	cout<<cp<<endl;
	//In case of a single character variable not array then the character pointer shows different
	//nature like we declared a char variable c and created its pointer pc
	//now if we want to print the pointer than it will print the value of char variable
	//and search for the null element \0 it means after printing the variable value 
	//it can also print some garbage value untill its find the null element \0.
	char c='a';
	char* pc=&c;
	cout<<c<<endl;
	cout<<pc<<endl;
	
	//If we create an pointer of an char array variable which stores the same data as variable than
	//it will locate itself to the temporary variable and some time it will throw error and some 
	//time it wil not, which is a very bad approach so it is not good to do some thing like this.	
	char str[]="abcde";
	//char* strp="abcde";
	cout<<str<<endl;
	//cout<<*strp<<endl;
}

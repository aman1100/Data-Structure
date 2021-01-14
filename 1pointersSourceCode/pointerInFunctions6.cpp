//In this program we see how a pointer reflect changes throw a function.
#include<iostream>
using namespace std;
//So we created a function named as print which will take an integer type pointer
//and print the address Simple.
void print(int* p)
{
	cout<<p<<endl;
}
//Now we created a function incrementPointer which will take integer pointer as a variable 
//now in this function we will increment the value of p by 1 which means 4 bytes
//As we see this function is not returning anything 
//so if we call this function in  the main function so there is no changes reflect in the value of p
//which is the address of the integer type variable 
//if we print the value of p inside this function than it will reflect changes and increment the value by 4 bytes

void  incrementPointer(int* p)
{
	p=p+1;
	cout<<p<<endl;//here the address get printed by 4bytes added.
}
//Now this is very interesting function incrementPointerdata
//In this function we are taking integer type pointer as a parameter
//Now inside this function we are first dereferncing the pointer value
//which means we are accessing the data which is stored at that address
//and now we incrementing it by 1
 
void incrementPointerData(int* p)
{
	(*p)++;//initially at *p the value is 10 and after increment it get 11
}
//if we call the above function in our main function then the changes get reflect in our main function 
//integer variable which is a
//because we accessed the data stored in that address from our function
//now if we go from function address or from our main function address we get the reflected value
//which is not happened in incrementPointer function.
int main()
{
	int a=10;
	int* p =&a;
	print(p);//print the adress of a
	
	cout<<p<<endl;//print the same address of a
	incrementPointer(p);
	cout<<p<<endl;//print the same address of a
	
	cout<<*p<<endl;//print the value of a which is 10
	incrementPointerData(p);
	cout<<*p<<endl;//print the value of after incrementing whcih is 11
}

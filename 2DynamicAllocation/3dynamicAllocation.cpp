//Dynamic memory allocation
//from starting we learnt that we can not declare an array size at the run time
//we can not do like this
//int n;
//cin>>n;
//int a[n];
//we cant do it like this we have to declare the size of the array at the compile time like
//int a[20];
//Why we have to do it like this because of the memory allocations
//As we know we have 2 memory spaces 
//1.Stack memory (small memory)
//2.Heap memory (Large memory)
//when  we execute an program some stack memory will be allocated to the program initially 
//As we know stack memory is small in size it will get memory based on the compile time.
//So according to stack memory an array size should declared at the compile time so when stack memory 
//get allocated the array memory will also be allcated in the stack and program executed successfully.
//This is known as static alloaction
//If we take size of an array at run time and if the size entered is very large 
//Than at that time stack memory is not holding that amout of space so the execution get failed.

//Now lets talk about heap memory(large memory)
//Heap memory is that memory in which we create memory at run time 
//with the help of new keyword.
//We can allocate new memory at the run time 
//it is known as Dynamic Allocation
//So if we want to allocate a new memory in heap of int type then you can simple write
	//new int;
//But now the main point is how can you access this memory for accessing you can create a pointer
//which is storing the address of memory which is dynamically allocated.
//Remember the pointer memory is stored in the stack memory becuase you created pointer at compile time
//So In this way we can dynamically create array without facing any crashes
#include<iostream>
using namespace std;
int main()
{
	int *p=new int;
	int n;
	cout<<"Enter the size of an array"<<endl;
	cin>>n;
	int *p1=new int[n];//Here we created an array of size n in our heap memory but pointer is in stack memory
					//So if i entered 10 total memory allocated is 10*4(because of int type array) + 8 (memory of pointer)
					
					//now you can simply access this pointer as an array.	
	for (int i=0;i<n;i++)
	{
		cin>>p1[i];
	}
	//Now if want to get max of an array we can simply do
	int max=-1;
	for(int j=0;j<n;j++)
	{
		if(max<p1[j])
		{
			max=p1[j];
		}
	}
	cout<<max<<endl;
	delete [] p1; //To delete an dynamic array simply write delete [] (array symbol) p1 (array name)

//Some most important points about stack memory allocation and heap memory allocation
//stack automatically release the memory based on scope of variable.
//which means if you created a loop then after the execution of for loop the memory get automatically released

//Heap memory reqyuired manually release of the memory
//To release memory we have to use deletekeyword like this.

int* ptr=new int;
delete ptr;
		//Here delete ptr is not deleting the ptr pointer variable it is deleteing the memory stored at that address.
		//So yu can do like
ptr=new int;
delete ptr;
		//it is very important part to release heap memory because if you dont then the memory get filled
		//and at an instance the program get crashed because of memory space issue.
		//Now you can check this with an program like this
	/*	while(true)
		{
			int i =10; //static memory allocation at max we are using 4bytes because when the loop run again
						//the past memory get released according to scope of variable
						//So open task manager and see this infinite loop increasing the memory or not.
						//In this case you will see the memory is not increasing 
		}*/
		/*while(true)
		{
			int* p4= new int;//dynamic memory allocation so every time a new memory of 4bytes is creating
							//And as we are not releasing the memory the memory get filled and at the end
							//the program will get crashed.
							//Try to stop this execuyion before it consume all memory snd your pc get hanged.
		}*/
}

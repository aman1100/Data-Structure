#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter number of rows and columns respectively";
	int rows,columns;
	cin>>rows>>columns;
	int** twoDArray=new int* [rows];
	//Understanding above line is very important to creating a two dimensional array.
	//There is no syntax to create like this array[10][10]; in heap memory allocation
	//So lets understand the structure of an two dimensional array
	//A two dimensional array is nothing but every row having a seperate array
	//for example if we want to create an array of [5][10] which means 5 rows and 10 columns
	//Then each of 5 rows carrying an array of size 10 ~Right!
	//So first we have to create a table(only 1 column) like structure which is storing the address of
	//every row
	//SO we have to create a table which is storing the address of all the pointers
	//To store the address of the pointers we have to create an double pointer which is storing only the 
	//adress of other pointers or we can say the address of the rows
	
	//Now we created an pointer array of size rows.
	//int** twoDArray=new int* [rows]; with the help of this line we created an array of size rows.
	//For example we entered rows = 2 and columns =4 
	//Now the rows are created above, consider rows as an array of size 2 [twoDArray[0],twoDArray[1]] like this 
	//Now we have to create new arrays of size columns respective to this rows.
	for(int i=0;i<rows;i++)
	{
		twoDArray[i]=new int[columns]; //here we are creating arrays of each rows with column size 4 as eg.
		for(int j=0;j<columns;j++)
		{
			cin>>twoDArray[i][j]; //Now if we want to fill the array as per user input
		}
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			cout<<twoDArray[i][j]; //To print the two d array
		}
		cout<<endl;
	}
	
	//the main point to release the memory whenever we use new keyword we have to release the memory at last
	//So for this we have to delete all the memory consumed by program after execution
	//Now the main question arises what we have to delete first?
	//1.Delete that twoDArray which is storing the address of all the pointer array(rows)
	//2.Delete all the data stored at the pointer array(rows) first
	
	//The correct option is 2.
	//Because if we delete the (row) pointer array then how can we access the data of the rows
	//So the pointer array(rows) will be going to release at last
	for(int i=0;i<rows;i++)
	{
		delete [] twoDArray[i]; //As all these are array we have to use [] after delete keyword
	}
	delete [] twoDArray; //Our twoDArray is also ans array so here also we have to use [] after delete keyword.
	
}

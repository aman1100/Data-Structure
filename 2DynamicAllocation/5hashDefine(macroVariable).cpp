//In this program we are going to learn about # defines
//What is the purpose of using #defines
//# defines are known as pre processor directors
//Before compiling the machine executes these pre processors directors

//Why we use #defines or what are the benefits of these #defines
//# defines are used to optimize the code.
//When we have to use the same value again and again in the code there we use #defines.
//For example: we have to use value of pi=3.14 in our program again and again So there we can use # define.

//But why we use #define we can simply write 3.14 where we want to use 3.14
//So when we want to change 3.14 in our program than it will be complex,
//like at all places where we used 3.14 there i want to use some another value like 3.144.
//Replacing this value at all the places will be a very difficult task

//So what we have one another method we can create a variable named as double pi=3.14 simple
//Now as we said we are using 3.14 again and again in our program
//If by mistake someone changed the value of oi varible then:
//Someone do something like this : pi=pi+1 
//My whole program get destroyed
//As well as I am creating a new variable double pi in above step which is consuming memory as well as time.
//So using #define is a good approach

#include<iostream> //the #used in this line is that what we are talking about(pre processors directors)
#define PI 3.14
using namespace std;
int main()
{
	int r;
	cin >>r;
	cout<<3.14*r*r<<endl;
	cout<<PI*r*r<<endl;//So in the program wherever we want to use 3.14 use PI insted
					//Now the main magic is here that PI converted to 3.14 before compilation.
}

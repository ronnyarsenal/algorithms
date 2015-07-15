//Fibonacci
#include <iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int Fibonacci(int f)
{
	if(f < 1)
	{
      return f; //return 0
	} 
	else
	{
		return Fibonacci(f-1) + Fibonacci(f-2); // last + second to last numbers
	}
}

int main ()
{   
	int x;
	cout<<"what it the range: ";
	cin>>x; 
	for( int f = 2; f < x; f++) // greater than 2 to avoid (if(f<1))
	{
	cout<<Fibonacci(f)<<endl; // prints
	}
	system("pause");
	return(0);
}

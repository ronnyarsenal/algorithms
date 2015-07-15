//prime or not
#include <iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int prime(int n)
{


  int d = 2; // divisor
  while(n > d)
  {
	  if(n % d == 0)
	  {   
		  return false;
	  }
	  else
	  {
       d++;
	  }
  }
  return true;
}

int main ()
{
  int x;
  cout<<"input value: ";
  cin>>x;
  int n = x;
  cout<<""<<endl;
  cout<<" your number "<<n<<" "<<endl; // prints n 
  cout<<" your result "<<prime(n)<<endl; // prints function
  cout<<" 1 = prime    0 = not prime";
  cout<<""<<endl;
  system("pause");
  return(0);
}

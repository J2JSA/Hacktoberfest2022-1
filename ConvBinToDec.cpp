#include <iostream>
#include <cmath>        //Header files inclusion primary step

using namespace std;

int convert(long long);

int main() 
{
   long long n;            //Variable declaration step
  cout << "Enter a binary number:";
  cin>>n;
  cout <<n<< "in binary = " << convert(n) << " in decimal ";
  
 return 0;
}

int convert(long long n) 
{
  int dec = 0 , i = 0, rem;

  while (n!=0)          //While loop
  {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    
   ++i;                    //Pre increment stage
  }

  return dec;
}

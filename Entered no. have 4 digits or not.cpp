#include <iostream>
using namespace std;
int main()
{
   int a;
   cout << "enter a four digit number: \n";
   cin >> a ;
   if(a>999&&a<9999)
   {
   	if(a%2==0)
{
	cout<<"your entered number is 4 digit even integer.";     
   }
    else
      {
       cout << "your entered number is 4 digit but not even integer \n" ;
      }
}
else
{
	cout<<"your entered number is not in 4 digits"; 
}
   return 0;
}

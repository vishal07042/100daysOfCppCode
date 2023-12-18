#include<iostream>
using namespace std;

 

 void sswap(int & c, int    &d){

  int total = c+d;
  c= total-c;
  d= total-c;

  cout<<" c is which was a "<<c <<endl;
  cout<<"d is which was b  "<<d <<endl;

 }



int main()
{
    int a=7 , b=8;
    
    sswap(a,b);
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
      int  i = 5;
       int  &j =i;
   //     int  k=&i; // yeh toh allwoed hi nahi hai;
        int  *k=&i;
        cout<<i;
        cout<<endl;
        cout<<j; cout<<endl;
      //  cout<<k; cout<<endl;
        cout<<*k;
    return 0;
}
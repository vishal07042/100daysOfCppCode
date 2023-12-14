#include<iostream>
using namespace std;

int main()
{
     int  num =5;
      int  a = num;
      a++;
      cout<<num<<endl;

       int   *p = addressof(num);
       cout<<"before";
       cout<<endl;
       ( *p)++;
        cout<<num;
    return 0;
}
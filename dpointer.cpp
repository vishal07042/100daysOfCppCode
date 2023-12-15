#include<iostream>
using namespace std;

int main()
{
int i=  5;
int* p = &i;
int** p2 = &p;
 int  *** p3 = &p2;

cout<<addressof(i);
cout<<endl;
cout<<addressof(p);cout<<endl;
cout<<addressof(p2);
cout<<endl;cout<< *  * p2; cout<<endl;
cout<< *** p3;
     
    
    return 0;
}
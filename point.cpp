#include<iostream>
using namespace std;

int main()
{
    long num=5;


   long  *cd= &num;
  // cout<< *cd;
   cout<<endl;
   cout<<cd;
   cout<<endl;
   cout<<&num;

cout<<endl;

   cout<<sizeof(cd);
    return 0;
}
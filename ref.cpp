#include<iostream>
using namespace std;
 

 void update(int & n){
    cout<<"in fn before "<<n<<endl;
    n++;
    cout<<"in fn after "<<n <<endl;
 }
  
int main()
{
     int n =5;

     cout<<"befr "<<n;
     cout<<endl;
     update(n);
     cout<<"after " <<n;


    return 0;
}
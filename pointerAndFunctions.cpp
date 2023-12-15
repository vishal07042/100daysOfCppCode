#include<iostream>
using namespace std;

void update(int **p){
    // p=p+1;//no change;
    // *p =  *p + 1; //ha change hoga;
    **p = **p +1;

    // cout<<**p;
    // cout<<*p;
}

int main()
{  int  num=5;
 int  *p1=&num;

    int **anyPointer=&p1 ;

    update(anyPointer); 
     cout<<num;cout<<endl;
     cout<<p1 <<endl;
     cout<<anyPointer <<endl;

    
    return 0;
}
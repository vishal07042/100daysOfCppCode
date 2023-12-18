#include<iostream>
using namespace std;


int sum(int num ){
int sum=0;
   while (num>0)
   {
      int rem= num%10;
      num=num/10;
      sum= sum+rem;
   }

   return sum;
   
}


int product(int num){
   int product=1;


   while(num>0){
      int rem=num%10;
      num=num/10;
      product=product*rem;

    
   }

     return product;
 
}

int main()
{
    int num = 239;
     int d=sum(num);
 
     int pro=product(num);
   

     int finals=pro-d;
     cout<<finals;
    

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
     int  an[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

  
   int n=3; //good approach 
     for ( int   i = 0; i < 4; i++)
     {

        for (int  j= 0; j < 4; j++)
        {
            // swap(an[i][j],an[j][i]);
            swap(i,j);
            cout<<an[n-i][j]<<" ";
            swap(j,i);
        }
        
        cout<<endl;
     }
     
    return 0;
}


#include<iostream>
using namespace std;

void rowWiseSum(){


}

int main()
{


    int arr[3][4]={1,2,3,4,5,6,7,8,9,0,1,1};

    // for(int i=0; i<3;i++){
    //     for (int  j = 0; j < 4; j++)
    //     {

    //         cout<<arr[i][j]<<" ";
    //         /* code */
    //     }
    //     cout<<""<<endl;
    // }
  int  sum=0;
    for (int  i = 0; i < 3; i++)
    
    {
           sum=sum+arr[2][i];
        // cout<<arr[0][i];
        /* code */
    }
    cout<<sum;
    
    
    return 0;
}
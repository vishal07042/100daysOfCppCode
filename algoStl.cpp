#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void comp(pair<int ,int>p1,pair <int ,int > p2){
    
// }

int main()
{

    int arr[]={3,15,9,1,6,4};


    int maxi =  *max_element(arr,arr+6);
    cout<<maxi;

   // sort(arr,arr+6, smaller<int>());
    // for(int y:arr){
    //     cout<<y<<endl;
    // }
    
    return 0;
}
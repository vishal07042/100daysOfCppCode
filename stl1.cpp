#include<iostream>
#include<string.h> 
using namespace std;

int main()
{
    pair <int , int> p ={1,3};

    pair<int , pair<int ,string>> ps={1,{2,"hello"}};

    pair<int ,int > arr[]= {{1,2},{2,3},{3,2},{3,3}};
    cout<<arr[2].second;

    // cout<<ps.second.second;
    // cout<<endl;



    // cout<<p.first;



    return 0;
}
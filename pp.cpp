#include<iostream>
using namespace std;

int main()
{
		int arr[8] ={4,6,5,6,7};

	 // cout<< arr;
 //   cout<<endl;
	 // cout<<  *(arr[2]);


//    cout<<3[arr];
//    cout<<endl;
//    cout<< *(3+arr);

//  int   *anyPointer = &arr[4]; 
//  cout<< *anyPointer;
//  cout<<endl; 
//  cout<<sizeof(anyPointer);cout<<endl;
// cout<<sizeof(arr);


// int temp [10]={1,3};
// //cout<<sizeof(temp);
// cout<<endl;
// cout<<sizeof( *temp);cout<<endl;
// cout<<sizeof(&temp)<< "  hello";
// cout<<endl;
// cout<<sizeof(&temp);

		//	int  arr[10];
        int   *ptr =&arr[2];
				cout<< *ptr;

				cout<<endl;
				char temp = '4';
char   *p= &temp;
cout<<p;



	 return 0;



}


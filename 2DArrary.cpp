#include <iostream>
using namespace std;


void ispresetn(){
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (arr[i][j]==target)
      {
        cout<<"true"
        /* code */
      };
      
    }
    cout << endl;
  }
}

int main()
{
    // int arr[3][3];
    // // cout<<arr[1][3];
    // cout << endl;
    // for (int y : *arr)
    // {    cin>>y;
    //     cout << arr[y][y] << endl;
    // }


     int arr[3][4];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      arr[i][j] = rand() % 100;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }



    // int arr[3][4];

    // cout<<arr[0][2];

    return 0;
}
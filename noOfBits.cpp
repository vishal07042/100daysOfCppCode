#include <iostream>
using namespace std;

int main()
{
    int n = 9;

    int count = 0;

    while (n > 0)
    {

        int result = (n & 1);

        if (result == 1)
        {
            count = count + 1;
        }

        n = (n >> 1);
    }

    cout << count;

    return 0;
}
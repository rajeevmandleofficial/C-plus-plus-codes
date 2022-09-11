#include <iostream>
using namespace std;
int main()
{
    // subarray
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "i=" << i << " j=" << j << endl;
        }
    }

    return 0;
}
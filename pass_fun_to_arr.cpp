#include <iostream>
using namespace std;
void printarr(int *arr, int n)
{
    cout << "IN fun" << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "IN main" << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    printarr(arr, n);

    return 0;
}
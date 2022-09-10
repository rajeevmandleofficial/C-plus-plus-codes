#include <iostream>
using namespace std;
int main()
{ // creating an array
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int arr[n];
    // Array capacity
    cout << sizeof(arr) / sizeof(int);

    // taking input values

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // print all the elements of the array
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}
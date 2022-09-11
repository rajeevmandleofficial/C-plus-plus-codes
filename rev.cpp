#include <iostream>
using namespace std;
void reverse(int *arr, int n)
{ // method 1
    for (int i = n - 1; i >= 0; --i)
    {
        cout << arr[i] << ",";
    }
    cout << "\n";
    // method 2
    for (int i = 0; i < n; i++)
    {
        cout << arr[n - 1 - i] << ",";
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements you want to put in the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, n);
}

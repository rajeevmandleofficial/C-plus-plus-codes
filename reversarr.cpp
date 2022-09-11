#include <iostream>
using namespace std;
void reverse(int *arr, int n)
{

    int temp, s = 0, e = n - 1;

    while (s < (e))
    {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements you want in an array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
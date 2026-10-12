#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter the array element :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    cout << "-----Reverse array----- " << endl;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// largest or smallest
#include <iostream>
using namespace std;
void largest_and_samllest(int arr[], int n)
{
    int largest = arr[0];
    int samllest = arr[0];
    for (int i = 0; i < n; i++)
    {
       if (arr[i]>largest)
       {
        largest = arr[i];
       }
       if (arr[i]<samllest)
       {
            samllest=arr[i];
       }
       
    }
    cout<<"Largest NO  : "<<largest<<endl;
    cout<<"Smallest NO : "<<samllest;
}
int main()
{
    int n;
    cout << "Enter the array size :";
    cin >> n;
    int arr[n];
    cout << "------Enter the array elements ------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ":";
        cin >> arr[i];
    }
    largest_and_samllest(arr,n);
    return 0;
}
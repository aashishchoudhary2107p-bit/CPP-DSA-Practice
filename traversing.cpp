
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size :";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter element "<<i<<":";
        cin>>arr[i];
    }
    cout<<"array element are : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
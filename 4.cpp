#include<iostream>
using namespace std ;
int main(){
    int size;
    int arr[size];
    cout<<"-----Enter the array elements----"<<endl;;
    for(int i=0;i<100;i++){
        cout<<"Enter element "<<i<<":  ";
        cin>>arr[i];
    }
    size =sizeof(arr)/sizeof(arr[0]);
}
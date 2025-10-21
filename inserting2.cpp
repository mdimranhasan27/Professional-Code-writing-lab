#include<iostream>
using namespace std;
int main(){
    cout<<"Enter array size : ";
    int n;
    cin>> n;
    cout<<"Enter array elements : ";

    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"which element do you want to insert : ";
    int tar_value;
    cin>> tar_value;
    cout << "which index do you prefer : ";
    int tar_index;
    cin>>tar_index;

    for(int i=n-1;i>=tar_index-1;i--){
        if(i==tar_index-1){  arr[i+1]=arr[i];
                             arr[i]=tar_value;
        }
        else arr[i+1]=arr[i];
    }
    for(int i=0;i<=n;i++){
        cout<<arr[i] << " ";
    }







}
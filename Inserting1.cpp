#include<iostream>
using namespace std;
int main(){
    cout<<"Give me array size : ";
    int n;
    cin>>n;
    int arr[n+1];
    cout<<"Enter array elements :  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<< "which element you want to insert : ";
    cin>> target;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>target){
            arr[i+1]=arr[i];
        }
        else{
            arr[i+1]=target;
            break;

        }
    }
    
    for(int i=0;i<=n;i++){
        cout<<arr[i] << " ";
    }
    }

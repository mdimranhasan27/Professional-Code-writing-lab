#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Size of the array: ";
    int n;
    cin >> n;

    cout<<"Enter some integer numbers(10): ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Max Value = " << max << "\n";

    int min=max ;
    for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
    }
    cout<<"Min Value = " << min << "\n";
    

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum Value = " << sum << "\n";

    cout<<"Average Value = " << sum/n << "\n";
    for(int i=0;i<n;i++){
    cout << "Sin Value for "<<arr[i]<< " is = " <<sin((arr[i]*M_PI)/180) <<"\n";
    }
      for(int i=0;i<n;i++){
    cout << "Cos Value for "<<arr[i]<< " is = " <<cos((arr[i]*M_PI)/180) <<"\n";
    }


 }
#include<bits/stdc++.h>
using namespace std;
void binary_search(string str[],int low,int high,string item){
    int mid = (low+high)/2;
    while(low<=high && str[mid]!=item){
        if(item<str[mid]) high=mid-1;
        else low=mid+1;
        mid=int((low+high)/2);
    }
    if(str[mid]==item) 
    cout<<"Searching element"<<str[mid]<<"in index number "<<mid+1<<endl;
    else
     cout<<"Searching element is not found. "<<endl;


}
 int main(){
    int arr[10]={35,45,55,65,66,77,88,99,100,120};

    int beg=0;
    int end=9;
    int mid=(beg+end)/2;
    int item=120;
    while(beg<=end && arr[mid]!=item){
        if(item<arr[mid]) end=mid-1;
        else beg=mid+1;
        mid=int((beg+end)/2);

    }
    if(arr[mid]==item) 
    cout<<"Searching element "<<arr[mid]<<"is index number "<<mid+1<<endl;
    else
     cout<<"Searching element is not found. "<<endl;


     string str[10]={"a","b","c","d","e","f","g","h","i","j"};
     binary_search(str,0,9,"d");
     return 0;
 }
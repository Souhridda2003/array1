#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"entr no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"entr the value: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=false;
    int x=sizeof(arr)/4;
    for(int i=0;i<x;i++){
        if(arr[i]!=i+1){
            flag=true;
            cout<<i+1;
            break;
        }
    }
    if(flag==false){
        cout<<"There was no missing elements";
    }
}
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
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max!=arr[i] && arr[i]>smax){
            smax=arr[i];
        }
    }
    cout<<smax;
}
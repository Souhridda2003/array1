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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
    }
    if(flag==true) cout<<"duplicate present";
    else cout<<"all elements are unique";
}

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
    int product=1;
    for(int i=0;i<n;i++){
        product=product*arr[i];
    }
    cout<<product;
}
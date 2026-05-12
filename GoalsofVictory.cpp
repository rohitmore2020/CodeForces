#include<iostream>
using namespace std;

int getans(int arr[] , int n ){
    int ans=0;
    for(int i=0 ; i < n-1 ;i++){
        ans += arr[i];
    }
    return -1*ans;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;
        int arr[n-1];
        for(int i =0 ; i < n-1 ; i++){
            cin >> arr[i];
        }
        cout << getans(arr , n ) << endl ;
    }
}
#include<iostream>
using namespace std;

void getans(int arr[] , int n){
    int evencnt = 0;
        int oddcnt = 0;
        for(int i= 0; i < n ; i++){
            if(arr[i] % 2 == 0){
                evencnt++;
            }
            else{
                oddcnt++;
            }
        }
    if(evencnt <= 1 && oddcnt <= 1 ){
        cout << "No" << endl;
    }
    else if( evencnt >= 1 && oddcnt % 2 == 0){
        cout << "Yes" << endl;
    }
    else if(oddcnt % 2 == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No"<<endl;
    }

    
}


int main(){

    int t;
    while(t--){
        int n ;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
        }
        getans(arr , n);
    }
    return 0;
}
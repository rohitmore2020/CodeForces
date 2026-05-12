#include<iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    int n , k ;

    while(t--){
        cin >> n;
        cin >> k;
        int arr[n];
        for(int i =0 ; i < n ; i++){
            cin >> arr[i];
        }
        int check = 1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == k){
                check = 0;
                cout << "YES" << endl;
                break;
            }
        }
        if(check){
            cout << "NO" << endl;
        }
    }
}
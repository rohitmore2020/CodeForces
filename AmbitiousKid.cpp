#include<iostream>
using namespace std;

int getans(int n , int arr[]){
     int mini = INT_MAX;
    for(int i=0 ; i< n ; i++){
        mini = min( mini , abs(arr[i]));
    }
    return mini;
}

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0 ; i < N ; i++){
        cin >> arr[i];
    }
    cout << getans(N , arr) << endl; 
    return 0;
}
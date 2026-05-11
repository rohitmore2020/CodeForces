#include<iostream>
using namespace std;

string getans(int n , int arr[]){
   for(int i=1; i < n-1 ; i++){
    for(int j=1 ; j < n-1 ; j++){
        if(arr[j-1] < arr[j] && arr[j] > arr[j+1]){
            swap(arr[j+1] , arr[j]);
        }
    }
   }
   for(int i=0 ; i < n-1 ; i++){
    if(arr[i] > arr[i+1]){
        return "NO";
    }
   }
   return "YES";
}

int main(){
    int t;
    cin >> t;
    
    for(int i = 0; i < t ; i++){
        int n ;
        cin >> n;
        int arr[n];
        for(int j=0 ; j < n ; j++){
            int temp;
            cin >> temp;
            arr[j] = temp;
        }
        cout << getans( n , arr) << endl;
    }
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getans(vector<int>&arr ,int n , int x){
    int maxi = arr[0];
    for(int i =0 ; i < n-1; i++){
        maxi = max(maxi , arr[i+1]-arr[i]);
        
    }
    maxi = max(maxi , (x-arr[n-1])*2);
    return maxi;
}

int main(){
    int t ;
    cin >> t;
    int n , x ;
    
    for(int i=1 ; i <= t ; i++){

    cin >> n;
    cin >> x;
    vector<int>arr(n);

    for(int i = 0 ; i< n ; i++){
        cin >> arr[i];
    }

    cout <<  getans(arr , n , x) << endl;
    }
return 0;

}
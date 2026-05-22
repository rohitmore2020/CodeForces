#include<iostream>
#include<vector>
using namespace std;

void printseq(int arr[] , vector<int>&ans , int n ){

    for(int i=0 ; i < n-1 ; i++){
            if(arr[i] <= arr[i+1]){
                ans.push_back(arr[i]);
            }
            else{
                ans.push_back(arr[i]);
                ans.push_back(1);   
            }
        }
        ans.push_back(arr[n-1]);
        cout << ans.size() << endl;
        for(int i =0 ; i< ans.size() ; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >>n;
        int arr[n];
        for(int i=0 ; i < n ; i++){
            cin >> arr[i];
        }
        vector<int>ans;
        printseq(arr , ans , n);
    }
    return 0;
}
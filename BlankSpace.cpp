#include<iostream>
#include<vector>
using namespace std;

int getans(vector<int>&arr){
    int ans = 0;
    int cnt = 0;
    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i] == 0){
            cnt++;
        }
        else{
            ans = max(cnt , ans);
            cnt = 0;
        }
    }
    if(cnt != 0) ans = max(ans , cnt);
    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0; i < n ; i++){
            cin >> arr[i];
        }
        cout << getans(arr) << endl;
    }
    return 0;
}
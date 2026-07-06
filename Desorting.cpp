#include<iostream>
#include<vector>
using namespace std;

int getans(vector<int>&ans){
    int req = INT_MAX;

    for(int i=1 ; i < ans.size() ; i++){
        int diff = 0;
        if(ans[i-1] <= ans[i]){
            diff = (ans[i] - ans[i-1] )/2 + 1;
            req = min(req , diff); 
        }
        else{
            return 0;
        }
    }
    return req;
}

int main(){
int t;
cin >> t;

while(t--){

    int n;
    cin >> n;

    vector<int>arr(n , 0);
    for(int i=0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << getans(arr) << endl;

}
return 0;
}
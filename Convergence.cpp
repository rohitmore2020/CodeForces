#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getans(vector<int>arr){

    sort(arr.begin() , arr.end());

    int ans = 0;
    int left = 0;
    int right = arr.size()-1;
    int mid = left + (right -left )/2;
    while(left <= right){
        if(arr[left] == arr[mid] && arr[right] == arr[mid]){
            break;
        }
        else{
            ans++;
            left++;
            right--;
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0 ; i < n ; i++){
            cin >> arr[i];
        }
        cout << getans(arr) << endl;
    }

    return 0;
}
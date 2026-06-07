#include<iostream>
#include<vector>
using namespace std;

int getoperation(vector<int>arr){
    int numOfPos = 0 ;
    int numOfNeg = 0;

    for(int i=0 ; i < arr.size() ; i++){
        if(arr[i] == -1){
            numOfNeg++;
        }else{
            numOfPos++;
        }
    }
    int cnt = 0;
    while(numOfNeg % 2 != 0 || numOfNeg > numOfPos){
        numOfNeg--;
        numOfPos++;
        cnt++;
    }
    return cnt;
}

int main(){
    int t ;
    cin >> t;

    while(t--){
        int n ;
        cin >> n;
        vector<int>arr(n);
        for(int i=0 ; i < n ; i++){
            cin >> arr[i];
        }

        cout << getoperation(arr) << endl;
    }

    return 0;  
}
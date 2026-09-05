#include<iostream>
#include<vector>
#include<string>
using namespace std;

int getans(int n , int k , string s){
    int ans = 0;

    for(int i = 0 ; i < n/k ; i++){

        bool iszero = false;
        for(int j = i * k  ; j < i * k + k ; j++){
            if(s[j] == '0'){
                iszero = true;
                break;
            } 
        }

        if(!iszero){
            ans++;
        }
    }
    return ans;
    
} 

int main(){
    int t ;
    cin >> t;
    while(t--){

        int n ; 
        int k;
        cin >> n;
        cin >> k;
        string s;
        cin >> s;
        cout << getans(n , k , s) << endl;
    }
}
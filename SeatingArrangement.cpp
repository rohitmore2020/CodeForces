
#include<iostream>
using namespace std;

int getans(string arr , int n , int x , int s){

   vector<int>freq(x+1 ,0);
    int ans = n;
   for(int i=0 ; i < n ; i++){
    if(arr[i] == 'E'){
        bool check = true;
        for(int i=1 ; i<freq.size() ; i++){
            if(freq[i] >0 && freq[i] < s){
                freq[i]++;
                check = false;
                break;
            }
        }
        if(check){
            ans--;
        }
    }
    else if(arr[i] == 'I'){
        bool check = true;
        for(int i=1 ; i<freq.size() ; i++){
            if(freq[i]==0 ){
                freq[i]++;
                check = false;
                break;
            }
        }
        if(check){
            ans--;
        }
    }
    else{
        bool check = true;
        for(int i=1 ; i<freq.size() ; i++){
            if(freq[i] < s){
                freq[i]++;
                check = false;
                break;
            }
        }
        if(check){
            ans--;
        }
    }
   }
   return ans;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n , x , s ;

        cin >> n;
        cin >> x;
        cin >> s;

        string arr;
        cin >> arr;

        cout << getans(arr , n , x ,s) << endl;
    }
}
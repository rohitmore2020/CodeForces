#include<bits/stdc++.h>
using namespace std;

int getans(int c , vector<int>&a , vector<int>&b){
    int n = a.size();
    int ans = INT_MAX;
    int checkans1 = 0;
    for(int i= 0 ; i < n ; i++){
        if(a[i] - b[i] >= 0 ){
            checkans1+= (a[i]-b[i]);
        }
        else{
            checkans1 = -1;
            break;
        }
    }
    if(checkans1 != -1){
        ans = min(ans , checkans1);
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    int checkans2 = c;
    for(int i=0 ; i < n ; i++){
        if(a[i] - b[i] >= 0 ){
            checkans2+= (a[i]-b[i]);
        }
        else{
            checkans2 = -1;
            break;
        }
    }
    if(checkans2 !=-1){
        ans = min(ans , checkans2);
    }
    if(checkans2 == -1 && checkans2 == -1){
        return -1;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int c;
        cin >> n;
        cin >> c;
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0 ; i < n ; i++){
            cin >> a[i];
        }
        for(int i=0 ; i < n ; i++){
            cin >> b[i];
        }

        cout << getans(c , a , b) << "\n";

    }
}
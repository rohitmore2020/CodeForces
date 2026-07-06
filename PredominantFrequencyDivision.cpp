#include<iostream>
#include<vector>
using namespace std;

void getans(vector<int>&a){
    int part = 0;
    int cnt1 =0;
    int cnt2 =0;
    int cnt3 = 0;
    int ind = 0;
    int n = a.size();
    while(ind < n){
        if(a[ind] == 1){
            cnt1++;
        }
        else if(a[ind] == 2){
            cnt2++;
        }
        else{
            cnt3++;
        }
        if(cnt2 + cnt3 <= cnt1){
            part++;
            ind++;
            while(ind < n && a[ind] == 3 && (cnt2 + cnt3 ) <= cnt1){
                cnt3++;
                ind++;
            }
            cnt2 = 0; 
            cnt1 =0;
            cnt3 = 0;
            break;
        }
        ind++;
    }
    while(ind < n){
        if(a[ind] == 1){
            cnt1++;
        }
        else if(a[ind] == 2){
            cnt2++;
        }
        else{
            cnt3++;
        }
        if(cnt1 + cnt2 >= cnt3){
            part++;
            cnt2 = 0; 
            cnt1 =0;
            cnt3 = 0;
            ind++;
            break;
        }
        ind++;
    }
    if(part == 2 && ind < n ){ 
    cout << "YES"<< endl; 
    }
    else{
    cout << "NO" << endl;
    }
    return ;
}

int main(){
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int>a(n , 0 );
        for(int i=0 ; i < n ; i++){
            cin >> a[i];
        }
        getans(a);
    }
}
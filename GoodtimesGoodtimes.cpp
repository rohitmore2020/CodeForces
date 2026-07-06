#include<iostream>
#include<set>
using namespace std;

vector<int>v;

bool isgood(long long num){
    set<int>st;
    while(num >0){
        if(st.size() > 2) return false;
        st.insert(num%10);
        num/=10;
    }
    return true;
}

void getallgoods(vector<int>&v){
    for(int i=2 ; i < 1000000000 ; i++){
        if(isgood(i)){
            v.push_back(i);
        }
    }
}

int gety(int x){
    for(int i=0 ; i < v.size() ; i++ ){
        long long check=1;
        check = x * v[i];
        if(isgood(check)){
            return v[i];
        }
    }
    return -1;
}

int main(){
    getallgoods(v);
    int t ;
    cin >> t;

    while(t--){
        int x ;
        cin >> x;
        cout << gety(x) << endl;
    }
    return 0;
}
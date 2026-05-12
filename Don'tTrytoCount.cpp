#include<iostream>
using namespace std;

int getans(string &x , string &s ){
    int ans =0;
    for(int i =0 ; i < 5 ; i++){
       if(x.size() >= s.size()){
            for(int j = 0; j <= x.size() - s.size(); j++){
                if(x.substr(j, s.size()) == s){
                    return ans;
                }
            }
        }
        x =x+x;
        ans++;
    }

    if(x.size() >= s.size()){
            for(int j = 0; j <= x.size() - s.size(); j++){
                if(x.substr(j, s.size()) == s){
                    return ans;
                }
            }
        }

  return -1;
}

int main(){
    int t;
    int n;
    cin >> t;
    for(int i=0 ; i< t ; i++){
        int n , m;
        cin >> n;
        cin >> m;

        string x;
        string s;

        cin >> x >> s;

        cout << getans(x , s ) << endl ;

    }
}
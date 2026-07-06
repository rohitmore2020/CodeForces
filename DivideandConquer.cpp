#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x ,y;
        cin >> x;
        cin >> y;
        if(x % y == 0 ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
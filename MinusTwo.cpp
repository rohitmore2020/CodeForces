#include<iostream>
#include<vector>
#include<string>
#include<map>
#include <cstdlib>
using namespace std;

int getans(vector<int>&a){

    int odd = 0;
    int even0s = 0;
    int even2s = 0;

    for (auto it : a ) {
        if (it % 2 == 1) {
            odd++;
        }
        else if (it % 4 == 0) {
            even0s++;
        }
        else {
            even2s++;
        }
    }
    return max(odd, max(even0s, even2s));
}


int main(){
    int t ;
    cin >> t;
    while(t--){

        int n ; 
        cin >> n;
        vector<int>a(n , 0);
        for(int i= 0 ; i < n ; i++){
            cin >> a[i];
        }
        cout << getans(a) << endl;
    }
}
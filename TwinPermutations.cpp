#include<iostream>
#include<vector>
using namespace std;

void gettwin(vector<int>&a){
    int n = a.size();
    vector<int>b(n);
    for(int i = 0 ; i < n ; i++ ){
        b[i] = (n+1) - a[i];
        cout << b[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>a(n);
        for(int i=0 ; i< n ; i++){
            cin >> a[i];
        }

        gettwin(a);

    }
    return 0;
}
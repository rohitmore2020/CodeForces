#include<iostream>
using namespace std;

string getans(int n){
    if((n-1)%3 == 0 || (n+1) % 3 == 0){
        return "First";
    }
    return "Second";
}

int main(){
    int t;
    int n;
    cin >> t;
    for(int i=0 ; i< t ; i++){
        cin >> n ;
        cout << getans(n) << endl;
    }
}
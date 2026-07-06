#include<iostream>
using namespace std;

int getans(string s , int n ){
   
        int transitions = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                transitions++;
        }
        int minwf;
        if (transitions == 0)
            minwf = 1;
        else if (transitions == 1)
            minwf = 2;
        else
            minwf = 1;

        cout << minwf << '\n';

}


int main(){
    int t;
    cin >> t;

    while(t--){
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n ; i++) {
        char ch;
        cin >> ch;
        s.push_back(ch);
    }
    cout << getans(s , n) << endl;
    }
    return 0;
}
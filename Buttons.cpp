#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long  a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        
        if (c % 2 == 1) 
        {
            if (b > a) 
                cout << "Second" << endl; 
            else
                cout << "First" << endl; 
        }
        else // even
        {
           
            if (a > b) 
                cout << "First" << endl; 
            else
                cout << "Second" << endl; 
        }
    }
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

void getans(int k , vector<int>&c){
    if(k == 1 && c[0] <= 2){ cout << "NO" << endl; 
    return ;
    }   
    int cnt2 = 0;

    for(int i=0 ; i < k ; i++){
        if(c[i] >= 3 ){
            cout << "YES" << endl;
            return;
        }
        else if(c[i] == 2){
            cnt2++;
        }
        if(cnt2 >= 2 ){cout<< "YES" << endl ; 
            return ;
        }
    }
    cout << "NO" << endl ;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){

        int k;
        cin >> k;

        vector<int>c(k , 0);

        for(int i = 0; i <  k ; i++){
            cin >> c[i];
        }

        getans( k , c);

    }
    return 0;
}
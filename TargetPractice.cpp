#include<iostream>
using namespace std;

int getpoint(int row , int column){
    if((row == 0 || row == 9) && (column >= 0 || column <= 9) || (column == 0 || column == 9) && (row >= 0 || row <= 9) ){
        return 1;
    }
    else if((row == 1 || row == 8) && (column >= 1 || column <= 8) || (column == 1 || column == 8) && (row >= 1 || row <= 8) ){
        return 2;
    }
    else if((row == 2 || row == 7) && (column >=2 || column <= 7) || (column == 2 || column == 7) && (row >= 2 || row <= 7) ){
        return 3;
    }
    else if((row == 3 || row == 6) && (column >= 3 || column <= 6)|| (column == 3 || column == 6) && (row >= 3 || row <= 6) ){
        return 4;
    }
    else if((row == 4 || row == 5) && (column >= 4 || column <= 5)|| (column == 4 || column == 5) && (row >= 4 || row <= 5)  ){
        return 5;
    }
    return 0;
}

int getans(char ch[][10]){
    int ans= 0;
    for(int i=0 ; i < 10 ; i++){
        for(int j=0 ; j< 10 ; j++){
            if(ch[i][j] == 'X'){
               ans += getpoint( i , j);
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        char ch[10][10];
        for(int i=0 ; i<10 ; i++){
            for(int j=0 ; j < 10 ; j++){
                cin >> ch[i][j];
            }
        }
        cout << getans(ch) << endl; 
    }
}
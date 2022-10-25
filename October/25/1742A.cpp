#include <bits/stdc++.h>

using namespace std;

bool checka(int a, int b, int c);

void solve(int a, int b, int c){

    if(checka(a,b,c) or checka(b,c,a) or checka(c,a, b)){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

}

bool checka(int a, int b, int c){
    if(a == (b + c)){
        return true;
    } else{
        return false;
    }
}

int main(){
    int n; cin >>n;
    int k[n][3];

    for(int i = 0; i < n; i++){
        cin >> k[i][0] >> k[i][1] >> k[i][2];
    }
    
    for(int i = 0; i < n; i++){
        solve(k[i][0], k[i][1], k[i][2]);
    }
}
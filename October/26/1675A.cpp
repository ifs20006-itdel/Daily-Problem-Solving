#include <bits/stdc++.h>

using namespace std;

void solve(int arr[]){
    int size = *(&arr + 1) - arr;
    int anjingMakan = arr[0] - arr[3];
    int kucingMakan = arr[1] - arr[4];
    int sisaMakan = arr[2];
    if(anjingMakan <0){
        int temp = sisaMakan;
        sisaMakan += anjingMakan;
        anjingMakan += temp;
        
    } 
    if(kucingMakan <0){
        int temp = sisaMakan;
        sisaMakan += kucingMakan;
        kucingMakan += temp;
    }
    if((anjingMakan < 0) or (kucingMakan < 0)){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
    }
    
}

int main(){
    int n; cin >> n;
    int a, b, c, x, y;
    int arr[n][5];

    for(int i =0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    for(int i =0; i < n; i++){
        solve(arr[i]);
    }

}
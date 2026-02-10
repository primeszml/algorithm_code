//
// Created by 35395 on 2026/2/10.
//
#include<bits/stdc++.h>

using namespace std;

signed main(){
    cout << fixed << setprecision(6);
    int x, n;
    while(cin >> x >> n) {
        double y = x;
        while(n--) {
            y = y*2/3 + x/(3*y*y);
        }
        cout << y << '\n';
    }
}
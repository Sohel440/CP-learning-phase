#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define fore(i, x, n) for (int i = x; i <= n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>

int SetBit (int n, int X) { return n | (1 << X); }
int ClearBit (int n, int X) { return n & ~(1 << X); }
int ToggleBit (int n, int X) { return n ^ (1 << X); }
bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }
int row[] = {1,0,-1,0};
int col[] = {0,1,0,-1};
const int mod = 1e9 + 7;

int  moduo_korlam(int a , int b){
    
   int res = 1;

    while( b > 0 ){

        if(b & 1){
            res = res * a;

        }
        a = a*a;

        b = b>> 1;

    }
    return res;

}
bool solve(int mid , vector<int> &a , int c){
int total =0;
    forn(i,0,a.size()){
        

        int side = (2LL* mid) + a[i];
        int area = side * side;

        total +=area;
        if(total > c){
           return false;
        }
    }

    return true;
}
void kaj() {
    int n , k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    if(k % 2 == 0 ) {
        sort(all(s));
        cout << s << endl;
        return ;

    }

    vector<char> odd , ev;
    forn(i, 0 , n){
        if(i % 2 == 0){
            ev.push_back(s[i]);
        }
        else{
            odd.push_back(s[i]);

        }
    }

    sort(all(odd));
    sort(all(ev));
    
    string ans ="";
    int so = odd.size();
    int se = odd.size();
    int e =0, o =0;
    forn(i, 0,n){

        if(i % 2 == 0){
            cout << ev[e++];
        }else{
            cout << odd[o++];
        }
    }

    

    cout << ans << endl;
}

int32_t main() {
    int t;
    cin >> t;
    while(t--) 
        kaj();


    return 0;
}

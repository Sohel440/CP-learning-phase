//C. Assembly via Minimums
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
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
int row[] = {1,0,-1,0};
int col[] = {0,1,0,-1};
const int mod = 1e9 + 7;
std::unordered_set<char> u = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

   std::unordered_set<char> l = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

   char B = 'B';
   char b = 'b';

void kaj() {
    
    int n;
    cin >> n;
    string arr[n];
    forn(i,0,n) cin >> arr[i];
    int ans =0;

    forn(i,0 ,n/2){
        forn(j , 0 , n/2){

            char a[4] ={arr[i][j] , arr[j][n-i-1] , arr[n-i-1][n-j-1], arr[n-j-1][i] };

            int mx = max({arr[i][j] , arr[j][n-i-1] , arr[n-i-1][n-j-1], arr[n-j-1][i]});
            
            forn(p,0,4){
                ans += mx - a[p];
            }
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

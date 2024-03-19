
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define endl "\n"
#define vi vector<int>
#define pii pair<int,int>
#define sz(x) ((int) x.size())
#define all(p) p.begin(), p.end()
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl
#define rep(i, l, r) for(int i = l; i<r; i++)
#define vvi vector<vector<int>>
#define INF LLONG_MAX
#define ff first
#define ss second
#define print(a) for(auto x : a) cout << x << " "; cout << endl
#define ppb pop_back
#define float double
#define double long double
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main(){
    fastio();
    
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int val;
        string temp1;
        if (n == 1) cout << 8 << endl;

        else{
            if (n >= 3)
                temp1 = s.substr(n-3, 3);
            else
                temp1 = s;
            if (n>=3)
                val = stoll(temp1);
            else
                val = stoll(s);
            if (val % 8 == 0){  
                cout << s << endl;
            }

            else{
                int rem = val % 8;

                if (val % 10 >= rem){
                
                  val -= rem;
                }

                else{
                    val += 8-rem;
                }
                // val = val -rem;

                string str = "";
                if (n>=3){
                    str += s.substr(0, n-3);
                    cout <<"s.substr(0, n-3)" <<s.substr(0, n-3) << endl;
                }
                string temp = to_string(val);
                reverse(all(temp));
                while (temp.size() != temp1.size()){
                    temp += '0';
                }
                cout << "temp: " << temp << endl;
                reverse(all(temp));
                cout << " str " << str << endl;
                str += temp;
                cout << str << endl;
            }
        }
    }

    return 0;
}



/*
int n ;
cin >> n;

string s;
cin >> s;

string temp1 = s.substr(0 , n-3);

ll val = stoLL(temp1);
if( n== 1)cout << 8 << endl; 
if(val % 8 == 0) cout << s << endl;
else{
    
    int rem= val % 8;
    if( val % 10 >= rem){
         val -= rem;
    }else{
       val = 8 - rem;

    }

    string t = to_string (val);


}
*/
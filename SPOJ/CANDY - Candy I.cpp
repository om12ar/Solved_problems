#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
#define mgi(_z) int _z ; cin>>_z
#define mgs(_S) string _S ; cin>>_S
#define mgd(_D) string _D ; cin>>_D
#define mp make_pair
#define pb push_back
#define rep(i,n) for(int i = 0; i < (n) ; i++)
#define repo(i,n) for(int i = 1; i <= (n); i++)
#define For(i,x,n) for( int (i)=(x) ; (i)<(n) ; (i)++ )
#define Foro(i,x,n) for(int (i)=(x) ; (i)<=(n) ; (i)++ )
#define re return
#define fi first
#define se second
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define SQ(x) ((x)*(x))
#define Fill(_x,_v){rep(i,_x)cin>>_v[i];}
#define Show(_i,_x,_V) rep(_i,_x){cout<<_V[_i];}
#define Show2d(i,j,x,y,V) rep(i,x) {Show(j,y,V[i]) ; cout<<endl;}
typedef stringstream SS;
typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef vector<string> vs;
typedef vector<vi> vvi;
const int OO = (int) 2e9;
const double eps = 1e-9;
inline int stoi(string s) {SS ss;int x;ss << s;ss >> x;re x;}
inline string itos(int s) {SS ss;string x;ss << s;ss >> x;re x;}
#include <bits/stdc++.h>


using namespace std;



int main()
{

    int x;
    while(cin>>x && x != -1){
        vector<int>  v(x);
        Fill(x,v);
        int a = accumulate(all(v) ,0) ;
        if(a%x){
            cout<<-1<<endl;
            continue;
        }
        a/=x;
        int d =0;
        rep(i,x){
            if(v[i] > a){
                d+=v[i]-a;
            }
        }
        cout<<d<<endl;

    }

    return 0;
}

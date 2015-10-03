#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
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
#define Fill2d(_x,_y,_v){rep(_i,_x)rep(_j,_y)cin>>_v[_i][_j];}
#define Show(_i,_x,_V) rep(_i,_x){cout<<_V[_i]<<" ";}
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
//inline ull stoi(string s) { SS ss; ull x; ss << s; ss >> x; re x; }
//inline string itos(int s) { SS ss; string x; ss << s; ss >> x; re x; }

char a[8][8];
bool vis[8][8];
int n ,c=0,cur=0,dx=0,dy=0;

set<vector<pair<int,int> > > save ;
void f(int i , int j ,int cur, vii temp){
	if(i>=n || j>=n || i<0 || j<0 || a[i][j]!='X' || vis[i][j])
		re;
	temp.push_back(mp(i,j));
	cur++;

	if(cur==8){
		sort(all(temp));
		save.insert(temp);
		re ;
	}
	vis[i][j]=1;
	f(i,j+1,cur,temp);
	f(i,j-1,cur,temp);
	f(i+1,j,cur,temp);
	f(i-1,j,cur,temp);
	vis[i][j]=0;
}

int main() {
	mgi(t);
	while(t--){
		save.clear();
		rep(i,8)
			memset(vis,0,sizeof vis);
		c=0;
		cur=0;
		cin>>n;
		string s;
		rep(i,n){
			cin>>s;
			rep(j,n){
				a[i][j]=s[j];
			}
		}
		vii v;
		rep(i,n){
			rep(j,n){
				f(i,j,0,v);
			}
		}
		cout<<sz(save)<<endl;;
	}
}



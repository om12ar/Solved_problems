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
inline int stoi(string s) { SS ss; int x; ss << s; ss >> x; re x; }
inline string itos(int s) { SS ss; string x; ss << s; ss >> x; re x; }

int ed (string s1, string s2) {
	int len1 = s1.size(), len2 = s2.size();
	vvi d(len1 + 1, vi (len2 + 1));
	d[0][0] = 0;
	repo(i,len1) d[i][0] = i;
	repo(i,len2) d[0][i] = i;

	repo(i,len1)
		repo(j,len2){
		  d[i][j] = min( min(d[i-1][j]+1 , d[i][j-1]+1)
				  ,
				  d[i-1][j-1] + (s1[i-1]==s2[j-1] ? 0 : 1) );
	}

	return d[len1][len2];
}
int main() {
	mgi(t);
	while(t--){
		mgs(s1);mgs(s2);
		cout<<ed(s1,s2)<<endl;
	}
	return 0;
}

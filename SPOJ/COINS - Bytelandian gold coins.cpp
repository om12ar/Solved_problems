#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

map<long long, long long> m;

long long int DP(long long int n)
{
    long long int a;
    if(n==0)
        return 0;

    if(m[n] !=0 )
        return m[n];

    m[n] = max(DP(n/2)+DP(n/3)+DP(n/4) , n);
    return m[n];
}


int main()
{
    long long int n;
    while(cin >>n)
    {
        m.clear();
      cout<<DP(n)<<endl;
    }
    return 0;
}

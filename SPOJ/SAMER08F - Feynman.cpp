#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;



int main()
{
    long long x;

    while(cin>>x && x > 0){
        //cout<<(long long ) ((x*x*x)/3) + ((x*x)/2) + (x/6) + 1<<endl;

        cout<<(long long ) (x*(x+1)*(2*x+1))/6<<endl;
    }
    return 0;
}

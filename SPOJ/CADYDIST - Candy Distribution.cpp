#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(0);
    vector <unsigned long long> can,pri;
    unsigned long long  n,x;
	while (cin>>n){
	    pri.clear();
        can.clear();
        if(n==0)
        return 0;
        for(unsigned long long i=0;i<n;i++){
            cin>>x;
            pri.push_back(x);
        }
        for(unsigned long long i=0;i<n;i++){
            cin>>x;
            can.push_back(x);
        }
        sort(can.begin(),can.end());
        sort(pri.rbegin(),pri.rend());

        unsigned long long sum=0;
        for(unsigned long long i=0;i<n;i++){
            sum+=(pri[i]*can[i]);
        }
        cout<<sum<<endl;

      }
    return 0;
}

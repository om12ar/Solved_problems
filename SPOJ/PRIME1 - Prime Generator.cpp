#include <bits/stdc++.h>

using namespace std;


bool s [1000000001];


void segmentedSeiv(int low, int high){

	int mx = sqrt(high);

	for (int i = 2; i <= mx; i++){
		if (!s[i]){
			for (int j = low - low%i; j <= high; j += i)
				if (j>=low && !s[j] && j!=i)
					s[j] = 1;
		}
	}

}

int main(){

	int  t ;
	cin>>t;
//	si();
	while(t--){
		int st ,fn ;

		cin>>st>>fn;

        st = (st>2) ? st : 2 ;

        segmentedSeiv(st,fn);
        for(int i =st ;i <=fn ; i++ ){
            if(!s[i]){
                cout<<i<<endl;
            }
        }
        if(t)
            cout<<endl;
	}

}

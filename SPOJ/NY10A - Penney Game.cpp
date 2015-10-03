#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin>>n;
    for(int j=1;j<=n;j++)
    {       int q;
            cin>>q;
            int TTT=0,TTH=0,THT=0,THH=0,HTT=0,HTH=0,HHT=0,HHH=0;
            string s,tt="TTT";
            cin>>s;

            for(int i=0;i<s.length();i++)
        {
            if((s[i]=='T')&&(s[i+1]=='T')&&(s[i+2]=='T'))
                TTT++;
            if((s[i]=='T')&&(s[i+1]=='T')&&(s[i+2]=='H'))
                TTH++;
            if((s[i]=='T')&&(s[i+1]=='H')&&(s[i+2]=='T'))
                THT++;
            if((s[i]=='T')&&(s[i+1]=='H')&&(s[i+2]=='H'))
                THH++;
            if((s[i]=='H')&&(s[i+1]=='T')&&(s[i+2]=='T'))
                HTT++;
            if((s[i]=='H')&&(s[i+1]=='T')&&(s[i+2]=='H'))
                HTH++;
            if((s[i]=='H')&&(s[i+1]=='H')&&(s[i+2]=='T'))
                HHT++;
            if((s[i]=='H')&&(s[i+1]=='H')&&(s[i+2]=='H'))
                HHH++;

        }
        cout<<j<<" "<<TTT<<" "<<TTH<<" "<<THT<<" "<<THH<<" "<<HTT<<" "<<HTH<<" "<<HHT<<" "<<HHH<<endl;
    }
	return 0;
}

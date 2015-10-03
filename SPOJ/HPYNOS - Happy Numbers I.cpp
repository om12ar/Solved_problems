#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int s , s2=0,c=0,t=0;
	cin>>s;
	while(t<1000)
    {
        s2=0;
		while(s>0)
        {
            s2+=(s%10)*(s%10);
            s/=10;
        }
        s=s2;
        c++;
        if((s==1)||(s==10)||(s==100)||(s==1000)||(s==10000)||(s==100000)||(s==1000000))
        {
            cout<<c+1;
            return 0;
        }
        t++;

    }
    cout<<-1;


	return 0;
}

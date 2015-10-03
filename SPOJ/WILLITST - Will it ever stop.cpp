#include <iostream>

using namespace std;

int main()
{
    long long n,b=0;
    bool t=0;
    cin>>n;
    while(n>1)
    {
        if(b>1000)
           {
               t=0;
                break;
           }
        if(n%2==0)
           {
            n/=2;
            t=1;
           }
        else
           {
            n=3*n+3;
            t=0;
           }
        b++;

    }
    if (t==1)
    cout<<"TAK";
    else
        cout<<"NIE";



    return 0;
}

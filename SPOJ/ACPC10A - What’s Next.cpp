#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;



int main()
{
    int x , y , z ;

    while(cin>>x>>y>>z){
            if(x==0 &&y==0&&z==0)
                break;
        if(z-y == y-x){
            cout<<"AP "<<z+(z-y)<<endl;
        }
        else if (z/y == y/x ){
            cout<<"GP "<<z*(z/y)<<endl;
        }

    }
    return 0;
}

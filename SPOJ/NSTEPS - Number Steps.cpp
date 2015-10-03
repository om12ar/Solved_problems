#include <iostream>

using namespace std;

int main()
{	int n,x,y;
   cin>>n;
   for(n;n>0;n--)
   {    cin>>x>>y;
        if((((x%2)&&(y%2))||(!(x%2)&&!(y%2)))&&((x-y==2)||(x-y==0)))
        {
            if(!(x%2))
            cout<<x+y<<endl;
            else
            cout<<x+y-1<<endl;
        }
        else
         cout<<"No Number"<<endl;

   }


    return 0;
}

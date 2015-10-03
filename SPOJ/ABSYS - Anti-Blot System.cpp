#include <iostream>
#include <numeric>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <memory>
#include <string>
#include <vector>
#include <cctype>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iomanip>

using namespace std;


int main()
{
    int x;
    cin>>x;
    while(x--){
        string s1,s2,s3;
    cin>>s1;
    cin.ignore();
    cin.ignore();
    cin>>s2;
    cin.ignore();
    cin.ignore();
    cin>>s3;

    int fs1= s1.find("machula");
    int fs2= s2.find("machula");
    int fs3= s3.find("machula");

    if(fs3!=-1){
        stringstream ss,sss;
        int n1,n2;
        ss<<s1;
        ss>>n1;
        sss<<s2;
        sss>>n2;
        cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
    }
    else if (fs1!=-1){
        stringstream ss,sss;
        int n3,n2;
        ss<<s3;
        ss>>n3;
        sss<<s2;
        sss>>n2;
        cout<<n3-n2<<" + "<<n2<<" = "<<s3<<endl;
    }
    else if (fs2!=-1){
        stringstream ss,sss;
        int n1,n3;
        ss<<s1;
        ss>>n1;
        sss<<s3;
        sss>>n3;
        cout<<s1<<" + "<<n3-n1<<" = "<<n3<<endl;
    }
    }

  return 0;

}

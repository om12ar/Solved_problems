#include <iostream>
using namespace std;
int main() {
    long long x , y , z ;
    char op ;
    cin >> z ;
    for ( int i=0 ; i < z ; i++ ){

    cin >> x ;
    cin >> op ;
       while ( op != '=' ){

          cin >> y ;
          if ( op == '+' )
          x+=y ;

          if ( op == '-' )
          x-=y ;

          if ( op == '*' )
          x*=y  ;

          if ( op == '/' )
          x/=y ;
          cin >> op ;
          }
          cout << x<<endl ;

}
return 0;
}

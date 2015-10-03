

#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;
int main()
{

	int t;
	cin >> t;
	while (t--){
		stack <char> op ;
		string out = "";
		string s;
		cin>> s;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '(' || s[i] == '+' || s[i] == '*' || s[i] == '-' || s[i] == '/' || s[i] == '^'){
				op.push(s[i]);
			}
			else if (isalpha(s[i])){
				out+=s[i];
			}
			else if (s[i] == ')'){
				while (!op.empty()){
					if (op.top() == '('){
						op.pop();
						break;
					}
					else{
						out+=op.top();
						op.pop();
					}

				}
			}


		}
		while (!op.empty()){
			out+=op.top();
			op.pop();
		}

		cout<<out<<endl;

	}


	return 0;
}

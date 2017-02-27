#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){

string ch;
stack<char> s;
char c;
int f=0;
cout<<"Enter the expression";
cin>>ch;


for(int i=0;i<ch.length();i++){
if(ch[i] == '(')
	s.push(')');
else if(ch[i] == '{')
	s.push('}');
else if(ch[i] == '[')
	s.push(']');
else if(ch[i] == ')' || ch[i] == '}' || ch[i] == ']'){
	if(!s.empty())	
		{c = s.top();s.pop();}
	else{f=1;break;}
	if(c != ch[i] )
		{f=1;
		break;}
				}
}

if( f==0 && s.empty())
cout<<"Expression is balanced";
else
cout<<"Expression is not balanced";

return 0;
}

#include<iostream>
#include<string>
using namespace std;

char array[100];
int top = -1;
void push(char n){
if(top == 99)
cout<<"Array IS Full";
else
array[++top]=n;
};

char pop(){
if(top == -1)
return '$';
else
return array[top--];
};

int main(){

string ch;
char c;
int f=0;
cout<<"Enter the expression";
cin>>ch;


for(int i=0;i<ch.length();i++){
if(ch[i] == '(')
	push(')');
else if(ch[i] == '{')
	push('}');
else if(ch[i] == '[')
	push(']');
else if(ch[i] == ')' || ch[i] == '}' || ch[i] == ']'){
	c = pop();

	if(c != ch[i] )
		{f=1;
		break;}
				}
}

if( f==0 && top == -1)
cout<<"Expression is balanced";
else
cout<<"Expression is not balanced";

return 0;
}

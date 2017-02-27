#include<iostream>
using namespace std;

int main(){
int num,rem=0;

cout<<"Enter the number";
cin>>num;
int m=num,div;
while(m>0)
{
div = m%10;
rem = rem*10 + div;
m = m/10;

};

if(num==rem)
cout<<"YES";
else
cout<<"NO";
return 0;
}

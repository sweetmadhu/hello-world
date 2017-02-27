#include<iostream>
using namespace std;

int maximum(int a, int b){
if(a>b)
return a;
return b;
}
int main(){

int n1,n2,c = 1;
cout<<"Enter the two numbers";
cin>>n1>>n2;
int maxnum = maximum(n1,n2),minmum;
if(maxnum == n1)
minmum = n2;
else
minmum = n1;
n1 = maxnum;
while(c < minmum){
if(c+c <= minmum)
{maxnum = maxnum+maxnum;
c+= c;
}
else
{maxnum+=n1;
c++;
}

}
cout<<"\n"<<maxnum;
return 0;
}

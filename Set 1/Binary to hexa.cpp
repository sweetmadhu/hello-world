#include <iostream>
#include <map>
#include <string>
#include <bitset>
using  namespace std;
map<int,string> hashtable;
void generateHashTable()
{   string s;
    int binary;
    for(int i=0;i<16;i++)
    {   s.clear();
        switch(i)
        { case 10: {s="A"; break;}
          case 11: {s="B"; break;}
          case 12: {s="C"; break;}
          case 13: {s="D";break;}
          case 14: {s="E";break;}
          case 15: {s="F";break;}
          default:{s=to_string(i);}
        }
        hashtable[i]=s;
    } 
}

int main()
{ int num=11111111,digit,s=0,binary;
  string final,str; 
  generateHashTable(); //constant space
                     
 //number of digits 
  while(num>0)
  { digit=4;
    str.clear();
    while(digit!=0)
     {s=num % 10;
      num=num/10;
      digit--;
      str=to_string(s) +str;      
      }
      binary = bitset<10>(str).to_ulong(); //to decimal
    // if(hashtable[binary])
     { final=hashtable[binary] + final;}
   }
 cout<<final<<"\n";
 
    return 0;
}
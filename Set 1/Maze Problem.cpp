#include <iostream>
using namespace std;

bool ispath(int maze[][4],int sx ,int sy ,int mazes[][4])
{ static int onetime=2;

    if(maze[sx][sy]==2)
     { for(int i=0;i<4;i++)
       {
        for(int j=0;j<4;j++)
        {
            cout<<maze[i][j]<<" ";
        }
        cout<<endl;
    }
    return true;
     }
else 
 { if(maze[sx][sy]==1 && onetime==2)
   { 
     onetime=1;
     
  }
   
  if(sx>=0 && sx<=3 && sy>=0 && sy<=3 && maze[sx][sy]==3 || onetime)
   {  maze[sx][sy]=9;
      if(onetime==1) onetime=0;
      if(ispath(maze,sx +1 ,sy,mazes)==true)
                 return true;
      if(ispath(maze,sx -1 ,sy,mazes)==true)
                 return true;
                 
       if(ispath(maze,sx ,sy + 1,mazes )==true)
           return true;
       if(ispath(maze,sx ,sy -1,mazes )==true)
              return true;
       maze[sx][sy]=3;  
       return false;
           
    }
}
return false;

}

int main()
{
    int maze[][4]={ {3,3,3,3},{3,0,1,3},{3,0,0,0,},{3,3,3,2}};
    int mazes[][4]={ {-1,-1,-1,-1},{-1,-1,-1,-1},{-1,-1,-1,-1,},{-1,-1,-1,-1}};
    bool p = ispath(maze,1,2,mazes);
    
    if(p)
        cout<<"Exist"<<endl;
    else
    cout<<"Dont exist"<<endl;
    return 0;
    
}
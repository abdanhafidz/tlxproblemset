
#include <bits/stdc++.h>
using namespace std;
int main()
{
string command;
 int asshiap,x,y;
 cin>>command;
asshiap = command.length();
x=0;
y=0;

    for(int i=0;i<=asshiap;i++){
        if(command[i]=='R'){
            x=x+1;
            y=y;
            
        }else if(command[i]=='L'){             
            x = x-1;
            y = y;
            
        }else if(command[i]=='U'){
            x = x;
            y = y+1;
            
        }else if(command[i]=='D'){
            x = x;
            y = y-1;
        }
    }
    cout<<x<<" "<<y<<endl;
}

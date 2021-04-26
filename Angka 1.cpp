#include <bits/stdc++.h>
using namespace std;

int main(){
   int n,j;
   j=0;
 cin>>n;

 if(n>=1 && n<=50000){
  if(n==1){
        cout<<1;
    }else{
      
for(int i=1;i<=n;i++){
    if(i==1){
        cout<<1<<endl;
        j=1;
    }else{
   j=j+i;
   
   cout<<j<<endl;
    }
}
}
}
}

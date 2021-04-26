#include <bits/stdc++.h>

using namespace std;


int f(int x, int y){
    if(y==0){
        return 1;
    }else{
        int ashiap = pow(x,(f(x,y-1)));
        
        return ashiap;
    }
}
int main(){
    int A,B,M,biasalah;
    cin>>A;
    cin>>B;
    cin>>M;
    
    biasalah = f(A,B)%M;
    
    cout<<biasalah;
}
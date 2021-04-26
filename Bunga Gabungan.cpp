
#include <bits/stdc++.h>
using namespace std;
int main()
{
int P,Q,H1,H2,H3,jum ;
cin>>P;
cin>>Q;
H1 = P*P;
H2 = Q*Q;
H3 = 1;
jum = H1+H2+H3;

if(jum%4 == 0){
    cout<<jum/4;
}else{
    cout<<"-1";
}

}

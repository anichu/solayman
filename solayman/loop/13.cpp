#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int n,r;
    cin>>n>>r;
    int up = fact(n);

    int down = fact(n-r)*fact(r);

    int ans  = up/down;

    cout<<ans<<endl;

    return 0;
}

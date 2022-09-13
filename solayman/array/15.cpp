#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int hash[10010] = {0};
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hash[a[i]] = 1;
    }
     int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
        hash[b[i]]=1;
    }

    for(int i=0;i<10010;i++){
        if(hash[i]==1){
            cout<<i<<" ";
        }
    }

    return 0;
}

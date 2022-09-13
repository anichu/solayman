#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int hash[10000] = {0};
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
    }
    int ans[n];
    int index = 0;
    for(int i=0;i<m;i++){
        if(hash[b[i]]==1){
                ans[index++] = b[i];
                hash[b[i]] = 0;
        }
    }

    if(index){
        for(int i=0;i<index;i++){
        cout<<ans[i]<<" ";
       }
    }else{
        cout<<"Empty set";
    }
    return 0;
}

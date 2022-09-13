#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int  temp[n],index = 0,x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            temp[index++] = i;
        }
    }

    if(index){
            cout<<"FOUND at index position: ";
        for(int i=0;i<index;i++){
            cout<<temp[i];
            if(i!=index-1){
                cout<<",";
            }
        }
    }else{
    cout<<"Not Found"<<endl;
    }

    return 0;
}

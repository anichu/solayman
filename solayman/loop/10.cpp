#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int sum = 0;
    int index = 0;
    int iterate = 1;
    while(index<n){
        if(iterate%2 == 0){
            sum-=iterate;
        } else{
            sum+=iterate;
        }
        iterate++;
        index++;
    }
    cout<<"Result:" <<sum<<endl;


    return 0;
}

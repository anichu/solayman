#include <bits/stdc++.h>
using namespace std;
int main(){
    int index = 1;
    while(true){
        char ch;
        cin>>ch;
        if(ch=='A'){
            break;
        }
        cout<<"Input "<<index<<": "<<ch<<endl;
        index++;
    }
    return 0;
}

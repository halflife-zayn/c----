#include<bits/stdc++.h>
using namespace std;
priority_queue<int>  pq;
int main(){
    int q;
    cin>>q;
    while(q--){
        int op;
        cin>>op;
        if(op==1){
            int x;
            cin>>x;
            x=-x;
            pq.push(x);
        }
        else if(op==2){
            cout<<-pq.top()<<endl;
        }
        else if(op==3){
            pq.pop();
        }
    }
}
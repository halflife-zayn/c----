#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    string b;
    int c;
    cin>>b>>c;
    int len=b.size();
    cout<<len<<" ";
    c=c%len;
    bool ling=false;
    for(int i=0;i<len;i++) {
        if(b[(i-c+len)%len]!='0')ling=true;
        if(ling)cout<<b[(i-c+len)%len];
    }
    
    return 0;
}*/

/*int sushu(int a){
    int b=sqrt(a);
    for(int i=2;i<=b;i++){
        if(a%i==0)return -1;
    }
    return a;

}
int main(){
    int count=0;
    for(int i=101;i<=200;i++){
        if(sushu(i)==i)count++;
    }
    cout<<count<<"\n";
    for(int i=101;i<=200;i++){
        if(sushu(i)==i)
        cout<<i<<" ";
    }

}*/
int main() {
    string b;
    int c;
    cin>>b>>c;
    int len=b.size();
    cout<<len<<" ";
    c=c%len;
    bool ling=false;
    for(int i=0;i<len;i++) {
        if(b[(i-c+len)%len]!='0')ling=true;
        if(ling)cout<<b[(i-c+len)%len];
    }
    
    return 0;
}

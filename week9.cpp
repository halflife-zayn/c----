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
/*int main() {
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
*/
/*int main(){
string n,m;
cin>>n;
m=n;
reverse(n.begin(),n.end());
if(m==n)cout<<"YES";
else cout<<"NO";
}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    bool first=true;
    while(cin>>str){
        if(str[0]>='0'&&str[0]<='9'){
            int len=str.size();
            string woaiyinhui=str;
            for(int i=0;i<len;i++){
            woaiyinhui[i]=str[len-i-1];
           }
           //reverse(str.begin(),str.end());
           if(first){cout<<woaiyinhui;first=false;}
           else cout<<" "<<woaiyinhui;
        }
        else if(str[0]>='a'&&str[0]<='z'){
           int len=str.size();
           for(int i=0;i<len;i++){
            str[i]=str[i]-'a'+'A';
           }
           if(first){cout<<str;first=false;}
           else cout<<" "<<str;
        }
        else if(str[0]>='A'&&str[0]<='Z'){
           int len=str.size();
           for(int i=0;i<len;i++){
            str[i]=str[i]-'A'+'a';
           }
           if(first){cout<<str;first=false;}
           else cout<<" "<<str;
        }
    }
}
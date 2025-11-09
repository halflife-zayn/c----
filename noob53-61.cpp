#include<bits/stdc++.h>
using namespace std;

int main(){
string c;
cin>>c;
int len=c.size();
for(int i=0;i<len;i++){
if (c[i]=='5'){
    cout<<'*';
}
else{
    cout<<c[i];
}
}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
string s1,s2;
cin>>s1>>s2;

if (s1=="elephant"&&s2=="tiger"){
    cout<<"win";
}
else if (s1=="elephant"&&s2=="cat"){
    cout<<"tie";
}else if (s1=="elephant"&&s2=="mouse"){
    cout<<"lose";
}else if (s1=="tiger"&&s2=="elephant"){
    cout<<"lose";
}else if (s1=="tiger"&&s2=="tiger"){
    cout<<"tie";
}else if (s1=="elephant"&&s2=="elephant"){
    cout<<"tie";
}else if (s1=="tiger"&&s2=="cat"){
    cout<<"win";
}else if (s1=="tiger"&&s2=="mouse"){
    cout<<"tie";
}else if (s1=="cat"&&s2=="elephant"){
    cout<<"tie";
}else if (s1=="cat"&&s2=="tiger"){
    cout<<"lose";
}else if (s1=="cat"&&s2=="cat"){
    cout<<"tie";
}else if (s1=="cat"&&s2=="mouse"){
    cout<<"win";
}else if (s1=="mouse"&&s2=="tiger"){
    cout<<"tie";
}else if (s1=="mouse"&&s2=="elephant"){
    cout<<"win";
}else if (s1=="mouse"&&s2=="cat"){
    cout<<"lose";
}else if (s1=="mouse"&&s2=="mouse"){
    cout<<"tie";
}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
string s,c;
cin>>s;
int len=s.size();
if(len==1 || len==2){
    cout<<s;
    return 0;
}
if(len%3==0){
for(int i=0;i<=len-6;i+=3){
    c=c+s.substr(i,3)+",";
}
int i=len-3;
c=c+s.substr(i,3);
}
if(len%3==1){
int j=0;
c=c+s.substr(j,1)+",";
for(int i=1;i<=len-6;i+=3){
    c=c+s.substr(i,3)+",";
}
int i=len-3;
c=c+s.substr(i,3);
}
if(len%3==2){
int j=0;
c=c+s.substr(j,2)+",";
for(int i=2;i<=len-6;i+=3){
    c=c+s.substr(i,3)+",";
}
int i=len-3;
c=c+s.substr(i,3);
}
cout<<c;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
string n;
cin>>n;
reverse(n.begin(),n.end());//reverse妙用
string result;
for(int i=0;i<n.length();i++)
{
    if(i>0&&i%3==0)
    {
        result+=',';
    }
    result+=n[i];
}
reverse(result.begin(),result.end());
cout<<result;
return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s,s1;
    int l,f = 0;
    cin>>s;
    l = s.length();
    for(int i = 0;i<=l-2;i++)
    {
        s1=s.substr(i,3);
        if(s1=="bob"||s1=="Bob"||s1=="bOb"||s1=="boB"||s1=="BOb"||s1=="bOB"||s1=="BoB"||s1=="BOB"){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
string str;
int a;
cin>>a>>str;
int len=str.size();
a=a%26;
for(int i=0;i<len;i++){

if(str[i]+a>'z')str[i]-=26;
str[i]+=a;

}
cout<<str;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
string str;
int n;
cin>>n;
for(int i=1;i<=500;i++){
    str+=std::to_string(i);//直接加到后面而不是加int类型
}
cout<<str[n-1];
}
#include <iostream>
#include <string>
using namespace std;

int main(){
int sum;
string str,result;
bool inword=false;
while(cin>>str){
if(str[0]>'Z')str[0]=str[0]-'a'+'A';
result+=str[0];
inword=true;
}
cout<<result;
}
#include <iostream>
#include <string>
using namespace std;

int min(int a,int b,int c,int d){
if(a<b&&a<c&&a<d)return 'A';
else if(b<a&&b<c&&b<d)return 'B';
else if(c<b&&c<a&&c<d)return 'C';
else if(d<b&&d<c&&d<a)return 'D';
else return 0;
}
int max(int a,int b,int c,int d){
if(a>b&&a>c&&a>d)return 'A';
else if(b>a&&b>c&&b>d)return 'B';
else if(c>b&&c>a&&c>d)return 'C';
else if(d>b&&d>c&&d>a)return 'D';
else return 0;
}
int main(){
int t;
string stra,strb,strc,strd;
cin>>t;
for(int i=1;i<=t;i++){
cin>>stra>>strb>>strc>>strd;
int lena=stra.size();
int lenb=strb.size();
int lenc=strc.size();
int lend=strd.size();
if(min(lena,lenb,lenc,lend)!=0&&max(lena,lenb,lenc,lend)==0){
cout<<char(min(lena,lenb,lenc,lend))<<"\n";
}
else if(min(lena,lenb,lenc,lend)==0&&max(lena,lenb,lenc,lend)!=0){
cout<<char(max(lena,lenb,lenc,lend))<<"\n";
}
else{
cout<<"C\n";
}
}
}
#include <iostream>
#include <string>
using namespace std;

int main(){
string s;
int n,m;
cin>>n>>m>>s;
for(int i=1;i<=m;i++){
    int l,r;
    char c1,c2;
    cin>>l>>r>>c1>>c2;
    for(int j=l-1;j<r;j++){
        if(s[j]==c1){
            s[j]=c2;
        }
    }
}
cout<<s;
}
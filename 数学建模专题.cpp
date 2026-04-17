#include<bits/stdc++.h>
using namespace std;
//因数平方和
/*int yinshupingfanghe(int a){
    int result=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            result+=i*i;
        }
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int a;
        cin>>a;
        cout<<yinshupingfanghe(a)<<endl;
    }
}*/
//三的倍数
/*int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int c,w;
        cin>>c>>w;
        int start=1;c--;
        while(c--)start*=10;
        int count=0;
        for(int i=start+w;i<start*10;i+=10){
            if(i%3==0)count++;
        }
        cout<<count<<endl;
    }
}*/
//皇后问题
/*int main(){
    int n;
    cin>>n;
    vector<int> row,col,diag1,diag2;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        row.push_back(x);
        col.push_back(y);
        diag1.push_back(x-y);
        diag2.push_back(x+y);
    }
    sort(row.begin(),row.end());
    sort(col.begin(),col.end());
    sort(diag1.begin(),diag1.end());
    sort(diag2.begin(),diag2.end());
    long long count=0;
    int cnt=1;
    for(int i=1;i<row.size();i++){
        if(row[i]==row[i-1]) cnt++;
        else{
            count+=(long long)cnt*(cnt-1)/2;
            cnt=1;
        }
    }
    count+=(long long)cnt*(cnt-1)/2;
    cnt=1;
    for(int i=1;i<col.size();i++){
        if(col[i]==col[i-1]) cnt++;
        else{
            count+=(long long)cnt*(cnt-1)/2;
            cnt=1;
        }
    }
    count+=(long long)cnt*(cnt-1)/2;
    cnt=1;
    for(int i=1;i<diag1.size();i++){
        if(diag1[i]==diag1[i-1]) cnt++;
        else{
            count+=(long long)cnt*(cnt-1)/2;
            cnt=1;
        }
    }
    count+=(long long)cnt*(cnt-1)/2;
    cnt=1;
    for(int i=1;i<diag2.size();i++){
        if(diag2[i]==diag2[i-1]) cnt++;
        else{
            count+=(long long)cnt*(cnt-1)/2;
            cnt=1;
        }
    }
    count+=(long long)cnt*(cnt-1)/2;
    cout<<count<<endl;
    return 0;
}*/
//点到原点的距离
/*#define MAX 1000
typedef struct{
    long long x,y,z;
}Point;
int NearPoints(Point *p,int n){
    int count=0;
    for(int i=0;i<n;i++){
        long long dist=p[i].x*p[i].x+p[i].y*p[i].y+p[i].z*p[i].z;
        if(dist<10000LL){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    Point p[MAX];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y>>p[i].z;
    }
    cout<<NearPoints(p,n)<<endl;
    return 0;
}*/
//质因数
/*bool zhishu(int a){
    for(int i=2;i<(sqrt(a));i++){
        if(a%i==0)return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int k;
        cin>>k;
        for(int i=2;i<(sqrt(k));i++){
        if(zhishu(i)&&k%i==0){
            cout<<k/i<<endl;
            break;
        }
    }
    }
}*/
//下降数
/*string maxFeiXiaJiangShu(string s){
    int len=s.length();
    while(true){
        int pos=-1;
        for(int i=0;i<len-1;i++){
            if(s[i]>s[i+1]){
                pos=i;
                break;
            }
        }
        if(pos==-1)break;
        s[pos]--;
        for(int i=pos+1;i<len;i++) s[i]='9';
    }
    int start=0;
    while(start<len-1&&s[start]=='0') start++;
    return s.substr(start);
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        string n;
        cin>>n;
        cout<<maxFeiXiaJiangShu(n)<<endl;
    }
}*/
//子数组
/*int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n,m;
        cin>>n>>m;
        vector<int> num(n);
        for(int i=0;i<n;i++) cin>>num[i];
        vector<long long> pref(n+1,0);
        for(int i=0;i<n;i++) pref[i+1]=pref[i]+num[i];
        vector<long long> sums;
        sums.reserve(n*(n+1)/2);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                sums.push_back(pref[j]-pref[i]);
            }
        }
        sort(sums.begin(),sums.end());
        for(int i=0;i<m;i++){
            int L,U;
            cin>>L>>U;
            long long result=0;
            for(int k=L-1;k<U;k++) result+=sums[k];
            cout<<result<<endl;
        }
    }
    return 0;
}*/
//凹数
/*bool aoshu(int a){
    bool tu=false;bool ao=false;
    while(a>=10){
        int pre=a%10;
        int next=(a/10)%10;
        if(pre==next)return false;
        else if(pre<next){
            if(!ao&&!tu)return false;
            else{
                tu=true;ao=false;
            }
        }
        else{
            if(tu)return false;
            else{
                ao=true;tu=false;
            }
        }
        a/=10;
    }
    return tu;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int a,b,count=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(aoshu(i))count++;
        }
        cout<<count<<endl;
    }
}*/
//英文表示数字
/*int translate(string s){
    if(s=="zero")return 0;
    else if(s=="one")return 1;
    else if(s=="two")return 2;
    else if(s=="three")return 3;
    else if(s=="four")return 4;
    else if(s=="five")return 5;
    else if(s=="six")return 6;
    else if(s=="seven")return 7;
    else if(s=="eight")return 8;
    else if(s=="nine")return 9;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        string A;int a,b=0,c=0;
        while(cin>>A){
            if(A=="+")break;
            a=translate(A);
            b*=10;
            b+=a;
        }   
        while(cin>>A){
            if(A=="=")break;
            a=translate(A);
            c*=10;
            c+=a;
        }   
        cout<<b+c<<endl;
    }
}*/
//双阶乘质因数个数
/*int jiecheng(int n,int m){
    int count=0;
    for(int i=n;i>1;i-=2){
        int j=i;
        while(j%m==0){
            count++;
            j/=m;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n,m;
        cin>>n>>m;
        cout<<jiecheng(n,m)<<endl;
    }
}*/
//最小点积
/*int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n;
        cin>>n;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v1.push_back(num);
        }
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v2.push_back(num);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());
        int res=0;
        for(int i=0;i<n;i++){
            res+=v1[i]*v2[i];
        }
        cout<<res<<endl;
    }
}*/
//生理周期
/*int triplePeak(int p,int e,int i,int d){
    p=p%23;
    e=e%28;
    i=i%33;
    for(int day=d+1;day<=d+21252;day++){
        if(day%23==p&&day%28==e&&day%33==i)return day-d;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int p,e,i,d;
        cin>>p>>e>>i>>d;
        cout<<"the next triple peak occurs in "<<triplePeak(p,e,i,d)<<" days."<<endl;
    }
}*/
//连续正整数
/*int jiyinshu(int n){
    int count=0;
    for(int i=3;i<n+1;i+=2){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n;
        cin>>n;
        cout<<jiyinshu(n)<<endl;
    }
}*/

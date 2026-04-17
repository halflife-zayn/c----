#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m;
    while(cin>>n>>k>>m){
    double fangjia=270.0;
    double jixu=n;
    double gongzi=n;
    bool afford=false;
    for(int i=1;i<=30;i++){
        afford=jixu>=fangjia;
        if(afford){
        cout<<i<<endl;break;
    }
        fangjia=fangjia*(100+k)/100;
        jixu=jixu+gongzi*(100+m)/100;
        gongzi=gongzi*(100+m)/100;
    }
    if(!afford)cout<<"Impossible\n";
    } 
}
//排版
/*string formalline(const vector<string>&line,int m,bool last){
    int count=line.size();
    int totalLen=0;
    for(int i=0;i<count;i++){
        totalLen+=line[i].size();
    }
    if(last||count==1){
        string res=line[0];
        for(int i=1;i<count;i++){
            res+=" "+line[i];
        }
        if(!last){
            for(int j=0;j<m-(int)res.size();j++){
                res+=" ";
            }
        }
        return res;
    }
    int space=m-totalLen;
    int gap=count-1;
    int basespace=space/gap;
    int extraspace=space%gap;
    string res;
    for(int i=0;i<count;i++){
        if(i>0){
            int spaces=basespace;
            if(i>gap-extraspace){
                spaces++;
            }
            for(int j=0;j<spaces;j++){
                res+=" ";
            }
        }
        res+=line[i];
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int m;
        cin>>m;
        cin.ignore();
        string line;
        getline(cin,line);
        vector<string> words;
        stringstream ss(line);
        string word;
        while(ss>>word)words.push_back(word);
        vector<vector<string>> lines;
        vector<string> currentLine;
        int currentLen=0;
        for(int i=0;i<words.size();i++){
            string word=words[i];
            if(currentLine.empty()){
                currentLine.push_back(word);
                currentLen=word.size();
            }
            else if(currentLen+1+word.size()<=m){
                currentLine.push_back(word);
                currentLen+=1+word.size();
            }
            else{
                lines.push_back(currentLine);
                currentLine.clear();
                currentLine.push_back(word);
                currentLen=word.size();
            }
        }
        if(!currentLine.empty()){
            lines.push_back(currentLine);
        }
        for(int i=0;i<lines.size();i++){
            bool last=(i==lines.size()-1);
            cout<<formalline(lines[i],m,last)<<endl;
        }
    }
}*/
//字符组合
/*int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        string s;
        cin>>s;
        set<char>letter(s.begin(),s.end());
        vector<char>word(letter.begin(),letter.end());
        int size=word.size();
        vector<string>result;
        for(int i=1;i<(1<<size);i++){
            string combine;
            for(int k=0;k<size;k++){
                if(i&1<<k){
                    combine.push_back(word[k]);
                }
            }
            result.push_back(combine);
        }
        sort(result.begin(),result.end());
        for(int i=0;i<(1<<size)-1;i++){
            cout<<result[i]<<endl;
        }
    }
}*/
//八进制小数(undone)
/*bool mycmp(string a,string b){
    if(a.size()!=b.size())return a.size()>b.size();
    return a>=b;
}
string subtract(string a,string b){
    string result;
    int borrow=0;
    int i=a.size()-1, j=b.size()-1;
    while(i>=0||j>=0){
        int digitA=i>=0?a[i]-'0':0;
        int digitB=j>=0?b[j]-'0':0;
        int diff=digitA-digitB-borrow;
        if(diff<0){
            diff+=10;
            borrow=1;
        }else{
            borrow=0;
        }
        result+=char(diff+'0');
        i--;j--;
    }
    while(result.size()>1&&result.back()=='0') result.pop_back();
    reverse(result.begin(),result.end());
    return result;
}
string otod(string num){
        num=num.substr(2);
        int size=num.size();
        long long fenzi=0;
        for(int i=0;i<size;i++){
            fenzi*=8;
            fenzi+=num[i]-'0';
        }
        string fenmu="1";
        for(int i=0;i<size;i++){
            int jin=0;
            for(int j=0;j<fenmu.size();j++){
                int temp=(fenmu[j]-'0')*8+jin;
                fenmu[j]=(temp%10)+'0';
                jin=temp/10;
            }
            while(jin){
                fenmu+=char((jin%10)+'0');
                jin/=10;
            }
        }
        reverse(fenmu.begin(),fenmu.end());
        string remainfenzi=to_string(fenzi);
        string res="";
        for(int i=0;i<3*size;i++){
            remainfenzi+="0";
            int posnum=0;
            string temp=remainfenzi;
            while(mycmp(temp,fenmu)){
                temp=subtract(temp,fenmu);
                posnum++;
            }
            res+=char(posnum+'0');
            remainfenzi=temp;
            if(remainfenzi=="0")break;
        }
        while(!res.empty()&&res.back()=='0')res.pop_back();
        return "0."+res;
    }
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        string str;
        cin>>str;
        cout<<otod(str)<<endl;
    }
}*/
//n^n
/*int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        double x=n*log10(n);
        double frac=x-floor(x);
        int first=(int)pow(10, frac);
        cout<<first<<endl;
}
}*/
//大数幂
/*void mi(int a,int n,vector<int>&num){
    if(n==0){num.push_back(1);return;}
    num.clear();
    num.push_back(a);
    for(int i=1;i<n;i++){
        int carry=0;
        for(int j=0;j<num.size();j++){
            int temp=num[j]*a+carry;
            num[j]=temp%10;
            carry=temp/10;
        }
        while(carry){
            num.push_back(carry%10);
            carry/=10;
        }
    }
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int a,n;
        cin>>a>>n;
        vector<int>num;
        mi(a,n,num);
        reverse(num.begin(),num.end());
        int size=num.size();
        for(int i=0;i<size;i++){
            cout<<num[i];
        }
        cout<<endl;
        num.clear();
    }
}*/
//多项式系数数字较大
/*const int MOD=1000000007;
const int MAXK=1000000;
long long fac[MAXK+5];
long long invfac[MAXK+5];
long long mypow(long long a,long long b){
    long long res=1;
    while(b){
        if(b&1)res=res*a%MOD;
        a=a*a%MOD;
        b>>=1;
    }
    return res;
}
void yuchuli(){
    fac[0]=1;
    for(int i=1;i<=MAXK;i++){
        fac[i]=fac[i-1]*i%MOD;
    }
    invfac[MAXK]=mypow(fac[MAXK],MOD-2);
    for(int i=MAXK-1;i>=0;i--){
        invfac[i]=invfac[i+1]*(i+1)%MOD;
    }
}
long long zuhe(int k,int n){
    return fac[k]*invfac[n]%MOD*invfac[k-n]%MOD;
}
int xishu(int a,int b,int k,int n,int m){
    long long res=zuhe(k,n);
    res=res*mypow(a%MOD,n)%MOD*mypow(b%MOD,m)%MOD;
    return res;
}
int main(){
    int t;
    cin>>t;
    yuchuli();
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int a,b,k,n,m;
        cin>>a>>b>>k>>n>>m;
        cout<<xishu(a,b,k,n,m)<<endl;
    }
}*/
//多项式系数数字较小
/*const int Mod=10007;
long long C[1005][1005];
void zuhe(){
    for(int i=0;i<=1000;i++){
        C[i][0]=C[i][i]=1;
        for(int j=1;j<i;j++){
            C[i][j]=(C[i-1][j-1]+C[i-1][j])%Mod;
        }
    }
}
int xishu(int a,int b,int k,int m,int n){
    zuhe();
    long long res=C[k][m];
    for(int i=0;i<m;i++){
        res*=a;res%=10007;
    }
    for(int i=0;i<n;i++){
        res*=b;res%=10007;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int a,b,k,m,n;
        cin>>a>>b>>k>>m>>n;
        cout<<xishu(a,b,k,m,n)<<endl;
    }
}*/
//斐波那契验证以及排序
/*bool feibo(int &a,int &b,int &c,int &d,int &res){
    if(a==-1){
        int val=d-b-c;
        if(res==-1){
            res=val;
        }else if(res!=val){
            return false;
        }
        a=val;
        return true;
    }
    else if(b==-1){
        int val=d-c-a;
        if(res==-1){
            res=val;
        }else if(res!=val){
            return false;
        }
        b=val;
        return true;
    }
    else if(c==-1){
        int val=d-b-a;
        if(res==-1){
            res=val;
        }else if(res!=val){
            return false;
        }
        c=val;
        return true;
    }
    else if(d==-1){
        int val=a+b+c;
        if(res==-1){
            res=val;
        }else if(res!=val){
            return false;
        }
        d=val;
        return true;
    }
    else{
        return d==a+b+c;
    }
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int a;
        cin>>a;
        vector<int>num;
        while(a--){
            int k;
            cin>>k;
            num.push_back(k);
        }
        bool valid=true;
        int size=num.size();
        int res=-1;
        if(size<4){cout<<"-1\n";continue;}
        for(int i=3;i<size;i++){
            if(!feibo(num[i-3],num[i-2],num[i-1],num[i],res)){
                valid=false;
                break;
            }
        }
        if(valid&&res>0){
            cout<<res<<endl;
        }else{
            cout<<"-1\n";
        }
    }
}*/
//子串个数
/*long long zichuan(int n,int m){
    long long total=1LL<<n;
    long long dp[32]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++){
        long long newdp[32]={0};
        for(int j=0;j<m;j++){
            newdp[0]+=dp[j];//加0
            if(j+1<m) newdp[j+1]+=dp[j];//加1
        }
        for(int i=0;i<32;i++){
            dp[i]=newdp[i];
        }
    }
    long long without=0;
    for(int j=0;j<m;j++) without+=dp[j];
    return total-without;
}
int main(){
    int n,m;
    while(cin>>n>>m){
        if(n==-1&&m==-1)break;
        cout<<zichuan(n,m)<<endl;
    }
}//超时dfs
int dfs(int pos,int pre,int found,int n,int m){
    if(pos==n){
        return found?1:0;
    }
    int res=0;
    res+=dfs(pos+1,0,found,n,m);
    if(pre+1==m){
        res+=dfs(pos+1,pre+1,1,n,m);
    }else{
        res+=dfs(pos+1,pre+1,found,n,m);
    }
    return res;
}
int zichuan(int n,int m){
    return dfs(0,0,0,n,m);
}*/
//杨辉三角
/*long long zuhe(int a,int b){
    if(b<0||b>a)return 0;
    if(b==0||b==a)return 1;
    long long result=1;
    for(int i=1;i<=b;i++){
        result=result*(a-b+i)/i;
    }
    return result;
}
void yanghuisanjiao(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<zuhe(i,j);
            if(j<i)cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    while(cin>>t){
        if(t==0)break;
        yanghuisanjiao(t);
        cout<<endl;
    }
}*/
//母牛生小牛
/*int niu(int n){
    if(n<4)return 1;
    return niu(n-1)+niu(n-3);
}
int main(){
    int t;
    while(cin>>t){
        if(t==0)break;
        cout<<niu(t)<<endl;
    }
}*/
//波兰表达式
/*double calculate(double a,double b,char op){
    switch(op){
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
        default:return 0;
    }
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        string line;
        getline(cin,line);
        vector<string> tokens;
        stringstream ss(line);
        string token;
        while(ss>>token){
            tokens.push_back(token);
    }
        stack<double> st;
        int size=tokens.size()-1;
        for(int i=size;i>=0;i--){
        if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/"){
            st.push(stod(tokens[i]));
        }else{
            double a=st.top();st.pop();
            double b=st.top();st.pop();
            double result=calculate(a,b,(tokens[i][0]));
            st.push(result);
        }
        
    }
        cout<<fixed<<setprecision(6)<<st.top()<<endl;
    }
}*/
//斐波那契数列
/*long long feibo(int n){
    if(n==0)return 0;
    else if(n==1||n==2)return 1;
    long long a=0,b=1,c=1;
    for (int i=3;i<=n;i++){
        long long next=a+b+c;
        a=b;
        b=c;
        c=next;
    }
    return c;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int a;
        cin>>a;
        cout<<feibo(a)<<endl;
    }
}*/
//二进制不含101
/*int no101(int a){
    if(a==0)return 1;
    else if(a==1)return 2;
    else if(a==2)return 4;
    else if(a==3)return 7;
    else{
        return no101(a-1)+no101(a-2)+no101(a-4);
        }
}
int main(){
    int a;
    while(cin>>a){
        if(a==-1)break;
        cout<<no101(a)<<endl;
    }
}*/
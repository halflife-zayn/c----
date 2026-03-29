#include<bits/stdc++.h>
using namespace std;
//算位数
/*int main(){
    string line;
    while(getline(cin,line)){
        cout<<line.length()<<endl;
    }

}*/
//进制转换
/*int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        bool fu=false;
        if(n<0){n=-n;fu=true;}
        vector<char>result;
        while(n>0){
            if(n%r==1)result.push_back('1');
            if(n%r==2)result.push_back('2');
            if(n%r==3)result.push_back('3');
            if(n%r==4)result.push_back('4');
            if(n%r==5)result.push_back('5');
            if(n%r==6)result.push_back('6');
            if(n%r==7)result.push_back('7');
            if(n%r==8)result.push_back('8');
            if(n%r==9)result.push_back('9');
            if(n%r==10)result.push_back('A');
            if(n%r==11)result.push_back('B');
            if(n%r==12)result.push_back('C');
            if(n%r==13)result.push_back('D');
            if(n%r==14)result.push_back('E');
            if(n%r==15)result.push_back('F');
            if(n%r==16)result.push_back('G');
            if(n%r==17)result.push_back('H');
            if(n%r==18)result.push_back('I');
            if(n%r==19)result.push_back('J');
            if(n%r==20)result.push_back('K');
            if(n%r==21)result.push_back('L');
            if(n%r==22)result.push_back('M');
            if(n%r==23)result.push_back('N');
            if(n%r==24)result.push_back('O');
            if(n%r==25)result.push_back('P');
            if(n%r==26)result.push_back('Q');
            if(n%r==27)result.push_back('R');
            if(n%r==28)result.push_back('S');
            if(n%r==29)result.push_back('T');
            if(n%r==30)result.push_back('U');
            if(n%r==31)result.push_back('V');
            if(n%r==32)result.push_back('W');
            if(n%r==33)result.push_back('X');
            if(n%r==34)result.push_back('Y');
            if(n%r==35)result.push_back('Z');
            if(n%r==0)result.push_back('0');
            n/=r;
        }
        int len=result.size();
        if(fu)cout<<"-";
        for(int i=len-1;i>=0;i--){cout<<result[i];}
        cout<<endl;
    }
}*/
//数据密度
/*void countbit(unsigned char c,int &zero,int &one){
    int k=c;
    for(int i=0;i<8;i++){
        if(k%2==0)zero++;
        else one++;
        k/=2;
    }
}
long long gcd(long long a,long long b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string line;
        getline(cin,line);
        int size=line.size();
        long long total1=0;
        long long total0=0;
        for(int j=0;j<size;j++){
            int z=0;
            int o=0;
            countbit((unsigned char)line[j],z,o);
            total1+=o;
            total0+=z;
        }
        long long total=total1+total0;
        long long g=gcd(total1,total);
        total/=g;
        total1/=g;
        cout<<total1<<"/"<<total<<endl;
    }
}*/
//神秘讯息
/*int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        string line;
        cin>>line;
        int size=line.size();
        vector<int>num;
        for(int i=0;i<size;i++){
            num.push_back(-1);
        }
        bool first=true;
        int zhi=2;
        for(int j=0;j<size;j++){
            if(j==0){
                for(int k=0;k<size;k++){
                    if(line[j]==line[k])num[k]=1;
                }
                continue;
            }
            else if(num[j]==-1){
                if(first){
                    for(int k=0;k<size;k++){
                    if(line[j]==line[k])num[k]=0;
                }
                first=false;
                continue;
                }
                else{
                    for(int k=0;k<size;k++){
                    if(line[j]==line[k])num[k]=zhi;
                }
                zhi++;
                continue;
                }
            }
        }
        long long result=0;
        for(int i=0;i<size;i++){
            result=result*zhi+num[i];
        }
        cout<<result<<endl;
        
    }
}*/
//二进制倒置
/*string DTB(string de){
    if(de=="0")return "0";
    string bi="";
    while(de!="0"){
        string nde="";
        int remain=0;     
        for(int i=0;i<de.length();i++){
            int cnum=remain*10+(de[i]-'0');
            int quo=cnum/2;
            if(quo!=0||!nde.empty()){
                nde+=to_string(quo);
            }
            remain=cnum%2;
        }
        if(nde.empty()){
            nde="0";
        }
        bi+=to_string(remain);       
        de=nde;
    }  
    return bi;
}
string BTD(string bi){
    if(bi=="0")return "0";
    string de="0";
    for(int i=0;i<bi.length();i++){
        string nde="";
        int carry=0;
        for(int j=0;j<de.length();j++){
            int cnum=(de[j]-'0')*2+carry;
            nde+=to_string(cnum%10);
            carry=cnum/10;
        }
        if(carry>0){
            nde+=to_string(carry);
        }
        de=nde;
        if(bi[i]=='1'){
            nde="";
            carry=1;
            for(int j=0;j<de.length();j++){
                int cnum=(de[j]-'0')+carry;
                nde+=to_string(cnum%10);
                carry=cnum/10;
            }
            if(carry>0){
                nde+=to_string(carry);
            }
            de=nde;
        }
    }
    reverse(de.begin(),de.end());
    return de;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        string str;
        cin>>str;
        str=DTB(str);
        str=BTD(str);
        cout<<str<<endl;
    }
}*/
//内存显示
/*int main(){
    string line;int zheng=0;double xiao=0;
    bool isdigit=true;
    while(getline(cin,line)){
        bool isdigit=true;
        for(int i=0;i<line.size();i++){
                if(line[i]=='.')isdigit=false;
            }
            stringstream ss(line);
            if(isdigit){
                ss>>zheng;
                unsigned char* p=(unsigned char* )&zheng;
                int size=sizeof(zheng);
                while(size--){printf("%02x ",*p++);}
            }
            else{
                ss>>xiao;
                unsigned char* p=(unsigned char* )&xiao;
                int size=sizeof(xiao);
                while(size--){printf("%02x ",*p++);}
            }
            cout<<endl;
    }
}*/
//平衡三进制
/*long long gcd(long long a,long long b){
    return b==0?a:gcd(b,a%b);
}
long long zhengShuBuFen(string a){
    long long power=1;
    long long result=0;
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]=='1') result+=power;
        else if(a[i]=='2') result-=power;
        power*=3;
    }
    return result;
}
void xiaoShuBuFen(string b,long long &fenzi,long long &fenmu){
    fenzi=0;
    fenmu=1;
    for(int i=0;i<b.length();i++){
        fenmu*=3;
        fenzi*=3;
        if(b[i]=='1') fenzi+=1;
        else if(b[i]=='2') fenzi-=1;
    }
    long long g=gcd(abs(fenzi),fenmu);
    fenzi/=g;
    fenmu/=g;
}
int main(){
    string s;
    cin>>s;
    long long b=0,a=0,c=1;
    int pos=s.find('.');
    
    if(pos==string::npos){
        b=zhengShuBuFen(s);
    }
    else{
        if(pos>0) b=zhengShuBuFen(s.substr(0,pos));
        if(pos+1<s.size()) xiaoShuBuFen(s.substr(pos+1),a,c);
    }
    long long totalfenzi=b*c+a;
    long long totalfenmu=c;
    long long g=gcd(abs(totalfenzi),totalfenmu);
    totalfenzi/=g;
    totalfenmu/=g;
    if(totalfenzi==0){
        cout<<0;
    }
    else if(abs(totalfenzi)<totalfenmu){
        cout<<totalfenzi<<" "<<totalfenmu;
    }
    else{
        long long intPart=totalfenzi/totalfenmu;
        long long fracPart=abs(totalfenzi%totalfenmu);
        if(fracPart==0){
            cout<<intPart;
        }
        else{
            cout<<intPart<<" "<<fracPart<<" "<<totalfenmu;
        }
    }
    return 0;
}*/
//十六进制加法
/*int charToNum(char c){
    if(c>='0'&&c<='9')return c-'0';
    return c-'A'+10;
}
char numToChar(int n){
    if(n<10)return n+'0';
    return n-10+'A';
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        string line;
        getline(cin,line);
        stringstream ss(line);
        string num1,num2;
        ss>>num1>>num2;
        stack<int> a,b;
        for(int i=0;i<num1.size();i++){
            a.push(charToNum(num1[i]));
        }
        for(int i=0;i<num2.size();i++){
            b.push(charToNum(num2[i]));
        }
        stack<char> result;
        int jin=0;
        while(!a.empty()||!b.empty()||jin>0){
            int valA=0,valB=0;
            if(!a.empty()){
                valA=a.top();
                a.pop();
            }
            if(!b.empty()){
                valB=b.top();
                b.pop();
            }
            int pos=valA+valB+jin;
            jin=pos/16;
            pos%=16;
            result.push(numToChar(pos));
        }
        while(!result.empty()){
            cout<<result.top();
            result.pop();
        }
        cout<<endl;
    }
    return 0;
}*/
//最小字典序，“字符串”前后取
/*int main(){
    int t;
    cin>>t;
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        int len;
        cin>>len;
        vector<char> str(len);
        for(int i=0;i<len;i++)
        cin>>str[i];
        string resultstr;
        int begin=0,end=len-1;
        for(int i=0;i<len;i++){
            int be=begin,en=end;
            while(str[be]==str[en]&&be<en){
                be++;en--;
            }
            if(be>=en){
                resultstr+=str[begin];
                begin++;
            }
            else if(str[be]>str[en]){
                resultstr+=str[end];
                end--;
            }
            else if(str[be]<str[en]){
                resultstr+=str[begin];
                begin++;
            }
        }
        cout<<resultstr<<endl;
    }
}*/
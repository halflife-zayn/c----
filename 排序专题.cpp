#include<bits/stdc++.h>
using namespace std;
//KL排序
int main(){
    int t;
    cin>>t;
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        int k,n;
        cin>>k>>n;
        vector<int>xQuZhiCiShu;
        double xm=0.0;
        for(int xnum=0;xnum<k;xnum++){
            int ciShu;
            cin>>ciShu;
            xQuZhiCiShu.push_back(ciShu);
            xm+=ciShu;
        }
        vector<double>percentage;
        vector<int>order;
        for(int xuHao=0;xuHao<n;xuHao++){
            order.push_back(xuHao+1);
            vector<int>yQuZhiCiShu;
            double ym=0.0;
            for(int ynum=0;ynum<k;ynum++){
            int ciShu;
            cin>>ciShu;
            yQuZhiCiShu.push_back(ciShu);
            ym+=ciShu;
            }
            double per=0;
            for(int i=0;i<k;i++){             //注意浮点类型数据，1.0的运用
                double k1=k;
                double pxei=(xQuZhiCiShu[i]+1.0/k1)/(xm+1.0);
                double pyei=(yQuZhiCiShu[i]+1.0/k1)/(ym+1.0);
                per+=pxei*(log(pxei/pyei));
            }if(fabs(per)<1e-7) per=0.0000;    //在循环外判断
            percentage.push_back(per);
            
        }
        for(int i=0;i<n-1;i++){                      //冒泡排序的稳定写法
            for(int j=0;j<n-1-i;j++){
                if(percentage[j]>percentage[j+1]+1e-10){
                swap(percentage[j],percentage[j+1]);
                swap(order[j],order[j+1]);
        }
    }
}
            for(int i=0;i<n;i++){
                cout<<order[i]<<" "<<fixed<<setprecision(4)<<percentage[i]<<endl;
            }
    }
}
//字串非重复字符数排序
int cnt(string str){
    int len=str.length();
    int c=0;
    for(int a=0;a<26;a++){          //按照每个字母是否出现来数数
        for(int l=0;l<len;l++){
            if(str[l]=='A'+a){c++;break;}
        }
    }
    return c;
}
bool cmp(string a,string b){
    int acnt=cnt(a);
    int bcnt=cnt(b);          //比较函数
    if(!(acnt==bcnt))return acnt>bcnt;
    else return a<b;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n;
        cin>>n;
        vector<string>s;
        for(int k=0;k<n;k++){
            string str;
            cin>>str;
            s.push_back(str);
        }
        sort(s.begin(),s.end(),cmp);
        for(int i=0;i<n;i++){
            if(i>0)cout<<endl;
            cout<<s[i];
        }
        cout<<endl;
    }
}
//字符频率
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        vector<double> freq(26);
        vector<char> order(26);
        vector<char> order1;
        for(int i=0;i<26;i++){
            cin>>freq[i];
            order[i]=i+'a';
        }
        string str;
        cin>>str;
        for(int i=0;i<25;i++){                      
            for(int j=0;j<25-i;j++){
                if(freq[j]<freq[j+1]){
                swap(freq[j],freq[j+1]);
                swap(order[j],order[j+1]);
                }
    }
}       
        for(int i=0;i<26;i++){
            order1.push_back(order[i]);
            order1.push_back(order[i]-'a'+'A');
}
        map<char,int>ordermap;
        for(int i=0;i<52;i++){          //用map对应字符和顺序
            ordermap[order1[i]]=i;
}
        sort(str.begin(),str.end(),[&ordermap](char a,char b){return ordermap[a]<ordermap[b];});
        cout<<str<<endl;
    }
    return 0;
}
//按1的位数排列
bool compare(const long long a,const long long b){
    int aCnt=0,bCnt=0;
    for(int i=0;i<64;i++){
        if(a&(1LL<<i))aCnt++; //按位与，取一位，判断是1还是0
    }
    for(int i=0;i<64;i++){
        if(b&(1LL<<i))bCnt++;
    }
    if(!(aCnt==bCnt))return aCnt>bCnt;
    else return a<b;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n;
        cin>>n;
        vector<long long>num;
        for(int i=0;i<n;i++){ 
            long long nums;
            cin>>nums;
            num.push_back(nums);
        }
        //sort(num.begin(),num.end(),compare);
        for(int i=0;i<n;i++){
        if(i>0) cout<<" ";
        cout<<num[i];
}
        cout<<endl;
}
}
//行数据排列
vector<int>split(const string& line){
    vector<int> nums;
    stringstream iss(line);   //直接生成数组
    int num;
    while(iss>>num){
        if (num==-1)break;
        nums.push_back(num);  
    }
    return nums;
}
bool compare(const vector<int>& a,const vector<int>& b){
    int len=min(a.size(),b.size());
    for (int i=0;i<len;i++){
        if(a[i]!=b[i]){                 //直接对数组排序
            return a[i]>b[i];
        }
    }
    return a.size()>b.size();
}
int main() {
    int t;
    cin >> t;
    getchar();
    while(t--){
        int n;
        cin>>n;
        getchar();
        vector<vector<int>>lines;
        for(int i=0;i<n;i++){
            string line;
            getline(cin,line);
            lines.push_back(split(line));
        }
        //sort(lines.begin(),lines.end(),compare);
        for(int j=0;j<lines.size();j++){
            vector<int>& nums=lines[j];
            for (int i=0;i<nums.size();i++){
                if (i>0)cout<<" ";
                cout<<nums[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
//随机排序
vector<char> letter(26);
bool operator>(string a,string b){//比较字符串
bool isupper;
int len_a=a.length();
int len_b=b.length();
int min_len=min(len_a,len_b);
for(int i=0;i<min_len;i++){
    int size_a,size_b;
    for(int j=0;j<26;j++){
        if(a[i]==letter[j]){size_a=j*2;break;}
        else if(a[i]-'a'+'A'==letter[j]){size_a=j*2+1;break;}//小写字母
    }
    for(int j=0;j<26;j++){
        if(b[i]==letter[j]){size_b=j*2;break;}
        else if(b[i]-'a'+'A'==letter[j]){size_b=j*2+1;break;}
    }
    if(size_a>size_b)return true;
    else if(size_a<size_b)return false;

}

return len_a>len_b;//比完相同比长短

}
int main(){
    string str;
    while(cin>>str){
        for(int i=0;i<26;i++){
            letter[i]=str[i];
        }
        getchar();
        string line;
        string word;
        getline(cin,line);
        stringstream ss(line);//用ss分割空格
        vector<string> words;
        while(ss>>word){
            words.push_back(word);
        }
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
            if(words[i]>words[j])swap(words[i],words[j]);
        }
        }
        for(int i=0;i<words.size();i++) {
        if(i>0)cout<<" ";
        cout<<words[i];
    }
    cout<<endl;

    }

}
//极坐标排序
struct point1
{
    double rou;
    double angle;
    point1(double x,double y){
        rou=sqrt(x*x+y*y);
        angle=atan2(y,x);
        if(angle<0){
        angle+=2*M_PI;
    }
}
};
vector<point1> point2;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        cout<<"case #"<<k<<":"<<endl;
        int p;
        cin>>p;
        for(int i=0;i<p;i++){
            
            double x1,y1;
            cin>>x1>>y1;
            point1 point(x1,y1);
            point2.push_back(point);
        }
        for(int i=0;i<p;i++){
            for(int j=i+1;j<p;j++){
                if(point2[i].angle>point2[j].angle){swap(point2[i],point2[j]);}
                else if(point2[i].angle==point2[j].angle){
                    if(point2[i].rou<point2[j].rou){swap(point2[i],point2[j]);}
                }
            }
        }
        for(int i=0;i<p;i++){
            cout<<"("<<fixed<<setprecision(4)<<point2[i].rou<<","
            <<fixed<<setprecision(4)<<point2[i].angle<<")"<<endl;
        }
        while(!point2.empty())point2.pop_back();
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    int count=0;
    vector<string> nums;
    while(getline(cin,line)){
        count++;
        nums.push_back(line);
    }
    string word;
    for(int i=0;i<count;i++){
    stringstream ss(nums[i]);
    vector<int> sum;
    while(ss>>word){
        int q=stoi(nums[i]);
            sum.push_back(q);
        }
    }
}

/*struct point1
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
}*/
/*vector<char> letter(26);
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

}*/
/*int main(){//算位数
    string line;
    while(getline(cin,line)){
        cout<<line.length()<<endl;
    }

}*/

/*int main(){//大数加法
    string a;
    string b;
    while(cin>>a>>b){
        if(a.length()<b.length())swap(a,b);
        int len_a=a.length();
        int len_b=b.length();
        int jin=0;
        vector<int> result(len_a + 1, 0); 
        for(int i=0;i<len_a-len_b;i++){
            b='0'+b;
        }
        for(int i=len_a-1;i>=0;i--){
            result[i]=(a[i]-'0'+b[i]-'0'+jin)%10;
            jin=(a[i]-'0'+b[i]-'0'+jin)/10;
        }
        if(jin)cout<<"1";
        for(int i=0;i<len_a;i++)
        cout<<result[i];
        cout<<endl;
    }
}*/
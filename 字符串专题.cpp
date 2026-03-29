#include<bits/stdc++.h>
using namespace std;
//最大间距
int main(){
    int t;  
    cin>>t;
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        vector<int>word1pos;
        vector<int>word2pos;
        string word1;
        string word2;
        string line;
        cin>>word1>>word2>>line;
        int word1size=word1.size();
        int word2size=word2.size();
        int sentencesize=line.size();
        for(int m=0;m<sentencesize-word1size+1;m++){
            if(line[m]==word1[0]){
                for(int n=0;n<word1size;n++){
                    if(line[m+n]!=word1[n]){break;}
                    if(n==word1size-1){word1pos.push_back(m);}
                }
            }
        }
        for(int m=0;m<sentencesize-word2size+1;m++){
            if(line[m]==word2[0]){
                for(int n=0;n<word2size;n++){
                    if(line[m+n]!=word2[n]){break;}
                    if(n==word2size-1){word2pos.push_back(m);}
                }
            }
        }
        if(word1pos.empty()||word2pos.empty()){
            cout<<"0\n";
            continue;
        }
        int size1=word1pos.size();
        int size2=word2pos.size();
        int cha1=(word2pos[size2-1])-(word1pos[0])-word1size;
        int cha2=(word1pos[size1-1])-(word2pos[0])-word2size;
        int cha=max(cha1,cha2);
        cout<<cha<<endl;
    }
}
//句中单词表
/*int main(){
set<string> s;
    int t;  
    cin>>t;
    cin.ignore();
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        string line;
        getline(cin,line);
        int size=line.size();
        for(int i=0;i<size;i++){
            if(!(isalpha(line[i])))line[i]=' ';
        }
        string word;
        stringstream ss(line);
        while(ss>>word){
            s.insert(word);
        }
        size=s.size();
        for(int i=0;i<size;i++){
            cout<<*(s.begin())<<" ";
            s.erase(s.begin());
        }
        cout<<endl;
    }
}*/
//字符串消除
/*int cal(string s){
	int presize=0;
    int result=0;
	int nowsize=s.size();
	while(nowsize!=presize){
		presize=nowsize;
		string news;
		int i=0,j;
		while(i<s.size()){
			if(i<s.size()-1&&s[i]==s[i+1]){
				j=i;
				char c=s[i];
				while(j<s.size()&&s[j]==c){
					++result;
					++j;
				}
				i=j;
			}
			else{
				news.push_back(s[i]);
				++i;
			}
		}
		nowsize=news.size(); 
		s=news;
	}
	return result;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
		string s;
        cin>>s;
		int result=0;
		for(int i=0;i<=s.size();++i)
			for(int j=0;j<3;++j){
				string news=s;
				news.insert(i,1,'A'+j);
				result=max(cal(news),result);
			}
		cout<<result<<"\n";
	}
}*/
//查找单词
/*string tolower(string str,int size){
    string result;
    for(int i=0;i<size;i++){
        if(isupper(str[i])){str[i]=str[i]-'A'+'a';}
        result+=str[i];
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        string word;
        cin>>word;
        cin.ignore();
        string line;
        getline(cin,line);
        int wordsize=word.size();
        int sentencesize=line.size();
        word=tolower(word,wordsize);
        line=tolower(line,sentencesize);
        bool startword=false;
        bool match=false;
        int pos=0;
        if(isalpha(line[0])){startword=true;}
        for(int m=0;m<sentencesize-wordsize+1;m++){
            if(m>0){
                if(isalpha(line[m])&&(line[m-1]==' ')){startword=true;}
                else {startword=false;}
            }
            if((line[m]==word[0])&&startword&&!isalpha(line[m+wordsize])){
                
                for(int n=0;n<wordsize;n++){
                    if(line[m+n]!=word[n]){match=false;break;}
                    if(n==wordsize-1){match=true;pos=m+1;}
                }
            }
            if(match)break;
        }
        if(match)cout<<pos<<endl;
        else cout<<"None"<<endl;
    }
}*/
//统计单词个数
/*int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        string line;
        getline(cin,line);
        stringstream ss(line);
        int count=0;
        string w;
        while(ss>>w){
            for(int i=0;i<w.size();i++){
                if(isupper(w[i]))w[i]=w[i]-'A'+'a';
            }
            if(w!="the"&&w!="a"&&w!="an"&&w!="of"&&w!="for"&&w!="and")count++;
        }
        cout<<count<<endl;
    }
}*/
//字串数字排序
/*bool strnumcmp(string a,string b){
    int asize=a.size(),bsize=b.size();
    bool adigit=false,bdigit=false;
    int apos=0,bpos=0;
    for(int i=0;i<asize;i++){
        if(isdigit(a[i])){adigit=true;apos=i;break;}
    }
    for(int i=0;i<bsize;i++){
        if(isdigit(b[i])){bdigit=true;bpos=i;break;}
    }
    if((!adigit)&&(!bdigit))return a<b;
    else if((!adigit)&&bdigit)return true;
    else if(adigit&&(!bdigit))return false;
    else{
        int aamount=0,bamount=0;
        while(isdigit(a[apos])&&apos<asize){
            aamount*=10;aamount+=(a[apos]-'0');
            apos++;
        }
        while(isdigit(b[bpos])&&bpos<bsize){
            bamount*=10;bamount+=(b[bpos]-'0');
            bpos++;
        }
        if(aamount!=bamount)return aamount<bamount;
        else return a<b;
    }
}
int main(){
    vector<string>strs;
    string str;
    while(cin>>str&&str!="\n"){
        strs.push_back(str);
    }
    sort(strs.begin(),strs.end(),strnumcmp);
    int size=strs.size();
    for(int i=0;i<size;i++){
        if(i>0)cout<<" ";
        cout<<strs[i];
    }
}*/
//文件排序
/*struct file{
    string name;
    int size;
    string date;
    string time;
};
bool sortByName(file a,file b){
    return a.name<b.name;
}
bool sortBySize(file a,file b){
    if(a.size==b.size)return a.name<b.name;
    return a.size<b.size;
}
bool sortByTime(file a,file b){
    if(a.date==b.date){
        if(a.time==b.time)
        return a.name<b.name;
        return a.time<b.time;
    }
    return a.date<b.date;
}
int main(){
    int n;
    while(cin>>n&&n!=0){
        getchar();
        vector<file>files;
        for(int i=0;i<n;i++){
            string line;
            getline(cin,line);
            stringstream ss(line);
            file f;
            ss>>f.date>>f.time>>f.size>>f.name;
            files.push_back(f);
        }
        string op;
        getline(cin,op);
        if(op=="LIST /NAME"){sort(files.begin(),files.end(),sortByName);}
        if(op=="LIST /SIZE"){sort(files.begin(),files.end(),sortBySize);}
        if(op=="LIST /TIME"){sort(files.begin(),files.end(),sortByTime);}
        for(int i=0;i<n;i++){
            cout<<files[i].date<<" "<<files[i].time<<setw(17)<<right<<files[i].size<<" "<<files[i].name<<endl;
        }
        cout<<endl;
    }
}*/
//非重复二进制位数
/*int main(){
    int t;
    cin>>t;
    for(int cas=0;cas<t;cas++){
        cout<<"case #"<<cas<<":\n";
        int num;
        cin>>num;
        vector<int>bi;
        while(num>0)
        {bi.push_back(num%2);
        num/=2;}
        int maxcount=1;
        int count=1;
        int size=bi.size();
        for(int i=0;i<size-1;i++){
            if(bi[i]==bi[i+1]){
                count=1;
            }
            else{
                count++;
            }
            maxcount=maxcount>count?maxcount:count;
        }
        cout<<maxcount<<endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int n;
    cin>>n;
    vector<int>a;
    int i=0;
    while(n){
        a.push_back(n%2);
        i++;
        n/=2;
    }
    reverse(a.begin(),a.end());
    for(int j=0;j<i;j++)cout<<a[j];
}*/

/*int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> str(n);
    for(int i=0;i<n;i++){
    getline(cin,str[i]);
    }
    for (int j=0;j<n-1;j++){
        for (int k=0;k<n-1-j;k++){
            if (str[k]>str[k+1]){
                swap(str[k],str[k+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
    cout<<str[i]<<endl;
    }
}*/

/*set<int>s;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        s.insert(k);
    }
    cout<<*s.begin();
}*/
/*vector<int>v;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    cout<<*v.begin();
}*/
/*int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
    string line;
    getline(cin,line);
    cout<<"case #"<<i<<":"<<endl;
    vector<bool>upper;
    string word;
    stringstream ss(line);
    vector<string>cha;
    vector<string>el;
    while(ss>>word){
        if(isupper(word[0])){upper.push_back(true);cha.push_back(word);}
        else {upper.push_back(false);el.push_back(word);}
    }
    sort(cha.begin(),cha.end());
    reverse(cha.begin(),cha.end());
    reverse(el.begin(),el.end());
    for(int m=0;m<upper.size();m++){
        if(upper[m]){
            cout<<*(cha.end()-1)<<" ";
            cha.pop_back();
        }
        else{
            cout<<*(el.end()-1)<<" ";
            el.pop_back();
        }
    }
    cout<<'\n';
    }
}*/
/*bool isAllUppercaseLetters(const string& s) {
    for (char c : s) {
        if (!(c >= 'A' && c <= 'Z')) {
            return false;
        }
    }
    return !s.empty();  // 空字符串不算
}

int main() {
    int T;
    cin >> T;
    cin.ignore();  // 忽略第一行换行符
    
    for (int i = 0; i < T; i++) {
        string line;
        getline(cin, line);  // 读取整行
        
        cout << "case #" << i << ":" << endl;
        
        // 分割单词
        vector<string> words;
        vector<bool> isPureWord;  // 标记是否是纯大写字母单词
        stringstream ss(line);
        string word;
        
        while (ss >> word) {
            words.push_back(word);
            isPureWord.push_back(isAllUppercaseLetters(word));
        }
        
        // 提取所有纯大写字母单词进行排序
        vector<string> pureWords;
        for (size_t j = 0; j < words.size(); j++) {
            if (isPureWord[j]) {
                pureWords.push_back(words[j]);
            }
        }
        
        // 对纯单词进行排序
        sort(pureWords.begin(), pureWords.end());
        
        // 替换回原位置
        int pureIndex = 0;
        for (size_t j = 0; j < words.size(); j++) {
            if (isPureWord[j]) {
                words[j] = pureWords[pureIndex++];
            }
        }
        
        // 输出结果
        for (size_t j = 0; j < words.size(); j++) {
            cout << words[j];
            if (j < words.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> all_numbers(27);
    iota(all_numbers.begin(),all_numbers.end(),1);
    random_device rd;
    mt19937 gen(rd());

    shuffle(all_numbers.begin(),all_numbers.end(),gen);
    vector<int> random_numbers1(all_numbers.begin(),all_numbers.begin()+1);
    cout<<"一等奖:星巴克";
    for(int num:random_numbers1) cout<<num<<" ";
    cout<<endl;
    vector<int> random_numbers2(all_numbers.begin()+1,all_numbers.begin()+5);
    cout<<"二等奖:小积木";
    for(int num:random_numbers2) cout<<num<<" ";
    cout<<endl;
    vector<int> random_numbers3(all_numbers.begin()+5,all_numbers.begin()+11);
    cout<<"三等奖:蜜雪冰城";
    for(int num:random_numbers3) cout<<num<<" ";
    cout<<endl;
    vector<int> random_numbers4(all_numbers.begin()+11,all_numbers.begin()+12);
    cout<<"特等奖:圣诞特供";
    for(int num:random_numbers4) cout<<num<<" ";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
stack<int> s;
/*int main(){
    int n;
    cin>>n;
    while(n--){
    string op;
    int x;
    cin>>op;
    if(op=="push"){
        cin>>x;
        s.push(x);
    }
    else if(op=="pop"){
        if(s.empty())cout<<"Empty\n";
        else s.pop();
    }
    else if(op=="query"){
        if(s.empty())cout<<"Empty\n";
        else cout<<s.top()<<endl;
    }
    else if(op=="size"){
        cout<<s.size()<<endl;
    }
    }
    
    return 0;
}*/
/*int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('||str[i]=='['){
            s.push(str[i]);
        }
        if(str[i]==')'||str[i]==']'){
            if(s.empty()){
                cout<<"false";
                return 0;
            }
            if(str[i]==')'&&s.top()=='(')s.pop();
            else if(str[i]==']'&&s.top()=='[')s.pop();
            else{
                cout<<"false";return 0;
            }
        }
    }
    if(s.empty()){cout<<"true";return 0;}
    else {cout<<"false";return 0;}
}*/
/*int main(){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    for(int i=0;i<str.size();i++){
        if(s.top()=='a'){
            s.pop();
            count--;
        }
        else if(s.top()=='b'){
            s.pop();
            count++;
        }
        if(count<0){
            cout<<"Bad";
            return 0;
        }
    }
    if(count!=0){
            cout<<"Bad";
            return 0;
        }
        else{
            cout<<"Good";
            return 0;
        }
}
*/
/*int main(){
    int T;
    cin>>T;
    for(int j=0;j<T;j++){
    string str;
    cin>>str;

    stack<char> s;
    for(int i=0;i<str.size();i++){
        if(s.empty()){
            s.push(str[i]);
        }
        else if(s.top()==str[i]&&str[i]=='O'){
                s.pop();
            }
        else if(s.top()==str[i]&&str[i]=='o'){
                s.pop();
                if(s.empty()||s.top()!='O')s.push('O');
                else s.pop();
            }
        else{
                s.push(str[i]);
            }
        
    }
    string result="";
        while(!s.empty()){
        result=s.top()+result;
        s.pop();
        }
        
        cout<<result<<endl;
    }
    return 0;
}
*/
    /*bool isValid(string s) {
        // write code here
        stack<char> st;
        for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        if(s[i]==')'||s[i]==']'||s[i]=='}'){
            if(st.empty()){
                return false;
            }
            if(s[i]==')'&&st.top()=='(')st.pop();
            else if(s[i]==']'&&st.top()=='[')st.pop();
            else if(s[i]=='}'&&st.top()=='{')st.pop();
            else{return false;}
        }
    }
    if(st.empty()){return true;}
    else {return false;}
    }
};*/
/*#include <cctype>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 给定一个后缀表达式，返回它的结果
     * @param str string字符串 
     * @return long长整型
     */
/* long long legalExp(string str) {
        // write code her
        stack<long long>s;
        long long n=0;
        for(int i=0;i<str.size();i++){
            if(isdigit(str[i])){
                n=n*10+str[i]-'0';
            }
            else if(str[i]=='#'){
                s.push(n);
                n=0;
            }
            else if(str[i]=='+'){
                long long a=s.top();s.pop();
                long long b=s.top();s.pop();
                s.push(a+b);
            }else if(str[i]=='-'){
                long long a=s.top();s.pop();
                long long b=s.top();s.pop();
                s.push(b-a);
            }else if(str[i]=='*'){
                long long a=s.top();s.pop();
                long long b=s.top();s.pop();
                s.push(a*b);
            }
        }
        return s.top();
    }
};*/
/*class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 返回表达式的值
     * @param s string字符串 待计算的表达式
     * @return int整型
     */
    /*int solve(string s) {
        // write code here
        stack<char> yunsuan;
        stack<int> shuzi;
        unordered_map<char, int> priority = {
            {'+', 1}, {'-', 1}, {'*', 2}
        };
       
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                int j = i;
                string str2;
                while (j < s.size() && isdigit(s[j])) {
                    str2 += s[j];
                    j++;
                }
                shuzi.push(stoi(str2));
                i = j - 1;
            } else if (s[i] == '(') {
                yunsuan.push(s[i]);
            } else if (s[i] == ')') {
                while (!yunsuan.empty() && yunsuan.top() != '(') {
                    calculate(shuzi, yunsuan);
                }
                if (!yunsuan.empty() && yunsuan.top() == '(') {
                    yunsuan.pop();
                }
            } else if (s[i] == '+' || s[i] == '-' || s[i] == '*') {
                while (!yunsuan.empty() && yunsuan.top() != '('
                    && priority[yunsuan.top()] >= priority[s[i]]) {
                    calculate(shuzi, yunsuan);
                }
                yunsuan.push(s[i]);
            }
        }
       
        while (!yunsuan.empty()) {
            calculate(shuzi, yunsuan);
        }
       
        return shuzi.top();
    }
   
private:
    void calculate(stack<int>& num,stack<char>& op) {
        if (num.size() < 2 || op.empty()) {
            return;
        }
        int b = num.top(); num.pop();
        int a = num.top(); num.pop();
        char oper = op.top(); op.pop();
        int result = 0;
        switch (oper) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
        }
        num.push(result);
    }
};*/
/*int main(){
    long n;
    cin>>n;
    long top=n;
    while(n--){
        int a;
        cin>>a;
        s.push(a);
        while(!s.empty() &&s.top()==top){
            cout<<s.top()<<" ";
            top--;
            s.pop();
        }
    }
    while(s.size()>1){
        cout<<s.top()<<" ";
        s.pop();
    }
    if(s.size()==1){
        cout<<s.top();
    }
}*/
/*#include <algorithm>
class Solution {
public:
stack<int> s;
stack<int> mi;
    void push(int value) {
        s.push(value);
        if((mi.empty()||value<=mi.top())){
            mi.push(value);
        }
    }
    void pop() {
        if((s.top()==mi.top())){
            mi.pop();
        }
        s.pop();
    }
    int top() {
        return s.top();
    }
    int min() {
        return mi.top();
    }
};*/
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int count=0;
        int a[100010];
        int b[100010];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            s.push(a[i]);
            while(!s.empty()&&b[count]==s.top()){
                s.pop();
                count++;
            }
        }
        if(s.empty())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        while(!s.empty()) s.pop();
    }
}
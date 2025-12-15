#include <bits/stdc++.h>
using namespace std;
/*queue<int> q;
int main(){
    int n;
    cin>>n;
    while(n--){
    int op;
    int x;
    cin>>op;
    if(op==1){
        cin>>x;
        q.push(x);
    }
    else if(op==2){
        if(q.empty())cout<<"ERR_CANNOT_POP\n";
        else q.pop();
    }
    else if(op==3){
        if(q.empty())cout<<"ERR_CANNOT_QUERY\n";
        else cout<<q.front()<<endl;
    }
    else if(op==4){
        cout<<q.size()<<endl;
    }
    }
    
    return 0;
}*/
/*    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // write code here
        queue<int>stu;
        stack<int>san;
        for(int i=0;i<students.size();i++){
            stu.push(students[i]);
            san.push(sandwiches[sandwiches.size()-1-i]);
        }
        int count=0;
        while(!stu.empty()&&count<stu.size()){
            if(stu.front()==san.top()){
                stu.pop();san.pop();
                count=0;
            }
            else{
                stu.push(stu.front());stu.pop();count++;
            }
        }
        return stu.size();
    }*/
/*int timeRequiredToBuy(vector<int>& tickets, int k) {
        // write code here
        queue<int>q;
        for(int i=0;i<tickets.size();i++)
        q.push(tickets[i]);
        int n=k+1;
        int count=0;
        int m=tickets[k]-1;
        while(n--){
            if(q.front()==1){
                q.pop();
            }
            else if(q.front()>1){
                q.push(q.front()-1);
                q.pop();
            }
            count++;
        }
        while(m--){
            int l=q.size();
            while(l--){
            if(q.front()==1){
                q.pop();
            }
            else if(q.front()>1){
                q.push(q.front()-1);
                q.pop();
            }
            count++;
        }
        }
        return count;
    }*/

    /*int timeRequiredToBuy(vector<int>& tickets, int k) {
    int time = 0;
    int n = tickets.size();
    
    for (int i = 0; i < n; i++) {
        if (i <= k) {
            // k及之前的元素：能买到min(tickets[i], tickets[k])张
            time += min(tickets[i], tickets[k]);
        } else {
            // k之后的元素：能买到min(tickets[i], tickets[k]-1)张
            time += min(tickets[i], tickets[k] - 1);
        }
    }
    
    return time;
}*/

/*class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        while(stack1.size()>1){
        stack2.push(stack1.top());
        stack1.pop();
    }
    int n=stack1.top();
    stack1.pop();
    while(!stack2.empty()){
        stack1.push(stack2.top());
        stack2.pop();
    }
    return n;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};*/

#include <bits/stdc++.h>
using namespace std;

/*string predictVictory(string s) {
    queue<char> q;

    int shutd = 0; 
    int shutr = 0;  

    for(int i=0;i<s.size();i++){
        q.push(s[i]);
    }
    while(!q.empty()){
    int n = q.size();
    int countd=0;
    int countr=0;
    for(int i = 0; i < n; i++){
    if(q.front()=='R'&&shutr>0){
        shutr--;
        q.pop();
    }
    if(q.front()=='D'&&shutd==0){
        shutr++;
        q.push('D');
        q.pop();
        countd++;
    }
    if(q.front()=='R'&&shutr==0){
        shutd++;
        q.push('R');
        q.pop();
        countr++;
    }
    if(q.front()=='D'&&shutd>0){
        shutd--;
        q.pop();
    }
    }
    if(countd == 0) return "Red";
    if(countr == 0) return "Dark";
    }
    return "Dark";
}*/
/*string predictVictory(string s) {
    int n = s.length();
    queue<int> qR, qD;
    
    // 初始化队列，存储索引
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R')
            qR.push(i);
        else
            qD.push(i);
    }
    
    // 模拟过程
    while (!qR.empty() && !qD.empty()) {
        int rIdx = qR.front();
        int dIdx = qD.front();
        
        // 谁索引小谁先行动
        if (rIdx < dIdx) {
            // R 行动，禁止一个 D
            qD.pop();
            qR.pop();
            // R 进入下一轮
            qR.push(rIdx + n);
        } else {
            // D 行动，禁止一个 R
            qR.pop();
            qD.pop();
            // D 进入下一轮
            qD.push(dIdx + n);
        }
    }
    
    return qR.empty() ? "Dark" : "Red";
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<int>a;
    queue<int>q;
    int count=0;
    while(n--){
        int num;
        cin>>num;
        bool equal=false;
        queue<int>q1=q;
        while(!q1.empty()){
            if(num==q1.front()){
                equal=true;
                break;
            }
            q1.pop();
        }
        if(!equal){
            count++;
            if(q.size()==m){
                q.pop();
            }
            q.push(num);
        }      
    }
    cout<<count;
}*/
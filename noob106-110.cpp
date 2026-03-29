/*#include<bits/stdc++.h>
using namespace std;
priority_queue<int>  pq;
int main(){
    int q;
    cin>>q;
    while(q--){
        int op;
        cin>>op;
        if(op==1){
            int x;
            cin>>x;
            x=-x;
            pq.push(x);
        }
        else if(op==2){
            cout<<-pq.top()<<endl;
        }
        else if(op==3){
            pq.pop();
        }
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;

struct node{
    int chinese, math, english, sum;
};

bool operator<(node a, node b){
    // TODO: 实现比较逻辑，按照总分、语文、数学、英语的优先级排序
    if(a.sum!=b.sum)return a.sum<b.sum;
    else{
        if(a.chinese!=b.chinese)return a.chinese<b.chinese;
        else{
            if(a.math!=b.math)return a.math<b.math;
            else{
                if(a.english!=b.english)return a.english<b.english;
                else return false;
    }
    }
    }
    return true;
    }
    


priority_queue<node> s;
void insertValue(int chinese, int math, int english){
    s.push({chinese,math,english,chinese+math+english});
    // TODO: 实现插入操作
}

void deleteValue(){
    s.pop();
    // TODO: 实现删除操作
}

node getTop(){
    return s.top();
    // TODO: 返回成绩最好的学生
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q,op;
    int x, y, z;
    cin>>q;
    while(q--){
        cin>>op;
        if(op==1){
            cin>>x>>y>>z;
            insertValue(x, y, z);
        }
        if(op==2){
            node tmp = getTop();
            cout<<tmp.chinese<<" "<<tmp.math<<" "<<tmp.english<<endl;
        }
        if(op==3){
           deleteValue();
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
priority_queue<string, vector<string>, greater<string>> s;
void insertValue(string x){
    s.push(x);
    // TODO: 实现插入操作
}

void deleteValue(){
    s.pop();
    // TODO: 实现删除操作
}

string getTop(){
    return s.top();
    // TODO: 返回字典序最小的字符串
}

int main(){
    int q,op;
    string x;
    cin>>q;
    while(q--){
        cin>>op;
        if(op==1){
            cin>>x;
            insertValue(x);
        }
        if(op==2){
            cout<<getTop()<<endl;
        }
        if(op==3){
           deleteValue();
        }
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
multiset<int>  pq;
int main(){
    int q;
    cin>>q;
    while(q--){
        int op;
        cin>>op;
        if(op==1){
            int x;
            cin>>x;
            pq.insert(x);
        }
        else if(op==2){
            cout<<*pq.begin()<<endl;
        }
        else if(op==4){
            pq.erase(pq.begin());
        }
        else if(op==3){
            cout<<*(--pq.end())<<endl;
        }
        else if(op==5){
            pq.erase(--pq.end());
        }
    }
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    multiset<int> account;
    while(n--){
        int score;
        cin>>score;
        account.insert(score);
    }

    while(m--){
        int add;
        int temp=*account.begin();
        account.erase(account.begin());
        cin>>add;
        temp+=add;
        account.insert(temp);
        cout<<*(--account.end())<<endl;
    }
}
/**/
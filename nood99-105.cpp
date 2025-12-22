
/*#include<bits/stdc++.h>
using namespace std;
set<int>s;
void insertValue(int x){
    s.insert(x);
}
void eraseValue(int x){
    s.erase(x);
}
int xInSet(int x){
    return s.count(x);
}
int sizeOfSet(){
    return s.size();
}
int getPre(int x){
    auto it=s.lower_bound(x);
    if(it==s.begin())return -1;
    else {it--;return *it;}
}
int getBack(int x){
    auto it=s.upper_bound(x);
    if(it==s.end())return -1;
    else return *it;
}

int main(){
    int q,op,x;
    cin>>q;
    while(q--){
        cin>>op;
        if(op==1){
            cin>>x;
            insertValue(x);
        }
        if(op==2){
            cin>>x;
            eraseValue(x);
        }
        if(op==3){
            cin>>x;
            if(xInSet(x)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
        if(op==4){
            cout<<sizeOfSet()<<endl;
        }
        if(op==5){
            cin>>x;
            cout<<getPre(x)<<endl;
        }
        if(op==6){
            cin>>x;
            cout<<getBack(x)<<endl;
        }
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
multiset<int>s;
void insertValue(int x){
    s.insert(x);
}
void eraseValue(int x){
    if(s.count(x)!=0)s.erase(s.find(x));
}
int xInSet(int x){
    return s.count(x);
}
int sizeOfSet(){
    return s.size();
}
int getPre(int x){
    auto it=s.lower_bound(x);
    if(it==s.begin())return -1;
    else {it--;return *it;}
}
int getBack(int x){
    auto it=s.upper_bound(x);
    if(it==s.end())return -1;
    else return *it;
}

int main(){
    int q,op,x;
    cin>>q;
    while(q--){
        cin>>op;
        if(op==1){
            cin>>x;
            insertValue(x);
        }
        if(op==2){
            cin>>x;
            eraseValue(x);
        }
        if(op==3){
            cin>>x;
            cout<<xInSet(x)<<endl;
        }
        if(op==4){
            cout<<sizeOfSet()<<endl;
        }
        if(op==5){
            cin>>x;
            cout<<getPre(x)<<endl;
        }
        if(op==6){
            cin>>x;
            cout<<getBack(x)<<endl;
        }
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main(){
    int q,op,x;
    cin>>q;
    while(q--){
        cin>>op;
        if(op==1){
            cin>>x;
            if(s.count(x)!=0)cout<<"Already Exist"<<endl;
            else s.insert(x);
        }
        if(op==2){
            cin>>x;
            if(s.empty())cout<<"Empty"<<endl;
            else{
                auto low=s.lower_bound(x);
                auto up=s.upper_bound(x);
                if(*low!=x&&low!=s.begin())low--;
                if(fabs(*low-x)>fabs(*up-x)){cout<<*up<<endl;s.erase(*up);}
                else {cout<<*low<<endl;s.erase(*low);}
            }
        }
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    int count=0;
    cin>>n>>c;
    multiset<int>s;
    while(n--){
        int a;
        cin>>a;
        s.insert(a);
        count+=s.count(a-c);
        count+=s.count(c+a);
    }
    cout<<count;
}*/
/*class Solution {

    bool happynum(int n) {
        // write code here
        int sum=0;
        while(n){
        sum+=(n%10)*(n%10);
        n/=10;
        }
        if(sum==1)return true;
        else if(sum==4)return false;
        else return happynum(sum);


    }
};*/
/*    int numJewelsInStones(string jewels, string stones) {
        // write code here
        set<char>j;
        for(int i;i<jewels.size();i++){
            j.insert(jewels[i]);
        }
        int count=0;
        for(int i;i<stones.size();i++){
            if(j.count(stones[i]))count++;
        }
        return count;
    }*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        vector<int>x;
        while(n--){
            int a;
            cin>>a;
            s.insert(a);
            x.push_back(a);
        }
        vector<int>v;
        for(int i=0;i<x.size();i++){
            if(s.count(x[i])!=0){
            cout<<x[i]<<" ";
            s.erase(x[i]);
            }
        }
        cout<<endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;next=nullptr;
    }
};

/*int a[5]={5,2,7,7,8};
int main(){
auto head=new ListNode(a[0]);
auto tail=head;
for(int i=1;i<5;i++){
    auto temp= new ListNode(a[i]);
    tail-> next=temp;
    tail=temp;
}
auto p=head;
while(p!=nullptr){
    cout<<p->val<<" ";
    p=p->next;
}
}*/

/*int a[4]={5,2,7,7};
int main(){
auto head=new ListNode(a[0]);
auto tail=head;
for(int i=1;i<4;i++){
    auto temp= new ListNode(a[i]);
    tail-> next=temp;
    tail=temp;
}
auto p=head;
int pos=3;
while(pos--){
    p=p->next;
}
ListNode* injectNode= new ListNode(8);
auto pp=p->next;
p->next=injectNode;
injectNode->next=pp;
p=head;
pos=1;
while(pos--){
    p=p->next;
}
pp=(p->next)->next;
p->next=pp;
auto it=head;
while(it!=nullptr){
    cout<<it->val<<" ";
    it=it->next;
}
}*/
vector<int>v;
ListNode* swapPairs(ListNode* head) {
        // write code here
auto p=head;
while(p!=nullptr){
    v.push_back(p->val);
    p=p->next;
}
if(v.size()==0) return nullptr;
for(int i=0;i<v.size();i+=2){
    if(i+1<v.size()){
        swap(v[i],v[i+1]);
    }
}

    auto ret=new ListNode(v[0]);
    auto tail=ret;
    for(int i=1;i<v.size();i++){
        auto temp= new ListNode(v[i]);
        tail->next=temp;
        tail=temp;
    }
 return ret;
    }
/*unordered_map<ListNode*,bool>mp;
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    // 在这里补充代码
    while(headA!=nullptr){
        mp[headA]=true;
        headA=headA->next;
    }
    while(headB!=nullptr){
        if(mp[headB])return headB;
        headB=headB->next;
    }
    return nullptr;
}*/
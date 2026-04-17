#include <iostream>
using namespace std;
const int maxlist=100;
//顺序实现列表
template <class ListEntry>
class ArrayList{
    public:
    ArrayList();
    bool empty()const;
    bool full()const;
    int size()const;
    void clear();
    bool insert(const int pos,const ListEntry &item);
    bool remove(const int pos,ListEntry &item);
    bool retrieve(const int pos,ListEntry &item);
    bool replace(const int pos,ListEntry &item);
    void traverse(void (*operation)(ListEntry&));
    protected:
    int count;
    ListEntry entry[maxlist];
};
template <class ListEntry>
ArrayList<ListEntry>::ArrayList(){
    count=0;
}
template <class ListEntry>
bool ArrayList<ListEntry>::empty()const{
    return count==0;
}
template <class ListEntry>
bool ArrayList<ListEntry>::full()const{
    return count==maxlist;
}
template <class ListEntry>
int ArrayList<ListEntry>::size()const{
    return count;
}
template <class ListEntry>
void ArrayList<ListEntry>::clear(){
    count=0;
}
template <class ListEntry>
bool ArrayList<ListEntry>::insert(const int pos,const ListEntry &item){
    if(full()||pos<0||pos>count)return false;
    for(int i=count-1;i>=pos;i--){
        entry[i+1]=entry[i];
    }
    entry[pos]=item;
    count++;
    return true;
}
template <class ListEntry>
bool ArrayList<ListEntry>::remove(const int pos,ListEntry &item){
    if(empty()||pos<0||pos>count)return false;
    item=entry[pos];
    for(int i=pos;i<count;i++){
        entry[i]=entry[i+1];
    }
    count--;
    return true;
}
template <class ListEntry>
bool ArrayList<ListEntry>::retrieve(const int pos,ListEntry &item){
    if(pos<0||pos>count)return false;
    item=entry[pos];
    return true;
}
template <class ListEntry>
bool ArrayList<ListEntry>::replace(const int pos,ListEntry &item){
    if(pos<0||pos>count)return false;
    entry[pos]=item;
    return true;
}
template <class ListEntry>
void ArrayList<ListEntry>::traverse(void (*operation)(ListEntry&)){
    for(int i=0;i<count;i++){
        (*operation)(entry[i]);
    }
}
//链表实现列表
template <class NodeEntry>
struct myNode{
    public:
    NodeEntry entry;
    myNode<NodeEntry> *next;
    myNode();
    myNode(NodeEntry val,myNode<NodeEntry>* ptr=NULL);
};
template <class NodeEntry>
myNode<NodeEntry>::myNode(){
    next=NULL;
}
template <class NodeEntry>
myNode<NodeEntry>::myNode(NodeEntry val,myNode<NodeEntry>* ptr){
    entry=val;
    next=ptr;
}
template <class ListEntry>
class NodeList{
    public:
    NodeList();
    ~NodeList();
    bool empty()const;
    bool full()const;
    int size()const;
    void clear();
    bool insert(const int pos,const ListEntry &item);
    bool remove(const int pos,ListEntry &item);
    bool retrieve(const int pos,ListEntry &item);
    bool replace(const int pos,ListEntry &item);
    void traverse(void (*operation)(ListEntry&));
    protected:
    int count;
    myNode<ListEntry> *head;
    myNode<ListEntry> *setpos(int pos)const;
};
template <class ListEntry>
myNode<ListEntry> *NodeList<ListEntry>::setpos(int pos)const{
    if(pos<0||pos>=count)return NULL;
    myNode<ListEntry> *q=head;
    for(int i=0;i<pos;i++)q=q->next;
    return q;
}
template <class ListEntry>
NodeList<ListEntry>::NodeList(){
    count=0;
    head=NULL;
}
template <class ListEntry>
NodeList<ListEntry>::~NodeList(){
    while(head){
        myNode<ListEntry>*temp=head;
        head=head->next;
        delete temp;
    }
}
template <class ListEntry>
bool NodeList<ListEntry>::empty()const{
    return count==0;
}
template <class ListEntry>
bool NodeList<ListEntry>::full()const{
    return count==maxlist;
}
template <class ListEntry>
int NodeList<ListEntry>::size()const{
    return count;
}
template <class ListEntry>
void NodeList<ListEntry>::clear(){
    while(head){
        myNode<ListEntry>*temp=head;
        head=head->next;
        delete temp;
    }
    count=0;
}
template <class ListEntry>
bool NodeList<ListEntry>::insert(const int pos,const ListEntry &item){
    if(full()||pos<0||pos>count)return false;
    myNode<ListEntry>*newnode,*before,*after;
    if(pos>0){
        before=setpos(pos-1);
        after=before->next;
    }
    else after=head;
    newnode=new myNode<ListEntry>(item,after);
    if(newnode==NULL)return false;
    if(pos==0)head=newnode;
    else before->next=newnode;
    count++;
    return true;
}
template <class ListEntry>
bool NodeList<ListEntry>::remove(const int pos,ListEntry &item){
    if(empty()||pos<0||pos>=count)return false;
    myNode<ListEntry>*temp,*before;
    if(pos==0){
        temp=head;
        head=head->next;
    }
    else{
        before=setpos(pos-1);
        temp=before->next;
        before->next=temp->next;
    }
    item=temp->entry;
    delete temp;
    count--;
    return true;
}
template <class ListEntry>
bool NodeList<ListEntry>::retrieve(const int pos,ListEntry &item){
    if(pos<0||pos>=count)return false;
    item=setpos(pos)->entry;
    return true;
}
template <class ListEntry>
bool NodeList<ListEntry>::replace(const int pos,ListEntry &item){
    if(pos<0||pos>=count)return false;
    setpos(pos)->entry=item;
    return true;
}
template <class ListEntry>
void NodeList<ListEntry>::traverse(void (*operation)(ListEntry&)){
    myNode<ListEntry>*q=head;
    while(q){
        (*operation)(q->entry);
        q=q->next;
    }
}
int main(){
    int m,n;
    NodeList<int>list;
    while(cin>>m){
        if(m==-1)break;
        int s=list.size();
        list.insert(s,m);
    }
    while(cin>>m>>n){
        if(m==-1&&n==-1)break;
        list.insert(m,n);
    }
    while(cin>>m){
        if(m==-1)break;
        int temp;
        list.remove(m,temp);
    }
    while(cin>>m>>n){
        if(m==-1&&n==-1)break;
        list.replace(m,n);
    }
    int size=list.size();
    for(int i=0;i<size;i++){
        int k;
        list.retrieve(i,k);
        cout<<k;
        if(i<size-1)cout<<" ";
    }
}
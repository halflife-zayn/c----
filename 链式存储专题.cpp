#include <iostream>
using namespace std;
typedef int NodeEntry;
struct myNode{
    NodeEntry entry;
    myNode *next;
    myNode();
    myNode(NodeEntry val,myNode* ptr=NULL);
};
myNode::myNode(){
    next=NULL;
}
myNode::myNode(NodeEntry val,myNode* ptr){
    entry=val;
    next=ptr;
}
//删重复
int main(){
    int n;
    cin>>n;
    myNode *head=NULL;
    myNode *tail=NULL;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        myNode *newNode=new myNode(num);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    int target=0;
    myNode *goal=head;
    while(goal!=NULL){
        myNode* current=goal;
        while(current!=NULL&&current->next!=NULL){
        if(current->next->entry==goal->entry){
            myNode *newNode=current->next->next;
            current->next=newNode;
        }else{
            current=current->next;
        }
    }
    goal=goal->next;
}
    myNode* current=head;
    while(current!=NULL){
        cout<<current->entry<<" ";
        current=current->next;
    }
}
/**/
//倒置
/*int main(){
    int n;
    cin>>n;
    myNode *head=NULL;
    myNode *tail=NULL;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        myNode *newNode=new myNode(num);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    myNode *pre=NULL;
	myNode *current=head;
	myNode *nex=NULL;
	while(current!=NULL){
		nex=current->next;
		current->next=pre;
		pre=current;
		current=nex;
	}
	head=pre;
	current=head;
	while(current!=NULL){
		cout<<current->entry;
		if(current->next!=NULL){
			cout<<" ";
		}
		current=current->next;
	}
}*/
//约瑟夫问题
/*int main(){
    int n;
    cin>>n;
    myNode *head=NULL;
    myNode *tail=NULL;
    int m;
    cin>>m;
    for(int i=1;i<=n;i++){
        myNode *newNode=new myNode(i);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    tail->next=head;
    myNode* current=head;
    myNode* pre=tail;
    int i=0;
    while(current->next!=current){
        i=(i+1)%m;
        if(i==0){
            pre->next=current->next;
            current=current->next;
            
        }
        else{
            current=current->next;
            pre=pre->next;
        }
    }
    cout<<current->entry;
}*/
//删除
/*int main(){
    int n;
    cin>>n;
    myNode *head=NULL;
    myNode *tail=NULL;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        myNode *newNode=new myNode(num);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    int target=0;
    cin>>target;
    while(head!=NULL&&head->entry==target){
        head=head->next;
    }
    myNode* current=head;
    while(current!=NULL&&current->next!=NULL){
        if(current->next->entry==target){
            myNode *newNode=current->next->next;
            current->next=newNode;
        }else{
            current=current->next;
        }
    }
    current=head;
    while(current!=NULL){
        cout<<current->entry<<" ";
        current=current->next;
    }
}*/
//插入
/*int main(){
    int n;
    cin>>n;
    myNode *head=NULL;
    myNode *tail=NULL;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        myNode *newNode=new myNode(num);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    int target=0,change=0;
    cin>>target>>change;
    myNode* current=head;
    int pos=1;
    while(current!=NULL){
        if(current->entry==target){
            cout<<pos<<" ";
            myNode *newNode=new myNode(change);
            myNode *nextNode=current->next;
            newNode->next=nextNode;
            current->next=newNode;
            current=newNode->next;
            pos+=2;
        }else{
            current=current->next;
            pos++;
        }
            
    }
}*/


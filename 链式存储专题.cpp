#include <iostream>
using namespace std;
typedef int NodeEntry;
struct myNode{
    public:
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
//链式存储的栈
typedef int StackEntry;
class Stack{
    public:
    Stack();
    bool empty()const;
    bool push(const StackEntry &item);
    bool pop();
    StackEntry top()const;
    int size()const;
    void clear();
    protected:
    myNode *head;
};
Stack::Stack(){
    head=NULL;
}
bool Stack::push(const StackEntry &item){
        myNode *newhead=new myNode(item,head);
        if(newhead==NULL)return false;
        head=newhead;
        return true;
}
bool Stack::pop(){
    myNode *currenthead=head;
    if(head==NULL)return false;
    head=currenthead->next;
    delete currenthead;
    return true;
}
bool Stack::empty()const{
    return head==NULL;
}
StackEntry Stack::top()const{
    return head->entry;
}
int Stack::size()const{
    myNode *currenthead=head;
    int count=0;
    while(currenthead!=NULL){
        count++;
        currenthead=currenthead->next;
    }
    return count;
}
void Stack::clear(){
    while(!empty()){
        pop();
    }
}
//链式存储的队列
typedef int QueueEntry;
class Queue{
    public:
    Queue();
    bool empty()const;
    bool append(const QueueEntry &item);
    bool serve();
    QueueEntry retrieve()const;
    int size()const;
    void clear();
    protected:
    myNode *head;
    myNode *tail;
};
Queue::Queue(){
    head=NULL;
    tail=NULL;
}
bool Queue::append(const QueueEntry &item){
        myNode *newhead=new myNode(item,NULL);
        if(newhead==NULL)return false;
        if(head==NULL){
            head=newhead;
            tail=newhead;
        }
        else{
        tail->next=newhead;
        tail=tail->next;
        }
        return true;
}
bool Queue::serve(){
    myNode *currenthead=head;
    if(head==NULL)return false;
    head=currenthead->next;
    delete currenthead;
    return true;
}
bool Queue::empty()const{
    return head==NULL;
}
QueueEntry Queue::retrieve()const{
    return head->entry;
}
int Queue::size()const{
    myNode *currenthead=head;
    int count=0;
    while(currenthead!=NULL){
        count++;
        currenthead=currenthead->next;
    }
    return count;
}
void Queue::clear(){
    while(!empty()){
        serve();
    }
}
void printTerm(int coeff,int exp,bool &isFirst){
	if(coeff==0)return;
	if(isFirst){
		isFirst=false;
		if(coeff<0)cout<<"-";
	}else{
		if(coeff>0)cout<<"+";
		else cout<<"-";
	}
	int absCoeff=(coeff>0)?coeff:-coeff;
	if(exp==0){
		cout<<absCoeff;
	}else if(exp==1){
		if(absCoeff==1)cout<<"X";
		else cout<<absCoeff<<"X";
	}else{
		if(absCoeff==1)cout<<"X^"<<exp;
		else cout<<absCoeff<<"X^"<<exp;
	}
}
int main(){
	Queue xishu1,xishu2,zhishu1,zhishu2;
	char op;
	cin>>op;
	int xishu,zhishu;
	while(cin>>xishu>>zhishu){
		if(xishu==0&&zhishu==0)break;
		xishu1.append(xishu);
		zhishu1.append(zhishu);
	}
	while(cin>>xishu>>zhishu){
		if(xishu==0&&zhishu==0)break;
		xishu2.append(xishu);
		zhishu2.append(zhishu);
	}
	if(op=='+'){
		bool isFirst=true;
		while(!zhishu1.empty()&&!zhishu2.empty()){
			int exp1=zhishu1.retrieve();
			int exp2=zhishu2.retrieve();
			int coeff1=xishu1.retrieve();
			int coeff2=xishu2.retrieve();
			if(exp1>exp2){
				printTerm(coeff1,exp1,isFirst);
				xishu1.serve();
				zhishu1.serve();
			}else if(exp2>exp1){
				printTerm(coeff2,exp2,isFirst);
				xishu2.serve();
				zhishu2.serve();
			}else{
				int sum=coeff1+coeff2;
				printTerm(sum,exp1,isFirst);
				xishu1.serve();
				zhishu1.serve();
				xishu2.serve();
				zhishu2.serve();
			}
		}
		while(!zhishu1.empty()){
			printTerm(xishu1.retrieve(),zhishu1.retrieve(),isFirst);
			xishu1.serve();
			zhishu1.serve();
		}
		while(!zhishu2.empty()){
			printTerm(xishu2.retrieve(),zhishu2.retrieve(),isFirst);
			xishu2.serve();
			zhishu2.serve();
		}
		if(isFirst){
			cout<<"0";
		}
		cout<<endl;
	}
    if(op=='-'){
		bool isFirst=true;
		while(!zhishu1.empty()&&!zhishu2.empty()){
			int exp1=zhishu1.retrieve();
			int exp2=zhishu2.retrieve();
			int coeff1=xishu1.retrieve();
			int coeff2=xishu2.retrieve();
			if(exp1>exp2){
				printTerm(coeff1,exp1,isFirst);
				xishu1.serve();
				zhishu1.serve();
			}else if(exp2>exp1){
				printTerm(-coeff2,exp2,isFirst);
				xishu2.serve();
				zhishu2.serve();
			}else{
				int sum=coeff1-coeff2;
				printTerm(sum,exp1,isFirst);
				xishu1.serve();
				zhishu1.serve();
				xishu2.serve();
				zhishu2.serve();
			}
		}
		while(!zhishu1.empty()){
			printTerm(xishu1.retrieve(),zhishu1.retrieve(),isFirst);
			xishu1.serve();
			zhishu1.serve();
		}
		while(!zhishu2.empty()){
			printTerm(-xishu2.retrieve(),zhishu2.retrieve(),isFirst);
			xishu2.serve();
			zhishu2.serve();
		}
		if(isFirst){
			cout<<"0";
		}
		cout<<endl;
	}
    else if(op=='*'){
	const int MAX_EXP=2000;
	int coeffs[MAX_EXP+1]={0};
	Queue tempXishu1=xishu1,tempZhishu1=zhishu1;
	Queue tempXishu2=xishu2,tempZhishu2=zhishu2;
	int terms1[100][2],terms2[100][2];
	int count1=0,count2=0;
	while(!tempZhishu1.empty()){
		terms1[count1][0]=tempXishu1.retrieve();
		terms1[count1][1]=tempZhishu1.retrieve();
		tempXishu1.serve();
		tempZhishu1.serve();
		count1++;
	}
	while(!tempZhishu2.empty()){
		terms2[count2][0]=tempXishu2.retrieve();
		terms2[count2][1]=tempZhishu2.retrieve();
		tempXishu2.serve();
		tempZhishu2.serve();
		count2++;
	}
	for(int i=0;i<count1;i++){
		for(int j=0;j<count2;j++){
			int exp=terms1[i][1]+terms2[j][1];
			int coeff=terms1[i][0]*terms2[j][0];
			coeffs[exp]+=coeff;
		}
	}
	bool isFirst=true;
	for(int exp=MAX_EXP;exp>=0;exp--){
		if(coeffs[exp]!=0){
			printTerm(coeffs[exp],exp,isFirst);
		}
	}
	if(isFirst){
		cout<<"0";
	}
	cout<<endl;
}
}
		
//删重复
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
}*/
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


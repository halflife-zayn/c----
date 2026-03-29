#include <iostream>
#include <sstream>
#include <string>
using namespace std;
const int maxCount=100;
class myqueue{
    private:
    int count;
    int front,rear;
    int array[maxCount];
    public:
    myqueue();
    bool append(const int &item);
    bool serve();
    bool retrieve(int& item)const;
    bool empty() const;
    int size() const;
};
myqueue::myqueue(){
    count=0;
    rear=maxCount-1;
    front=0;
}
bool myqueue::append(const int &item){
    if(count>=maxCount)return false;
    count++;
    rear=(rear+1)%maxCount;
    array[rear]=item;
    return true;
}
bool myqueue::serve(){
    if(count<=0)return false;
    count--;
    front=(front+1)%maxCount;
    return true;
}
bool myqueue::retrieve(int& item)const{
    if(count==0)return false;
    item=array[front];
    return true;
}
bool myqueue::empty()const{
    return count==0;
}
int myqueue::size()const{
    return count;
}

/*int main(){
    int t;
    int count=0;
    while(cin>>t){
        if(t==0)break;
        count++;
        cout<<"Scenario #"<<count<<endl;
        cin.ignore();
        string line;myqueue teams[t+1];string op;int teamnum;int membernum;myqueue mainteam;
        while(getline(cin,line)){
        if(line=="STOP"){
            break;
        }
        else{
            stringstream ss(line);
            ss>>op;
            if(op=="DEQUEUE"){
                int frontteam;
                if(mainteam.retrieve(frontteam)){
                    int frontmember;
                    teams[frontteam].retrieve(frontmember);
                    cout<<frontmember<<endl;
                    teams[frontteam].serve();
                    if(teams[frontteam].empty()){
                        mainteam.serve();
                    }
                }
            }
            else if(op=="ENQUEUE"){
            ss>>teamnum>>membernum;
            if(teams[teamnum].empty())mainteam.append(teamnum);
            teams[teamnum].append(membernum);
        }
        }
        }
        cout<<endl;
    }
}*/

/*const int maxCount=100;
class myqueue{
    private:
    int count;
    int front,rear;
    char array[maxCount];
    public:
    myqueue();
    bool append_front(const char &item);
    bool append_rear(const char &item);
    bool serve_front();
    bool serve_rear();
    bool retrieve_front(char& item)const;
    bool retrieve_rear(char& item)const;
    bool empty() const;
    int size() const;
};
myqueue::myqueue(){
    count=0;
    rear=maxCount-1;
    front=0;
}
bool myqueue::append_front(const char &item){
    if(count>=maxCount)return false;
    count++;
    front=(front-1+maxCount)%maxCount;
    array[front]=item;
    return true;
}
bool myqueue::append_rear(const char &item){
    if(count>=maxCount)return false;
    count++;
    rear=(rear+1)%maxCount;
    array[rear]=item;
    return true;
}
bool myqueue::serve_front(){
    if(count<=0)return false;
    count--;
    front=(front+1)%maxCount;
    return true;
}
bool myqueue::serve_rear(){
    if(count<=0)return false;
    count--;
    rear=(rear-1+maxCount)%maxCount;
    return true;
}
bool myqueue::retrieve_front(char& item)const{
    if(count==0)return false;
    item=array[front];
    return true;
}
bool myqueue::retrieve_rear(char& item)const{
    if(count==0)return false;
    item=array[rear];
    return true;
}
bool myqueue::empty()const{
    return count==0;
}
int myqueue::size()const{
    return count;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char c;
    myqueue q;
    string line;
    getline(cin,line);
    istringstream ss(line);
    while(ss>>c){
        if(q.size()>=n){
            q.serve_front();
        }
        q.append_rear(c);
    }
    bool first=true;
    while(!q.empty()&&(n--)){
        char hisc;
        if(q.retrieve_rear(hisc)){
            if(!first){
                cout<<" ";
            }
            cout<<hisc;
            first=false;
        }
        q.serve_rear();
    }
}*/
/*const int maxCount=100;
class myqueue{
    private:
    int count;
    int front,rear;
    int array[maxCount];
    public:
    myqueue();
    bool append(const int &item);
    bool serve();
    bool retrieve(int& item)const;
    bool empty() const;
    int size() const;
    void clear();
    bool full()const;
};
myqueue::myqueue(){
    count=0;
    rear=maxCount-1;
    front=0;
}
bool myqueue::append(const int &item){
    if(count>=maxCount)return false;
    count++;
    rear=(rear+1)%maxCount;
    array[rear]=item;
    return true;
}
bool myqueue::serve(){
    if(count<=0)return false;
    count--;
    front=(front+1)%maxCount;
    return true;
}
bool myqueue::retrieve(int& item)const{
    if(count==0)return false;
    item=array[front];
    return true;
}
bool myqueue::empty()const{
    return count==0;
}
int myqueue::size()const{
    return count;
}
void myqueue::clear(){
    count=0;
    rear=maxCount-1;
    front=0;
}
bool myqueue::full()const{
    return count>=maxCount;
}
int main(){
    myqueue q;
    int num;
    while(cin>>num){
        if(num==-1)break;
        q.append(num);
    }
    while(!q.empty()){
        int topnum;
        if(q.retrieve(topnum))
        cout<<topnum<<" ";
        q.serve();
    }
}*/
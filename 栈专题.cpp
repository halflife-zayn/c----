#include<bits/stdc++.h>
using namespace std;
const int maxCount=1000;
class mystack{
    private:
    int count;
    double array[maxCount];
    public:
    mystack():count(0){}
    bool push(double item);
    bool pop();
    double top()const;
    bool empty() const;
};
bool mystack::push(double item){
    if(count>=maxCount)return false;
    array[count++]=item;
    return true;
}
bool mystack::pop(){
    if(count==0)return false;
    count--;
    return true;
}
double mystack::top()const{
    if(count==0)return 0;
    return array[count-1];
}
bool mystack::empty()const{
    return count==0;
}
int priority(char op){
    switch(op){
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        default: return 0;
    }
}
double calculate(double a,double b,char op){
    switch(op){
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
        default:return 0;
    }
}
double parseNumber(const string& s,int& i,bool& hasFloat){
    double value=0;
    bool isFloat=false;
    double decimalPos=0.1;
    bool negative=false;
    if(s[i]=='-'){
        negative=true;
        i++;
    }
    while(i<s.length()&&s[i]>='0'&&s[i]<='9'){
        value=value*10+(s[i]-'0');
        i++;
    }
    if(i<s.length()&&s[i]=='.'){
        isFloat=true;
        hasFloat=true;
        i++;
        while(i<s.length()&&s[i]>='0'&&s[i]<='9'){
            value=value+(s[i]-'0')*decimalPos;
            decimalPos*=0.1;
            i++;
        }
    }
    if(negative) value=-value;
    return value;
}
int main(){
    mystack num;
    mystack op;
    string line;
    getline(cin,line);
    int i=0;
    int len=line.length();
    bool hasFloat=false;
    while(i<len){
        char c=line[i];
        if((c>='0'&&c<='9')||(c=='-'&&(i==0||line[i-1]=='('||(i>0&&(line[i-1]=='+'||line[i-1]=='-'||line[i-1]=='*'||line[i-1]=='/'))))){
            double value=parseNumber(line,i,hasFloat);
            num.push(value);
            continue;
        }
        else if(c=='('){
            op.push(c);
            i++;
        }
        else if(c==')'){
            while(!op.empty()&&op.top()!='('){
                char optop=op.top();
                op.pop();
                double b=num.top();
                num.pop();
                double a=num.top();
                num.pop();
                num.push(calculate(a,b,optop));
            }
            if(!op.empty()&&op.top()=='('){
                op.pop();
            }
            i++;
        }
        else if(c=='+'||c=='-'||c=='*'||c=='/'){
            while(!op.empty()&&op.top()!='('&&priority(op.top())>=priority(c)){
                char optop=op.top();
                op.pop();
                double b=num.top();
                num.pop();
                double a=num.top();
                num.pop();
                num.push(calculate(a,b,optop));
            }
            op.push(c);
            i++;
        }
        else{
            i++;
        }
    }
    while(!op.empty()){
        char optop=op.top();
        op.pop();
        double b=num.top();
        num.pop();
        double a=num.top();
        num.pop();
        num.push(calculate(a,b,optop));
    }
    double result=num.top();
    if(!hasFloat&&fabs(result-round(result))<1e-9){
        cout<<(long long)round(result)<<endl;
    }
    else{
        cout<<fixed<<setprecision(3)<<result<<endl;
    }
}
/*int main(){
    mystack s;
    int kuocount=0;
    char c;
    char prec=0;
    bool match=true;
    bool hint1=false;
    bool hint2=false;
    bool quote1=false;
    bool quote2=false;
    bool escape=false;
    
    while(cin.get(c)){
        if(!escape&&prec=='\\'){
            escape=true;
        }
        else{
            escape=false;
        }
        
        if(!hint1&&!hint2&&!quote1&&!quote2){
            if(prec=='/'){
                if(c=='/'){
                    hint1=true;
                    prec=0;
                    continue;
                }
                else if(c=='*'){
                    hint2=true;
                    prec=0;
                    continue;
                }
            }
        }
        
        if(hint1){
            if(c=='\n'){
                hint1=false;
            }
            prec=c;
            continue;
        }
        
        if(hint2){
            if(prec=='*'&&c=='/'){
                hint2=false;
                prec=0;
            }
            else{
                prec=c;
            }
            continue;
        }
        
        if(!quote1&&!quote2){
            if(c=='"'&&!escape){
                quote1=true;
                prec=c;
                continue;
            }
            if(c=='\''&&!escape){
                quote2=true;
                prec=c;
                continue;
            }
        }
        if(c=='('||c=='['||c=='{'){
            s.push(c);
            kuocount++;
        }
        else if(c==')'||c==']'||c=='}'){
            kuocount++;
            if(!s.empty()){
                if((s.top()=='('&&c==')')||
                   (s.top()=='['&&c==']')||
                   (s.top()=='{'&&c=='}')){
                    s.pop();
                }
                else{
                    match=false;
                }
            }
            else{
                match=false;
            }
        }
        
        prec=c;
    }
    
    if(!s.empty()){
        match=false;
    }
    
    cout<<kuocount<<" ";
    if(match) cout<<"yes";
    else cout<<"no";
    
    return 0;
}*/

/*bool checkSequence(char* seq){
    mystack s;
    for(int i=0;seq[i]!='\0';i++){
        if(seq[i]=='I'){
            s.push('I');
        }
        else if(seq[i]=='O'){
            if(s.empty()){
                return false;
            }
            s.pop();
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    char seq[81];
    for(int i=0;i<n;i++){
        cin>>seq;
        if(checkSequence(seq)){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}*/
/*int calculate(int a,int b,char op){
    switch(op){
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
        default:return 0;
    }
}
int main(){
    mystack s;
    char c;
    bool valid=true;
    while(cin.get(c)){
        if(c=='\n')break;
        if(c>='0'&&c<='9'){
            s.push(c);
        }
        else if(c=='+'||c=='-'||c=='*'||c=='/'){
            if(s.size()<2){
                valid=false;
                break;
            }
            int b=s.top()-'0';
            s.pop();
            int a=s.top()-'0';
            s.pop();
            int result=calculate(a,b,c);
            s.push(result+'0');
        }
        else{
            valid=false;
            break;
        }
    }
    if(valid&&s.size()==1){
        int result=s.top()-'0';
        cout<<result<<endl;
    }
    else{
        cout<<"none"<<endl;
    }
    return 0;
}*/
/*
*/
/*class rectangleType{
    private:
    int length;
    int width;
    int area;
    public:
    void setLengthWidth(int l,int w);
    void printTheInformationOfRectangle();
    void computeArea();
    bool compareArea(rectangleType rec);

};
void rectangleType::setLengthWidth(int l,int w){
    length=l;width=w;
}
void rectangleType::printTheInformationOfRectangle(){
    computeArea();
    cout<<length<<" "<<width<<" "<<area<<endl;
}
void rectangleType::computeArea(){
    area=length*width;
}
bool rectangleType::compareArea(rectangleType rec){
    return area<rec.area;
}
int main(){
    rectangleType r1,r2;
    int l1,w1,l2,w2;
    cin>>l1>>w1>>l2>>w2;
    r1.setLengthWidth(l1,w1);
    r2.setLengthWidth(l2,w2);
    r1.computeArea();
    r2.computeArea();
    cout<<r1.compareArea(r2)<<endl;
    r1.printTheInformationOfRectangle();
    r2.printTheInformationOfRectangle();
}*/
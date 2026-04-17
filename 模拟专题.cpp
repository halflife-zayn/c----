#include<bits/stdc++.h>
using namespace std;

//园和正方形
/*double area(double length,int time){
    double a=0.0;
    while(time--){
        a+=(length*length*(1-M_PI/4));
        length/=sqrt(2);
}
    return a;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
    double length;int time;
    cin>>length>>time;
    cout<<fixed<<setprecision(6)<<area(length,time)<<endl;
}
}*/
//鸡兔同笼
/*int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int head,feet;
        cin>>head>>feet;
        int chick=0,sheep;
        bool possible=false;
        for(chick;chick<=head;chick++){
            sheep=head-chick;
            if(2*chick+4*sheep==feet){possible=true;cout<<chick<<" "<<sheep<<endl;break;}
        }
        if(!possible)cout<<"Impossible\n";
    }
}*/
//算钱
/*int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n;
        cin>>n;
        vector<int>num;
        num.push_back(n/100);
        n=n%100;
        num.push_back(n/50);
        n=n%50;
        num.push_back(n/20);
        n=n%20;
        num.push_back(n/10);
        n=n%10;
        num.push_back(n/5);
        n=n%5;
        num.push_back(n);
        cout<<num[0];
        for(int i=1;i<6;i++){cout<<" "<<num[i];}
        cout<<endl;
}
}*/
//替换
/*int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n;
        cin>>n;
        vector<int>num;
        vector<int>nextnum;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            num.push_back(k);
        }
        bool same=false;
        while(!same){
            for(int i=0;i<n;i++){nextnum.push_back(0);}
            for(int i=0;i<n;i++){
            for(int l=i+1;l<n;l++){
                if(num[i]>num[l]){nextnum[i]++;}
            }
        }same=true;
        for(int i=0;i<n;i++){if(num[i]!=nextnum[i]){same=false;break;}}
        while(!num.empty())num.pop_back();
        for(int i=0;i<n;i++){num.push_back(nextnum[i]);}
        while(!nextnum.empty())nextnum.pop_back();
        }
        cout<<num[0];
        for(int i=1;i<n;i++){cout<<" "<<num[i];}
        cout<<endl;
    }
}*/
//农场
/*int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int people,money;
        cin>>people>>money;
        bool found=false;
        for(int man=0;man<=money/3;man++){
            int remainmoney=money-3*man;
            int remainpeople=people-man;
            int woman=remainmoney-remainpeople;
            int child=remainpeople-woman;
            if(woman>=0 && child>=0 && 2*woman+child==remainmoney){
                cout<<man<<" "<<woman<<" "<<child<<endl;
                found=true;
            }
        }
        if(!found){
            cout<<"-1\n";
        }
    }
    return 0;
}
*/

//2.29生日
/*int main(){
    string line;
    getline(cin,line);
    stringstream ss(line);
    int year;
    while(ss>>year){
        cout<<" SU MO TU WE TH FR SA"<<endl;
        bool runnian=false;
        if(year%4==0&&year%100!=0)runnian=true;
        int firstday=5;
        for(int y=2008;y<year;y++){
            bool runnian1=(y%4==0&&y%100!=0);
            if(runnian1){
                firstday=(firstday+2)%7;
            }else{
                firstday=(firstday+1)%7;
            }
        }
        int totalday=runnian?29:28;
        int day=1;
        for(int i=0;i<firstday;i++){
            cout<<"   ";
        }
        for(int i=firstday;i<7&&day<=totalday;i++){
        cout<<" "<<setw(2)<<right<<day;
            
            day++;
        }
        cout<<endl;
        while(day<=totalday){
            for(int i=0;i<7&&day<=totalday;i++){
            cout<<" "<<setw(2)<<right<<day;
                
                day++;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    }*/


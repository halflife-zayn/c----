#include<bits/stdc++.h>
using namespace std;
//生理周期
/*int triplePeak(int p,int e,int i,int d){
    p=p%23;
    e=e%28;
    i=i%33;
    for(int day=d+1;day<=d+21252;day++){
        if(day%23==p&&day%28==e&&day%33==i)return day-d;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int p,e,i,d;
        cin>>p>>e>>i>>d;
        cout<<"the next triple peak occurs in "<<triplePeak(p,e,i,d)<<" days."<<endl;
    }
}*/
//连续正整数
/*int jiyinshu(int n){
    int count=0;
    for(int i=3;i<n+1;i+=2){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cout<<"case #"<<j<<":\n";
        int n;
        cin>>n;
        cout<<jiyinshu(n)<<endl;
    }
}*/
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
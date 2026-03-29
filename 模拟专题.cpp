#include<bits/stdc++.h>
using namespace std;


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


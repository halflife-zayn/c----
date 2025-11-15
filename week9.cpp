#include <bits/stdc++.h>
using namespace std;
/*
int main() {
    string b;
    int c;
    cin>>b>>c;
    int len=b.size();
    cout<<len<<" ";
    c=c%len;
    bool ling=false;
    for(int i=0;i<len;i++) {
        if(b[(i-c+len)%len]!='0')ling=true;
        if(ling)cout<<b[(i-c+len)%len];
    }
    
    return 0;
}*/

/*int sushu(int a){
    int b=sqrt(a);
    for(int i=2;i<=b;i++){
        if(a%i==0)return -1;
    }
    return a;

}
int main(){
    int count=0;
    for(int i=101;i<=200;i++){
        if(sushu(i)==i)count++;
    }
    cout<<count<<"\n";
    for(int i=101;i<=200;i++){
        if(sushu(i)==i)
        cout<<i<<" ";
    }

}*/
/*int main() {
    string b;
    int c;
    cin>>b>>c;
    int len=b.size();
    cout<<len<<" ";
    c=c%len;
    bool ling=false;
    for(int i=0;i<len;i++) {
        if(b[(i-c+len)%len]!='0')ling=true;
        if(ling)cout<<b[(i-c+len)%len];
    }
    
    return 0;
}
*/
/*int main(){
string n,m;
cin>>n;
m=n;
reverse(n.begin(),n.end());
if(m==n)cout<<"YES";
else cout<<"NO";
}*/
#include <bits/stdc++.h>
using namespace std;
/*int main(){
    string str;
    bool first=true;
    while(cin>>str){
        if(str[0]>='0'&&str[0]<='9'){
           reverse(str.begin(),str.end());
           if(first){cout<<str;first=false;}
           else cout<<" "<<str;
        }
        else if(str[0]>='a'&&str[0]<='z'){
           int len=str.size();
           for(int i=0;i<len;i++){
            str[i]=str[i]-'a'+'A';
           }
           if(first){cout<<str;first=false;}
           else cout<<" "<<str;
        }
        else if(str[0]>='A'&&str[0]<='Z'){
           int len=str.size();
           for(int i=0;i<len;i++){
            str[i]=str[i]-'A'+'a';
           }
           if(first){cout<<str;first=false;}
           else cout<<" "<<str;
        }
    }
}*/
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int year, int month) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}


long totalDays(int year, int month, int day) {
    long days = 0;
    

    for (int y = 1; y < year; y++) {
        days += isLeapYear(y) ? 366 : 365;
    }
    

    for (int m = 1; m < month; m++) {
        days += daysInMonth(year, m);
    }
    

    days += day;
    
    return days;
}


int daysBetweenDates(const string& date1, const string& date2) {

    int year1 = stoi(date1.substr(0, 4));
    int month1 = stoi(date1.substr(5, 2));
    int day1 = stoi(date1.substr(8, 2));
    
    int year2 = stoi(date2.substr(0, 4));
    int month2 = stoi(date2.substr(5, 2));
    int day2 = stoi(date2.substr(8, 2));
    

    long totalDays1 = totalDays(year1, month1, day1);
    long totalDays2 = totalDays(year2, month2, day2);
    
    return abs(totalDays2 - totalDays1);
}
int main() {
    string date1, date2;
    cin >> date1;
    cin >> date2;
    int days = daysBetweenDates(date1, date2);
    cout<< days;  
    return 0;
}
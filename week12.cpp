#include <bits/stdc++.h>
using namespace std;

/*int main(){
    string a;
    string b;
    vector<int> c;
    cin>>a>>b;
    int bounce=0;
    int count=0;
    if (a.size() < b.size()) swap(a, b);
    int carry = 0;
    int i=a.size()-1,j =b.size()-1;
    vector<int> result;
    while (i>=0||j>=0||carry) {
        int asum=(i>=0) ? a[i] - '0' : 0;
        int bsum=(j>=0) ? b[j] - '0' : 0;
        int sum = asum + bsum + carry;
        result.push_back(sum % 10);
        carry=sum/10;
        i--;
        j--;
    }
        reverse(result.begin(),result.end());
        for(int i=0;i<result.size();i++){
            cout<<result[i];
        }
    return 0;
}*/

/*int main() {
    string a;
    cin >> a;
    for(int i=0;i<a.size();i++) {
        char c=toupper(a[i]); 
        char num=a[i];
        
        if(c>='A'&&c<='C') num='2';
        else if(c>='D'&&c<='F') num= '3';
        else if(c>='G'&&c<='I') num= '4';
        else if(c>='J'&&c<='L') num= '5';
        else if(c>='M'&&c<='O') num= '6';
        else if(c>='P'&&c<='S') num= '7';
        else if(c>='T'&&c<='V') num= '8';
        else if(c>='W'&&c<='Z') num= '9';
        cout<<num;
    }
    
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int main(){
int m,n;
cin>>m>>n;
for(int i=1;i<=m;i++){
for(int j=1;j<=n;j++){
cin>>dp[i][j];
}
}
for(int j=1;j<=n;j++){
for(int i=1;i<=m;i++){
cout<<dp[i][j]<<" ";
}
cout<<"\n";
}
}*/


/*int main() {
    string str;     
    string substr;  
    getline(cin,str);
    getline(cin,substr);
    int count=0;             
    string result= "";   
    if (str.length()==0||substr.length()>str.length()) {
        cout<<0 <<endl;
        return 0;
    }
    for (int i=0;i<=str.length()-substr.length();i++) {
        bool match = true;
        for (int j=0;j<substr.length();j++) {
            if (str[i+j]!=substr[j]) {
                match=false;
                break;
            }
        }
        if (match) {
            count++;
            result+=to_string(i)+" "; 
        }
    }
    cout<<count<<endl;
    if (count>0) {
        cout<<result<<endl;
    }
    return 0;
}*/
    
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> str(n);
    for(int i=0;i<n;i++){
    getline(cin,str[i]);
    }
    string min=str[0];
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
       if(str[j]<min) {
                min=str[j];
            }
    }
    cout<<min<<endl;
    
    }
    
}

/*int main(){
    string stra;
    string strb;
    string result;
    cin>>stra>>strb;
    if(stra.size()>strb.size()){
        for(int i=0;i<strb.size();i++){
            result+=stra[i];
            result+=strb[i];
        }
        for(int i=strb.size();i<stra.size();i++){
            result+=stra[i];
        }
    }
    if(strb.size()>=stra.size()){
        for(int i=0;i<stra.size();i++){
            result+=stra[i];
            result+=strb[i];
        }
        for(int i=stra.size();i<strb.size();i++){
            result+=strb[i];
        }
    }
    cout<<result<<endl;
}*/


/*int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> str(n);
    for(int i=0;i<n;i++){
    getline(cin,str[i]);
    }
    string min=str[0];
    string max=str[0];
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
       if(str[j]<min) {
                min=str[j];
            }
    }
    }
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
       if(str[j]>max) {
                max=str[j];
            }
    }
    }
    cout<<max<<min;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[100];
    for(int i=0;i<n;i++) cin>>a[i];
    int top=0,bottom=n-1;
    int left=0,right=n-1;
    while(top<=bottom&&left<=right){
        for(int j=left;j<=right;j++) cout<<a[top][j];
        top++;
        for(int i=top;i<=bottom;i++) cout<<a[i][right];
        right--;
        if(top<=bottom){
            for(int j=right;j>=left;j--) cout<<a[bottom][j];
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--) cout<<a[i][left];
            left++;
        }
    }
    cout<<endl;
    return 0;
}*/
/*int main(){
    string stra;
    string strb;
    cin>>stra>>strb;
    if(stra.length()!=strb.length()){
        cout<<"No"<<endl;
        return 0;
    }
    int n=stra.length();
    for(int i=0;i<n;i++){
        bool match=true;
        for(int j=0;j<n;j++){
        if(stra[j]!=strb[(j+n-i)%n]){match=false;break;}
    }
        if(match){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}*/


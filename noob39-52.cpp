#include <bits/stdc++.h>
using namespace std;
int a[100];
int main() {
    a[1]=0;
    a[2]=1;
    a[3]=1;
    for (int i=4;i<=20;i++){
        a[i]=a[i-3]+a[i-2]+a[i-2]+a[i-1];
    }
    int n;
    cin>>n;
    cout<<a[n];
    return 0;
}
#include <iostream>
using namespace std;

const int MOD = 1000000007;
const int MAX = 1001;

int dp[MAX][MAX];

int main() {
    for (int i = 1; i < MAX; i++) {
        for (int j = 1; j < MAX; j++) {
            if (i == 1 && j == 1) {
                dp[i][j] = 1;
            } else if (i == 1) {
                dp[i][j] = dp[i][j-1];
            } else if (j == 1) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
    }
    
    int b, c;
    cin >> b >> c;
    cout << dp[b][c] << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long a[1000];
int main() {
    for(int i=1;i<=200;i++){
        cin>>a[i];
    }  
    for(int j=1;j<=200;j++){
        if(a[j]==0){
            for(int k=j-1;k>=1;k--){
                cout<<a[k]<<" ";
                
            }
            break;
        }
    }  
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long a[1000];
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        int k=i;
        int sum=0;
        for(k;k>=1;k--){
            
            if(a[k]<a[i]){
                sum+=1;
            }
            
        }
        cout<<sum<<" ";
    }
    return 0;
}
#include <bits/stdc++.h>//平均数和方差
using namespace std;
double a[10000];
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }
        int max=INT_MAX;
        int min=INT_MIN;
        for(int k=1;k<=n;k++){
            if(max<=a[k]){
                max=a[k];
            }
            if(min>=a[k]){
                min=a[k];
            }
        }
        
        int jicha=max-min;
        double fangcha,pingjun;
        pingjun=0.0;
        fangcha=0.0;
        for(int l=1;l<=n;l++){
            pingjun=pingjun+a[l];
        }
        
        pingjun/=n;
        for(int l=1;l<=n;l++){
            fangcha=fangcha+(a[l]-pingjun)*(a[l]-pingjun);
        }
        fangcha/=n;
        
        cout<<jicha<<" "<<fixed<<setprecision(3)<<fangcha<<"\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
double a[10000];
int main() {
    int t,n,k,s,cnt;
    cin>>t;
    s=0;
    cnt=0;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        for(int j=1;j<=n;j++){
            cin>>a[j];
        }
        s=0;
        cnt=0;
        for(int j=1;j<=n;j++){
            
            if(a[j]>=k){
                s=s+a[j];
            }
            else if(a[j]==0&&s>=1){
                s-=1;
                cnt+=1;
            }
            
        }
        cout<<cnt<<"\n";
    }
    return 0;

}
#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int main() {
    int n,x,sum;
    cin>>n>>x;
    sum=0;
    for(int i=1;i<=n;i++){
        int k=i;
    for(int j=1;j<=6;j++){
            if(k%10==x){
                sum++; 
        }
            k/=10;
            if(k==0){
                break;
            }
        }
}
    cout<<sum;
    return 0;

}
#include<bits/stdc++.h> //约瑟夫环
using namespace std;
int a[1000]={0}; 
int main(){
    int n,k,m;
    cin>>n>>k>>m;//从第k个人开始，每m个人淘汰一个
    int all=n;       
    while(all!=1){   
        for(int i=1;i<=m-1;i++){
        while(a[(k+1)%n]==1){k=(k+1)%n;}//跨m步时垫步
        k=(k+1)%n;
        }
         a[k]=1;  
         all--;  
         while(a[k]){    
              k=(k+1)%n;//结束后垫步找到下一个没被杀的人
         }
    }
    cout<<k;  
}
#include<bits/stdc++.h>
using namespace std;
int a[100000]={0};
int main(){
int l,m;
cin>>l>>m;
int c,b,sum;
sum=0;
for(int i=0;i<=l;i++){
a[i]=1;
}
for(int i=1;i<=m;i++){
cin>>c>>b;
for(int j=c;j<=b;j++){
a[j]=0;
}
}
for(int i=0;i<=l;i++){
if(a[i]==1){
sum++;
}
}
cout<<sum;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int dp[10000][10000];
int main(){
int m,n;
long sum;
sum=0;
cin>>m>>n;
for(int i=1;i<=m;i++){
for(int j=1;j<=n;j++){
cin>>dp[i][j];
sum=sum+dp[i][j];
} 
}
cout<<sum;
}
#include<bits/stdc++.h>
using namespace std;
int dp[20][20];
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
cin>>dp[i][j];
}
}
for(int i=1;i<=n;i++){
for(int j=1;j<=i-1;j++){
if(dp[i][j]!=0){


cout<<"NO";
return 0;
}
}
}
cout<<"YES";
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int dp[20][20];
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
}
#include<bits/stdc++.h>//杨辉三角
using namespace std;
long long a[20000];
int main(){
int n;
cin>>n;
n-=1;
cout<<"1"<<"\n";
for(int b=1;b<=n;b++){
    cout<<"1";
    if(n!=0){
    for(int i=1;i<=b;i++){
        a[i]=1;
    for(int j=b-i+1;j<=b;j++){
        a[i]*=j;
        a[i]/=j+i-b;
    }
    cout<<" "<<a[i];
    }
    cout<<"\n";
}
}
}
#include<bits/stdc++.h>//更好的二阶写法
using namespace std;
int main()
{
    long long n[40][40],y;
    cin>>y;
    for(int i=1;i<=y;i++)
        for(int j=1;j<=i;j++)
            if(j==1)
                n[i][j]=1;
            else if(i==j)
                n[i][j]=1;
            else
                n[i][j]=n[i-1][j]+n[i-1][j-1];
    for(int i=1;i<=y;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<n[i][j];
            if(j!=i)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
char b[1000][1000];
int main(){
int m,n;
cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin>>b[i][j];
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(b[i][j]=='.'){
        int sum=0;
        if(b[i-1][j-1]=='*'){
            sum++;
        }
        if(b[i-1][j]=='*'){
            sum++;
        }
        if(b[i-1][j+1]=='*'){
            sum++;
        }
        if(b[i][j-1]=='*'){
            sum++;
        }
        if(b[i][j+1]=='*'){
            sum++;
        }
        if(b[i+1][j-1]=='*'){
            sum++;
        }
        if(b[i+1][j]=='*'){
            sum++;
        }
        if(b[i+1][j+1]=='*'){
            sum++;
        }
        cout<<sum;
    }
        if(b[i][j]=='*'){
            cout<<"*";
        }
    }
    cout<<"\n";
}
}
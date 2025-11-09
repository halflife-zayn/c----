#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;
    for (t;t>0;t--){
        cin>>a>>b;
        c=a+b;
        cout<<c<<"\n";

    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    while(cin>>a>>b){
        
        if(a==0&&b==0){
            break;
        }
        c=a+b;
        cout<<c<<"\n";
        
    }
    
    return 0;
}
/*求素数*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b;
    bool c;
    cin>>t;
    for(int j=1;j<=t;j++){
        cin>>a;
        b=sqrt(a);
        c=true;
        if(a==1){
            cout<<"No"<<"\n";
            continue;
        }
            for(int i=2;i<=b;i++){
                if(a%i==0){
                    cout<<"No"<<"\n";
                    c=false;
                    break;
                }
            }
        if (c){
            cout<<"Yes"<<"\n";
        } 
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n;
    if(n%2==1){
        m=n/2+1;
        cout<<m;
    }
    else{
        m=-n/2;
        cout<<m;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    double m;
    cin>>n;
    for(i=1;i<=n;i++){
      m=m+1.0/i;
    }
    cout<<m;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,a,max,min;
    max=-10000;
    min=10000;
    cin>>n;
    for(i=1;i<=n;i++){
      cin>>a;
      if (a>max){
        max=a;
      }
      if (a<min){
        min=a;
      }
    }
    a=max-min;
    cout<<a;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,a[100005];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);           //上面这个问题用sort直接求就行了
    cout<<a[n]-a[1]<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,sum;
    
    cin>>n;
    for(i=1;i<=n;i++){
    sum=sum+i*(i+1)/2;
    }
    cout<<sum;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,sum1,sum2,sum3;
    sum1=1;
    sum2=0;
    sum3=1;
    cin>>n;
    for(i=2;i<=n;i++){
        sum3=sum1+sum2;
        sum2=sum1;
        sum1=sum3;
    }
    
    cout<<sum3;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,sum;
    
    cin>>n;
    i=0;
    sum=0;
    if(n<0){
        n=-n;  //n=fabs(n);
    }
    while(i<10){     //while(n>1),不用i了
        sum=sum+n%10;
        n/=10;
        i++;
    }
    
    cout<<sum;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,sum;
    
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%4==0 || i%10==4 || i/10%10==4 || i/100%10==4 || i/1000%10==4 || i/10000%10==4){
            continue;
        }
        cout<<i<<"\n";
    }
    return 0;
}
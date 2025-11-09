#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n<7 && n>0){
        n+=1;
    }
    else{
        n-=6;
    }
    cout<<n;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n%400==0 || n%4==0 &&n%100!=0){
        cout<<"yes";
    }
    
    else{
        cout<<"no";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a>>b;
    
    if(a<b){
        cout<<"<";
    }
    else if(a==b){
        cout<<"=";
    }
    else{
        cout<<">";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n%2==1){
        n=3*n+1;
    }
    
    else{
        n/=2;
    }
    cout<<n;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    if(n%2==0 && n>50){
        cout<<"yes";
    }
    
    else{
        cout<<"no";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    
    if((a+b+c)/3<60){
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>=b && a>=c){
        cout<<"The maximum number is : "<<a<<"\n";
    }
    else if(b>=a && b>=c){
        cout<<"The maximum number is : "<<b<<"\n";
    }
    else if(c>=a && c>=b){
        cout<<"The maximum number is : "<<c<<"\n";
    }
    if(a<=b && a<=c){
        cout<<"The minimum number is : "<<a;
    }
    else if(b<=a && b<=c){
        cout<<"The minimum number is : "<<b;
    }
    else if(c<=a && c<=b){
        cout<<"The minimum number is : "<<c;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    b=a%100;
    if(b==3 || b==4 || b==5){
        cout<<"spring";
    }
    if(b==6 || b==7 || b==8){
        cout<<"summer";
    }
    if(b==9 || b==10 || b==11){
        cout<<"autumn";
    }
    if(b==12 || b==1 || b==2){
        cout<<"winter";
    }
    
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int b,c,d,e;
    cin>>a;
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=a%10;
    a/=10;
    e=a%10;
    cout<<b<<c<<d<<e;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
double c,k,f;
cin>>k;
c=k-273.15;
f=c*1.8+32;
cout<<fixed<<setprecision(9)<<f;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {           //绕距
int x1,x2,y1,y2;
double e,m,del;
cin>>x1>>y1>>x2>>y2;
e=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
m=sqrt((x1-x2)*(x1-x2))+sqrt((y1-y2)*(y1-y2));
del=m-e;
cout<<fixed<<setprecision(9)<<del;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int b,c,d,e;
    cin>>a;
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=a%10;
    a/=10;
    e=a%10;
    a=b+c+d+e;
    cout<<a;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int total;
    int s,m,h;
    cin>>total;
    s=total%60;
    total/=60;
    m=total%60;
    total/=60;
    h=total;
    cout<<h<<" "<<m<<" "<<s;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int mb;
    int z;
    cin>>mb;
    z=mb*262144;
    cout<<z;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    int s,v;
    cin>>a>>b>>c;
    s=2*(a*b+b*c+c*a);
    v=a*b*c;
    cout<<s<<"\n"<<v;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    int s;
    cin>>a>>b>>c;
    s=a*0.2+b*0.3+c*0.5;
    
    cout<<s;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    long long a,s;
    cin>>a;
    s=a*(a+1)/2;
    
    cout<<s;
    return 0;
}

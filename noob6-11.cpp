#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    cout<<a+b;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b;
    double c;
    cin>>a>>b;
    c=b/a*100;
    cout<<fixed<<setprecision(3)<<c<<'%';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    int c,d;
    cin>>a>>b;
    c=a/b;
    d=a%b;
    cout<<c<<' '<<d;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    
    cin>>a;
    if(a<=0){
        a=-a;
    }
b=a%10;
cout<<b;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    
    cin>>a;
    if(a<=0){
        a=-a;
    }
a=a/10;
a=a%10;
cout<<a;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    
    cin>>a;
    
a=sqrt(a);

cout<<a;
    return 0;
}
#include<stdio.h>
#include<math.h>
/*int main(){
    int n,r,k;
    k=0;
    int count=0;
    char a[100];
    int fushu=0;
    scanf("%d %d",&n,&r);
    if(n==0)printf("0");
    if(n<0){
        fushu=1;
        n=fabs(n);
    }
    int i = 1;
    while(n > 0){
        int remainder = n % r;
        if(remainder < 10){
            a[i] = remainder + '0'; 
        } else {
            a[i] = remainder - 10 + 'A'; 
        }
        n /= r;
        i++;
        count++;
    }
    if(fushu)printf("-");
        for(int j=count;j>=1;j--){
        printf("%c", a[j]);
    }
}*/
//二进制
/*#include<stdio.h>
int main(){
    int n;
    int count=0;
    int a[100];
    scanf("%d",&n);
    if(n==0)printf("0");
    int i=1;
    while(n>0){
        a[i]=n%2;
        n/=2;
        i++;;
        count++;
    }
    for(int j=count;j>=1; j--){
        printf("%d", a[j]);
    }
}
*/
/*int gcd(int a,int b){
    int r1=a,r2=b,r3;
    while (r1>0&&r2>0&&r3>0)
    {
    r3=r1%r2;
    if(r3==0)return r2;
    r1=r2%r3;
    if(r1==0)return r3;
    r2=r3%r1;
    if(r2==0)return r1;
    }
}
int main(){
    int zong;
    scanf("%d",&zong);
    for(int i=1;i<=zong;i++){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d\n", gcd(m,n));
}
}*/
/*int jie(int a){
    if(a==0)return 1;
    else{
        int k=1;
        for(int i=1;i<=a;i++){
            
            k*=i;
        }
        return k;
    }
}
int main(){
    double e=0.0;
    for(int j=0;j<=10;j++){
        e+=1.0/(double)jie(j);
       printf("%d\n",jie(j)); 
    }
    printf("%.6lf",e);
}
*/

/*#include<stdio.h>
#include<math.h>
int sushu(int a){
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
    printf("%d\n",count);
    for(int i=101;i<=200;i++){
        if(sushu(i)==i)
        printf("%d ",i);
    }

}
*/
#include<stdio.h>
#include<math.h>
/*int main(){
    char c;
    int inword=0;
    int first=1;
    char a[100]={0};
    int sliver=1;
    while(scanf("%c",&c)!=EOF&&c!='\n'){
        if(c>='0'&&c<='9'){
           a[sliver]=c;
           sliver++;
        }
        else if(c>='a'&&c<='z'){
            c=c-'a'+'A';
           if(first||inword){printf("%c",c);first=0;inword=1;}
           else {printf(" %c",c); inword=1;}
           }
        else if(c>='A'&&c<='Z'){
            c=c-'A'+'a';
           if(first||inword){printf("%c",c);first=0;inword=1;}
           else {printf(" %c",c); inword=1;}
           }
        else if(c==' ') {
            inword=0;
            if(sliver!=1){
            if(first) first=0;
            else printf(" ");
                for(int i=sliver-1;i>=1;i--){
                    printf("%c",a[i]);
                    a[i]=0;
                }
                sliver=1;
            }
        }
    }
    if (sliver!=1){
        printf(" ");
        for(int i=sliver-1;i>=1;i--){
                    printf("%c",a[i]);
                    a[i]=0;
                }
    }
}*/
/*#include<stdio.h>
#include<math.h>
int fp(int base,int exp,int mod){//kuaisumi
    long long res=1;
    long long base1=base;
    while(exp>0){
        if(exp%2==1){
            res=(res*base1)%mod;
        }
        base1=(base1*base1)%mod;
        exp=exp/2;
    }
    return res;
}
int main(){
    int n,sum;
    sum=0;
    int dp[200]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a,b,c,k;
        scanf("%d %d %d %d",&a,&b,&c,&k);
        if(a-b==b-c){
            long long term=a+(long long)(k-1)*(b-a);
            sum=term%200907;
        }
        else if(a!=0&&b!=0&&a*c==b*b){
            int r=b/a;
            sum=((long long)a*fp(r,k-1,200907))%200907;
        }
        printf("%d\n",sum);
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main() {
    char ha_months[19][10] = {
        "pop","no","zip","zotz","tzec","xul","yoxkin",
        "mol","chen","yax","zac","ceh","mac",
        "kankin","muan","pax","koyab","cumhu","uayet"
    };
    
    char tz_days[20][10] = {
        "imix","ik","akbal","kan","chicchan","cimi","manik", 
        "lamat","muluk","ok","chuen","eb","ben", 
        "ix","mem","cib","caban","eznab","canac","ahau"
    };
    
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    
    for (int i=1;i<=n;i++) {
        int d,y;
        char m[10];
        
        scanf("%d. %s %d",&d,m,&y);
        
        int total_days =y*365;
        
        for (int j=1;j<20; j++) {
            if (strcmp(m,ha_months[j])==0) {
                total_days+=j*20;
                break;
            }
        }
        
        total_days+=d;
        
        int tz_year=total_days/260;
        int remainder=total_days%260;
        
        int tz_number=(remainder%13)+1;
        int tz_name_index=remainder%20;
        
        printf("%d %s %d\n", tz_number, tz_days[tz_name_index], tz_year);
    }
    
    return 0;
}
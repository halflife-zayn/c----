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

#include<stdio.h>
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

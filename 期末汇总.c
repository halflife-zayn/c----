#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>
#include <stdlib.h>
//时间转换
/*int main(){
    int t;
    scanf("%d",&t);
    int a[3]={0};
    a[2]=t%60;
    t/=60;
    a[1]=t%60;
    t/=60;
    a[0]=t;
    printf("%d:%d:%d",a[0],a[1],a[2]);
}*/
//温度表达转化
/*int main(){
    double f;
    scanf("%lf",&f);
    double c=5.0*(f-32.0)/9.0;
    printf("%.5lf",c);
}*/
//八进制十六进制打印(#########################)
/*int main(){
    int n;
    scanf("%d",&n);
    printf("%#o\n%#X",n,n);
}*/
//十六进制转十进制打印
/*int main(){
    int n;
    scanf("%X",&n);
    printf("%d",n);
}*/
//代码改错
/*#include <stdio.h>
int main(void)
{
    const double Revenue_Per_150 = 4.5f;

    short JanSold = 23500;        // Sold 150 in January
    short FebSold = 19300;        // Sold 150 in February
    short MarSold = 21600;        // Sold 150 in March

    double RevQuarter = 0.0f;         // Sales for the quarter
    long QuarterSold = JanSold + FebSold + MarSold; // Calculate quarterly total

    printf("Monthly sales and total for the quarter:\n");
    printf("Month sold in Jan: %d\n", JanSold);
    printf("Feb: %d\n", FebSold);
    printf("Mar: %d\n", MarSold);
    printf("Total sold in the quarter: %d\n", QuarterSold);

    RevQuarter = QuarterSold / 150.0 * Revenue_Per_150;

    printf("Sales revenue in this quarter is:$%.2lf\n", RevQuarter);

    return 0;
}*/
//四舍五入（购房还款
/*int main(){
    long long d,p;
    double r;
    scanf("%lld %lld %lf",&d,&p,&r);
    r/=100;
    double m;
    int n;
    m=log(p/(p-d*r))/log(1+r);
    n=log(p/(p-d*r))/log(1+r);
    if(m-n>0.5)n++;
    printf("%d",n);
}*/
//三个整数的最大值
/*int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){
        if(x>z)printf("%d",x);
        else printf("%d",z);
    }
    else{
        if(y>z)printf("%d",y);
        else printf("%d",z);
    }
}*/
//字符转换
/*int main(){
    char c;
    while(scanf("%c",&c)!=EOF&&c!='\n'){
        if(isupper(c)){c=c-'A'+'a';printf("%c",c);}
        else if(islower(c)){c=c-'a'+'A';printf("%c",c);}
        else if(isdigit(c)){
            int a=c-'0';
            a=(a+3)%10;
            printf("%d",a);
        }
        else if(c==' '){printf("\n");}
        else printf("%c",c);
    }
}*/
//月份天数(switch)
/*int main(){
    int m;
    scanf("%d",&m);
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31");break;
        case 2:printf("28");break;
        default:printf("30");break;
    }
}*/
//整数大小比较
/*int main(){
    long long x,y;
    scanf("%lld %lld",&x,&y);
    if(x>y)printf(">");
    else if(x<y)printf("<");
    else printf("=");
}*/
//判断闰年
/*int main(){
    int a;
    scanf("%d",&a);
    if(a%4==0){
        if(a%100==0&&a%400!=0)printf("N");
        else printf("Y");
    }
    else printf("N");
}*/
//加密(没写出来，需注意)（*************************************
/*int main(){
    char c;
    scanf("%c",&c);
    if(isalpha(c)){
        if(c=='a'||c=='A'||
            c=='e'||c=='E'||
            c=='i'||c=='I'||
            c=='o'||c=='O'||
            c=='u'||c=='U'
        ){
            if(isupper(c)){
                c=c-'A'+'a';
            }
            printf("%c",c);
        }
        else{ 
            if(isupper(c)){
            c=c-'A'+'a';
        }    
            c+=3;
            if(c>'z')c=c-'z'+'a'-1;
            printf("%c",c);}
        }
    else printf("error");
}*/
//算式计算
/*int main(){
    double x,y;
    char op;
    scanf("%lf%c%lf",&x,&op,&y);
    switch(op){
        case '+':
        printf("%.2lf",x+y);
        break;
        case '-':
        printf("%.2lf",x-y);
        break;
        case '*':
        printf("%.2lf",x*y);
        break;
        case '/':
        if(y!=0){
            printf("%.2lf",x/y);
        }
        else printf("illegal");
        break;
    }
}*/
//中位数
/*int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){
        if(x>z){
            if(z>y)printf("%d",z);
            else printf("%d",y);
        }
        else printf("%d",x);
    }
    else{
        if(y>z){
            if(z>x)printf("%d",z);
            else printf("%d",x);
        }
        else printf("%d",y);
    }
}*/
//打印平行四边形
/*int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=n;k++){
            printf("A");
        }
        printf("\n");
    }
}*/
//打印长方形（字母）（注意这个n>m的情况）
/*int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=i-1;j>0;j--){
            char c='A';
            printf("%c",c+j); 
            count++;
            if(count>m-1)break;
        }
        for(int j=i-1;j<m;j++){
            char c='A';
            printf("%c",c+j-i+1); 
        }
        printf("\n");
    }
}*/
//更简单的做法
/*int main() {
    int n, m;
    scanf("%d %d", &n, &m);
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c", 'A' + abs(i - j));
        }
        printf("\n");
    }
}*/
//打印沙漏(做出来了但是非常重要)
/*int main(){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int k=0;
    while(2*k*k-1<n)k++;
    k--;
    for(int i=0;i<k-1;i++){
        for(int j=0;j<2*k-1;j++){
            if(j>2*k-i-2||j<i)printf(" ");
            else printf("%c",c);
        }
        printf("\n");
    }
    for(int i=k;i>0;i--){
        for(int j=0;j<2*k-1;j++){
            if(j>2*k-i-1||j<i-1)printf(" ");
            else printf("%c",c);
        }
        printf("\n");
    }
    int yu=n-2*k*k+1;
    printf("%d",yu);
}*/
//计算组合数
/*int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    long long result=1;
    if(n-m<n/2)m=n-m;
    for(int i=m;i>0;i--){
        result=result*(n+1-i);
    }
    for(int i=m;i>0;i--){
        result=result/i;
    }
    printf("%d",result);
}*/
//单词个数统计
/*int main(){
    char c;
    int count=1;
    while(scanf("%c",&c)!=EOF&&c!='\n'){
        if(c==' ')count++;
    }
    printf("%d",count);
}*/
//百钱买百鸡
/*int main(){
    int n;
    scanf("%d",&n);
    int answer=0;
    for(int g=0;g<=40;g++){
        for(int m=0;m<=70;m++){
            for(int x=0;x<300;x+=3){
                if(g+m+x==n&&5*g+3*m+x/3==n){answer=1;printf("%d %d %d\n",g,m,x);}
            }
        }
    }
    if(!answer)printf("No Answer.");
}*/
//猴子吃桃
/*int main(){
    int n;
    scanf("%d",&n);
    long r=1;
    n--;
    while(n--){
        r=(r+1)*2;
    }
    printf("%d",r);
}*/
//计算两天之间天数
/*int main(){
    int sy,sm,sd,ey,em,ed;
    scanf("%d %d %d",&sy,&sm,&sd);
    scanf("%d %d %d",&ey,&em,&ed);
    long long alls=sd,alle=ed;
    sm--;em--;
    if(sy%4==0&&!(sy%100==0&&sy%400!=0)){
        switch(sm){
        case 1:alls+=31;break;
        case 2:alls+=31+29;break;
        case 3:alls+=31+29+31;break;
        case 4:alls+=31+29+31+30;break;
        case 5:alls+=31+29+31+30+31;break;
        case 6:alls+=31+29+31+30+31+30;break;
        case 7:alls+=31+29+31+30+31+30+31;break;
        case 8:alls+=31+29+31+30+31+30+31+31;break;
        case 9:alls+=31+29+31+30+31+30+31+31+30;break;
        case 10:alls+=31+29+31+30+31+30+31+31+30+31;break;
        case 11:alls+=31+29+31+30+31+30+31+31+30+31+30;break;
        case 0:break;
    }
    }
    else switch(sm){
        case 1:alls+=31;break;
        case 2:alls+=31+28;break;
        case 3:alls+=31+28+31;break;
        case 4:alls+=31+28+31+30;break;
        case 5:alls+=31+28+31+30+31;break;
        case 6:alls+=31+28+31+30+31+30;break;
        case 7:alls+=31+28+31+30+31+30+31;break;
        case 8:alls+=31+28+31+30+31+30+31+31;break;
        case 9:alls+=31+28+31+30+31+30+31+31+30;break;
        case 10:alls+=31+28+31+30+31+30+31+31+30+31;break;
        case 11:alls+=31+28+31+30+31+30+31+31+30+31+30;break;
        case 0:break;
    }
    if(ey%4==0&&!(ey%100==0&&ey%400!=0)){
        switch(em){
        case 1:alle+=31;break;
        case 2:alle+=31+29;break;
        case 3:alle+=31+29+31;break;
        case 4:alle+=31+29+31+30;break;
        case 5:alle+=31+29+31+30+31;break;
        case 6:alle+=31+29+31+30+31+30;break;
        case 7:alle+=31+29+31+30+31+30+31;break;
        case 8:alle+=31+29+31+30+31+30+31+31;break;
        case 9:alle+=31+29+31+30+31+30+31+31+30;break;
        case 10:alle+=31+29+31+30+31+30+31+31+30+31;break;
        case 11:alle+=31+29+31+30+31+30+31+31+30+31+30;break;
        case 0:break;
    }
    }
    else switch(em){
        case 1:alle+=31;break;
        case 2:alle+=31+28;break;
        case 3:alle+=31+28+31;break;
        case 4:alle+=31+28+31+30;break;
        case 5:alle+=31+28+31+30+31;break;
        case 6:alle+=31+28+31+30+31+30;break;
        case 7:alle+=31+28+31+30+31+30+31;break;
        case 8:alle+=31+28+31+30+31+30+31+31;break;
        case 9:alle+=31+28+31+30+31+30+31+31+30;break;
        case 10:alle+=31+28+31+30+31+30+31+31+30+31;break;
        case 11:alle+=31+28+31+30+31+30+31+31+30+31+30;break;
        case 0:break;
    }
    for(int i=1;i<sy;i++){
        if(i%4==0&&!(i%100==0&&i%400!=0))alls+=366;
        else alls+=365;
    }
    for(int i=1;i<ey;i++){
        if(i%4==0&&!(i%100==0&&i%400!=0))alle+=366;
        else alle+=365;
    }
    printf("%lld",alle-alls);
}*/
//杨辉三角
/*int main(){
    int n;
    scanf("%d",&n);
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            a[i-1][j-1]=1;
            for(int x=i-1;x>i-j;x--){
                a[i-1][j-1]*=x;
            }
            for(int x=1;x<=j-1;x++){
                a[i-1][j-1]/=x;
            }
        }
    }
    for(int i=n;i>0;i--){
        for(int p=0;p<n-i;p++)printf(" ");
        for(int j=1;j<=i;j++){
            if(j==1)printf("%d",a[i-1][j-1]);
            else printf(" %d",a[i-1][j-1]);
        }
        printf("\n");
    }
}*/
//截取数字求和
/*int main(){
    char c;
    int n=0;
    int sum=0;
    while(scanf("%c",&c)!=EOF&&c!='\n'){
        if(isdigit(c)){
            n*=10;
            n+=c-'0';
        }
        else{
            sum+=n;
            n=0;
        }
    }
    sum+=n;
    printf("%d",sum);
}*/
//nn乘法表
/*int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d*%d=%d ",i,j,i*j);
        }
        printf("\n");
    }
}*/
//水仙花数（#每个数字占6位）
/*int main(){
    for(int i=100;i<999;i++){
        int a,b,c,n=i;
        c=n%10;
        n/=10;
        b=n%10;
        n/=10;
        a=n;
        if(a*a*a+b*b*b+c*c*c==i)printf("%#6d",i);
    }
}*/
//位数相加升级版
/*int main(){
    int n;
    scanf("%d",&n);
    n=fabs(n);
    while(n>=10){
        int i=n;
        int sum=0;
        while(i>0){
            sum+=i%10;
            i/=10;
        }
        n=sum;
    }
    printf("%d",n);
}*/
//二进制
/*int main(){
    int n;
    scanf("%d",&n);
    int a[32]={0};
    int count=0;
    for(int i=0;n>0;i++){
        a[i]=n%2;
        n/=2;
        count=i;
    }
    for(count;count>=0;count--){
        printf("%d",a[count]);
    }
}*/
//最大公约数
/*void gcd(int a,int b){
    if(a<b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    while(a%b!=0){
        int c=a%b;
        a=b;
        b=c;
    }
    printf("%d\n",b);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int m,n;
        scanf("%d %d",&m,&n);
        gcd(m,n);
    }
}*/
//算e
/*double jie(int a){
    if(a==0)return 1;
    double k=1.0;
    for(int i=1;i<=a;i++){
        k*=i;
    }
    return k;
}
int main(){
    int j=0;
    double e;
    while(jie(j)<=1000000){
        e+=1/jie(j);
        j++;
    }
    printf("%lf",e);
}*/
//循环移位(注意点写在里面了**************************************************)
/*int main(){
    char str[100];
    //不能直接复制自己；要缓冲
    char temp[100];
    int n;
    //只能先输入数字，再转换
    long long num;
    int ling=1;
    scanf("%lld %d",&num,&n);
    sprintf(str,"%lld",num);
    int len=strlen(str);
    strcpy(temp,str);
    strcat(str,temp);
    n=len-n%len;
    printf("%d ",len);
    for(int i=n;i<n+len;i++){
        if(str[i]!='0')ling=0;
        if(!ling)
        printf("%c",str[i]);
    }
}*/
//素数判断
/*int sushu(int a){
    int q=sqrt(a);
    for(int i=2;i<=q;i++){
        if(a%i==0)return 0;
    }
    return 1;
}
int main(){
    int count=0;
    for(int i=100;i<=200;i++){
        if(sushu(i))count++;
    }
    printf("%d\n",count);
    for(int i=100;i<=200;i++){
        if(sushu(i))printf("%d ",i);
    }
}*/
//回文数判断
/*int main(){
    int n;
    int a[20];
    scanf("%d",&n);
    int count=0;
    int temp=n;
    while(temp>0){
        a[count]=temp%10;
        temp/=10;
        count++;
    }
    for(int i=0;i<count;i++){
        temp*=10;
        temp+=a[i];
    }
    if(temp==n)printf("Yes");
    else printf("No");
}*/
//n进制转换
/*int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    if(n<0){printf("-");n=-n;}
    n=fabs(n);
    int a[32]={0};
    int count=0;
    for(int i=0;n>0;i++){
        a[i]=n%r;
        n/=r;
        count=i;
    }
    for(count;count>=0;count--){
        if(a[count]<10)printf("%d",a[count]);
        else if(a[count]==10)printf("A");
        else if(a[count]==11)printf("B");
        else if(a[count]==12)printf("C");
        else if(a[count]==13)printf("D");
        else if(a[count]==14)printf("E");
        else if(a[count]==15)printf("F");
    }
}*/
//最长小时数
/*int main(){
    int max=0,count=0;
    int t;
    scanf("%d",&t);
    while(t--){
        int high,low;
        scanf("%d %d",&high,&low);
        if(high>=90&&high<=140
        &&low>=60&&low<=90){
            count++;
        }
        else count=0;
        if(count>max)max=count;
    }
    printf("%d",max);
}*/
//序列第k个数
/*int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,k;
        scanf("%d %d %d %d",&a,&b,&c,&k);
        int d=b-a;
        int q=b/a;
        int result=a;
        if(c-b==d){
            result+=(k-1)*d;
            printf("%d\n",result);
        }
        else if(c/b==q){
            for(int i=1;i<k;i++){result*=q;result%=200907;}
            printf("%d\n",result);
        }
    }
}*/
//汉诺塔(再看看这个**************)
/*void movement(int a,char from,char temp,char to){
    if(a==1){printf("%c->1->%c\n",from,to);return;}
    movement(a-1,from,to,temp);
    printf("%c->%d->%c\n",from,a,to);
    movement(a-1,temp,from,to);//最后一步别忘了
}
int main(){
    int n;
    char f,t,to;
    scanf("%d %c %c %c",&n,&f,&t,&to);
    movement(n,f,to,t);
}*/
//cost of lumber
/*int main(){
    char op;
    double total=0;
    while(scanf("%c",&op)==1&&op!='T'){
        if(op=='P'){
            int a,w,h,l;
            scanf("%d %d %d %d",&a,&w,&h,&l);
            double cprice=0.89*a*w*h*l/12;
            total+=cprice;
            printf("%.2lf\n",cprice);
        }
        else if(op=='F'){
            int a,w,h,l;
            scanf("%d %d %d %d",&a,&w,&h,&l);
            double cprice=1.09*a*w*h*l/12;
            total+=cprice;
            printf("%.2lf\n",cprice);
        }
        else if(op=='C'){
            int a,w,h,l;
            scanf("%d %d %d %d",&a,&w,&h,&l);
            double cprice=2.26*a*w*h*l/12;
            total+=cprice;
            printf("%.2lf\n",cprice);
        }
        else if(op=='M'){
            int a,w,h,l;
            scanf("%d %d %d %d",&a,&w,&h,&l);
            double cprice=4.50*a*w*h*l/12;
            total+=cprice;
            printf("%.2lf\n",cprice);
        }
        else if(op=='O'){
            int a,w,h,l;
            scanf("%d %d %d %d",&a,&w,&h,&l);
            double cprice=3.10*a*w*h*l/12;
            total+=cprice;
            printf("%.2lf\n",cprice);
        }
    }
    printf("%.2lf",total);
}*/
//数组处理
/*int main(){
    double data[101]={0};
    for(int i=0;i<100;i++){
        data[i]+=1.0;
        data[i]=data[i]*(2*i+2)*(2*i+3)*(2*i+4);
        data[i]=1.0/data[i];
        if(i%2!=0)data[i]=-data[i];
    }
    double total=0;
    for(int i=0;i<100;i++){
        total+=data[i];
    }
    printf("%.4lf",total*4.0+3.0);
}*/
//五子棋判断
/*int main(){
    char c[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            scanf("%c",&c[i][j]);
        }
        getchar();
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<10;j++){
            if(c[i][j]=='W'&&(c[i][j]==c[i+1][j]
            &&c[i][j]==c[i+2][j]
            &&c[i][j]==c[i+3][j]
            &&c[i][j]==c[i+4][j])
                            ){printf("W");return 0;}
            if(c[i][j]=='B'&&(c[i][j]==c[i+1][j]
            &&c[i][j]==c[i+2][j]
            &&c[i][j]==c[i+3][j]
            &&c[i][j]==c[i+4][j])
                            ){printf("B");return 0;}
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<6;j++){
            if(c[i][j]=='W'&&(c[i][j]==c[i][j+1]
            &&c[i][j]==c[i][j+2]
            &&c[i][j]==c[i][j+3]
            &&c[i][j]==c[i][j+4])
                            ){printf("W");return 0;}
            if(c[i][j]=='B'&&(c[i][j]==c[i][j+1]
            &&c[i][j]==c[i][j+2]
            &&c[i][j]==c[i][j+3]
            &&c[i][j]==c[i][j+4])
                            ){printf("B");return 0;}
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(c[i][j]=='W'&&(c[i][j]==c[i+1][j+1]
            &&c[i][j]==c[i+2][j+2]
            &&c[i][j]==c[i+3][j+3]
            &&c[i][j]==c[i+4][j+4])
                            ){printf("W");return 0;}
            if(c[i][j]=='B'&&(c[i][j]==c[i+1][j+1]
            &&c[i][j]==c[i+2][j+2]
            &&c[i][j]==c[i+3][j+3]
            &&c[i][j]==c[i+4][j+4])
                            ){printf("B");return 0;}
        }
    }
    for(int i=4;i<10;i++){
        for(int j=0;j<6;j++){
            if(c[i][j]=='W'&&(c[i][j]==c[i-1][j+1]
            &&c[i][j]==c[i-2][j+2]
            &&c[i][j]==c[i-3][j+3]
            &&c[i][j]==c[i-4][j+4])
                            ){printf("W");return 0;}
            if(c[i][j]=='B'&&(c[i][j]==c[i-1][j+1]
            &&c[i][j]==c[i-2][j+2]
            &&c[i][j]==c[i-3][j+3]
            &&c[i][j]==c[i-4][j+4])
                            ){printf("B");return 0;}
        }
    }
    printf("N");
}*/
//数字出现次数
/*int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];a[i]=a[j];a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i==0){
            continue;
        }
        if(a[i]==a[i-1]){
            sum++;
        }
        else{
            printf("%d %d\n",a[i-1],sum);
            sum=1;
        }
    }
    printf("%d %d\n",a[n-1],sum);
}*/
//数组插入数字
/*int main(){
    int a[101]={0};
    int len;
    scanf("%d",&len);
    for(int i=0;i<len;i++){
       scanf("%d",&a[i]); 
    }
    int op;
    scanf("%d",&op);
    while(op--){
        int pl,num;
        scanf("%d %d",&pl,&num);
        for(int i=len;i>pl-1;i--){
            a[i]=a[i-1];
        }
        a[pl]=num;
        len++;
    }
    for(int i=0;i<len;i++){
       printf("%d ",a[i]); 
    }
}*/
//数组初始化
/*int main(){
    double a[11][5];
    double d;
    scanf("%lf",&d);
    for(int i=0;i<11;i++){
        a[i][0]=d+0.1*i;
        a[i][1]=1/a[i][0];
        a[i][2]=a[i][0]*a[i][0];
        a[i][3]=a[i][2]*a[i][0];
        a[i][4]=a[i][3]*a[i][0];
    }
    for(int i=0;i<11;i++){
        for(int j=0;j<5;j++){
        printf("%-10.4lf ",a[i][j]);
    }
    printf("\n");
    }
}*/
//出现次数超过一半(不从0开始的时候一定要注意特殊情况**********************)
/*int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n==1){printf("%d",a[0]);return 0;}
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];a[i]=a[j];a[j]=temp;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            sum++;
            if(sum>n/2){printf("%d",a[i]);return 0;}
        }
        else{
            sum=1;
        }
    }
    printf("no");
}*/
//落子判断
/*int main(){
    char c[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            scanf("%c",&c[i][j]);
        }
        getchar();
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<10;j++){
            if(c[i][j]=='B'){
                int countw=0,countd=0;
                for(int k=1;k<=4;k++){
                    if(c[i+k][j]=='B')countw++;
                    else if(c[i+k][j]=='.')countd++;
                }
                if(countw==3&&countd==1)
                {printf("Y");return 0;}
            }
            if(c[i][j]=='W'&&(c[i][j]==c[i+1][j]
            &&c[i][j]==c[i+2][j]
            &&c[i][j]==c[i+3][j]
            &&c[i][j]==c[i+4][j])
                            ){printf("N");return 0;}
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<6;j++){
           if(c[i][j]=='B'){
                int countw=0,countd=0;
                for(int k=1;k<=4;k++){
                    if(c[i][j+k]=='B')countw++;
                    else if(c[i][j+k]=='.')countd++;
                }
                if(countw==3&&countd==1)
                {printf("Y");return 0;}
            }
            if(c[i][j]=='W'&&(c[i][j]==c[i][j+1]
            &&c[i][j]==c[i][j+2]
            &&c[i][j]==c[i][j+3]
            &&c[i][j]==c[i][j+4])
                            ){printf("N");return 0;}
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(c[i][j]=='B'){
                int countw=0,countd=0;
                for(int k=1;k<=4;k++){
                    if(c[i+k][j+k]=='B')countw++;
                    else if(c[i+k][j+k]=='.')countd++;
                }
                if(countw==3&&countd==1)
                {printf("Y");return 0;}
            }
            if(c[i][j]=='W'&&(c[i][j]==c[i+1][j+1]
            &&c[i][j]==c[i+2][j+2]
            &&c[i][j]==c[i+3][j+3]
            &&c[i][j]==c[i+4][j+4])
                            ){printf("N");return 0;}
        }
    }
    for(int i=4;i<10;i++){
        for(int j=0;j<6;j++){
            if(c[i][j]=='B'){
                int countw=0,countd=0;
                for(int k=1;k<=4;k++){
                    if(c[i-k][j+k]=='B')countw++;
                    else if(c[i-k][j+k]=='.')countd++;
                }
                if(countw==3&&countd==1)
                {printf("Y");return 0;}
            }
            if(c[i][j]=='Y'&&(c[i][j]==c[i-1][j+1]
            &&c[i][j]==c[i-2][j+2]
            &&c[i][j]==c[i-3][j+3]
            &&c[i][j]==c[i-4][j+4])
                            ){printf("N");return 0;}
        }
    }
    printf("N");
}*/
//数组删改（原题要考虑负下标，神经病，我就是对的***）
/*int main(){
    int len;
    scanf("%d",&len);
    int a[201];
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char op;
        scanf("%c",&op);
        if(op=='U'){
            int pl,num;
            scanf("%d %d",&pl,&num);
            if(pl>=len)printf("Invalid Operation!\n");
            else a[pl]=num;
        }
        else if(op=='I'){
            int pl,num;
            scanf("%d %d",&pl,&num);
            if(pl>len)printf("Invalid Operation!\n");
            else {for(int i=len;i>pl;i--){
            a[i]=a[i-1];
        }
        a[pl]=num;len++;}
        }
        else if(op=='D'){
            int pl;
            scanf("%d",&pl);
            if(pl>=len)printf("Invalid Operation!\n");
            else {for(int i=pl;i<len-1;i++){
            a[i]=a[i+1];
        }
        len--;
        }
        }
        else if(op=='C'){
            int num;
            scanf("%d",&num);
            int contain=0;
            for(int j=len-1;j>=0;j--){
                if(a[j]==num){
                    contain=1;
                    for(int i=j;i<len-1;i++){
            a[i]=a[i+1];
        }
        len--;
                }
            }
            if(!contain)printf("Invalid Operation!\n");
        }
        else if(op=='S'){
            int pl1,pl2;
            scanf("%d %d",&pl1,&pl2);
            if(pl1>=len||pl2>=len)printf("Invalid Operation!\n");
            else {int temp=a[pl1];a[pl1]=a[pl2];a[pl2]=temp;}
        }
        else if(op=='Q'){
            int pl;
            scanf("%d",&pl);
            if(pl>=len)printf("Invalid Operation!\n");
            else printf("%d\n",a[pl]);
        }
        getchar();
    }
}*/
//大数加法(好好看看这个吧，c语言太傻比了)
/*int main(){
    char a[1001],b[1001];
    scanf("%s\n%s",a,b);
    if(strlen(a)<strlen(b)){
        char t[1001];
        strcpy(t,a);strcpy(a,b);strcpy(b,t);
    }
    int lena=strlen(a),lenb=strlen(b);
    char r[1002]={0};
    int jin=0,i=lena-1,j=lenb-1,k=0;
    while(i>=0||j>=0||jin){
        int s=jin;
        if(i>=0){s+=a[i]-'0';i--;}
        if(j>=0){s+=b[j]-'0';j--;}
        jin=s/10;
        r[k++]=(s%10)+'0';
    }
    for(int x=0,y=k-1;x<y;x++,y--){
        char t=r[x];r[x]=r[y];r[y]=t;
    }
    printf("%s",r);
}*/
//矩阵转置
/*int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[j][i]);
        }
        getchar();
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}*/
//找子串（fgets的用法看这里************************************
/*int main(){
    char str[85],substr[85];
    int a[85];
    int count=0;
    fgets(str,85,stdin);
    fgets(substr,85,stdin);
    str[strcspn(str,"\n")]='\0';//还是记住这个吧
    substr[strcspn(substr,"\n")]='\0';
    int slen=strlen(str),sslen=strlen(substr);
    for(int i=0;i<=slen-sslen;i++){
        if(strncmp(&str[i],substr,sslen)==0){
            a[count]=i;count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++){
        printf("%d ",a[i]);
    }
}*/
//拨号打字
/*#include<string.h>
#include <ctype.h>
int main(){
    char c[85];
    fgets(c,85,stdin);
    int len=strlen(c);
    for(int i=0;i<len;i++){
        if(isupper(c[i]))c[i]=c[i]-'A'+'a';
        if(c[i]=='a'||c[i]=='b'||c[i]=='c'){
            printf("2");
        }
        else if(c[i]=='d'||c[i]=='e'||c[i]=='f'){
            printf("3");
        }
        else if(c[i]=='g'||c[i]=='h'||c[i]=='i'){
            printf("4");
        }
        else if(c[i]=='j'||c[i]=='k'||c[i]=='l'){
            printf("5");
        }
        else if(c[i]=='m'||c[i]=='n'||c[i]=='o'){
            printf("6");
        }
        else if(c[i]=='p'||c[i]=='q'||c[i]=='r'||c[i]=='s'){
            printf("7");
        }
        else if(c[i]=='t'||c[i]=='u'||c[i]=='v'){
            printf("8");
        }
        else if(c[i]=='w'||c[i]=='x'||c[i]=='y'||c[i]=='z'){
            printf("9");
        }
    }
}*/
//最小字符串
/*int main(){
    int n;
    scanf("%d",&n);
    n--;
    getchar();
    char min[85];
    fgets(min,85,stdin);
    min[strcspn(min,"\n")]='\0';
    while(n--){
        char temp[85];
        fgets(temp,85,stdin);
    temp[strcspn(temp,"\n")]='\0';
    if(strcmp(temp,min)<0){
        strcpy(min,temp);
    }
    }
    printf("%s",min);
}*/
//字符串交织
/*int main(){
    char s1[85];
    char s2[85];
    char s3[170]="";
    scanf("%s %s",s1,s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    if(len1==len2){
        for(int i=0;i<len1;i++){
            strncat(s3,&s1[i],1);strncat(s3,&s2[i],1);
        }
        printf("%s",s3);
    }
    else if(len1>len2){
        for(int i=0;i<len2;i++){
            strncat(s3,&s1[i],1);strncat(s3,&s2[i],1);
        }
        for(int i=len2;i<len1;i++){
            strncat(s3,&s1[i],1);
        
        }
        printf("%s",s3);
    }
    else{
        for(int i=0;i<len1;i++){
            strncat(s3,&s1[i],1);strncat(s3,&s2[i],1);
        }
        for(int i=len1;i<len2;i++){
            strncat(s3,&s2[i],1);
        }
        printf("%s",s3);
    }
}*/
//循环判断
/*int main(){
    char str[100];
    char sstr[100];
    char temp[100];
    scanf("%s %s",str,sstr);
    int lens=strlen(str),lenss=strlen(sstr);
    if(lens!=lenss){printf("No");return 0;}
    strcpy(temp,str);
    strcat(str,temp);
    lens=strlen(str);
    for(int i=0;i<lenss;i++){
        if(strncmp(&str[i],sstr,lenss)==0){
            printf("%d",i);return 0;
        }
    }
    printf("No");
}*/
//最大最小拼接
/*int main(){
    int n;
    scanf("%d",&n);
    n--;
    getchar();
    char min[85];
    char max[85];
    fgets(min,85,stdin);
    min[strcspn(min,"\n")]='\0';
    strcpy(max,min);
    while(n--){
        char temp[85];
        fgets(temp,85,stdin);
    temp[strcspn(temp,"\n")]='\0';
    if(strcmp(temp,min)<0){
        strcpy(min,temp);
    }
    else if(strcmp(temp,max)>0){
        strcpy(max,temp);
    }
    }
    strcat(max,min);
    printf("%s",max);
}*/
//顺时针打印
/*int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    for(int ceng=n-1;ceng>1;ceng--){
        for(int j=n-1-ceng;j<ceng;j++){
            printf("%c",a[n-1-ceng][j]);
        }
        for(int i=n-1-ceng;i<ceng;i++){
            printf("%c",a[i][ceng]);
        }
        for(int j=ceng;j>n-1-ceng;j--){
            printf("%c",a[ceng][j]);
        }
        for(int i=ceng;i>n-1-ceng;i--){
            printf("%c",a[i][n-1-ceng]);
        }
    }
    if(n%2==1){
        printf("%c",a[n/2][n/2]);
    } 
}*/
//冒泡排序
/*int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];a[j]=a[j+1];a[j+1]=temp;
            }
        }
    }
    printf("%d",a[0]);
    for(int i=1;i<n;i++){
        printf(",%d",a[i]);
    }
}*/
//数组逆序重放
/*int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}*/
//删除元音字母
/*int main(){
    char str[105];
    scanf("%s",str);
    char sstr[105]="";
    int len=strlen(str);
    int j=0;
    for(int i=0;i<len;i++){
        if(str[i]!='a'&&str[i]!='A'&&
            str[i]!='e'&&str[i]!='E'&&
            str[i]!='i'&&str[i]!='I'&&
            str[i]!='o'&&str[i]!='O'&&
            str[i]!='u'&&str[i]!='U'){
                sstr[j++]=str[i];//减少复杂度
            }
    }
        printf("%s",sstr);
}*/
//青蛙跳台阶
/*int fbnq(int a){
    if(a==1)return 1;
    else if(a==2)return 2;
    else{
        return fbnq(a-1)+fbnq(a-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fbnq(n));
}*/
//数组动态分配(非常重要！！！！！！！！！！！！！！！！！！！！！！！！！！！)
/*int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
       int n;
       scanf("%d",&n);
       double total=0;
       int *p=(int *)malloc(n*sizeof(int));
        for(int i=0;i<n;i++) {
            scanf("%d", &p[i]);//&p[i]非常重要！！！！！！！！！！
            total+=p[i];
        }
       printf("%.4lf\n",total/n);
       free(p);
    }
}*/
//梯形数组分配
/*int main(){
       int n;
       scanf("%d",&n);
       int **p=(int **)malloc(n*sizeof(int *));
        int total=n*sizeof(int *);
        for(int i=0;i<n;i++) {
            p[i]=(int *)malloc((i+1)*sizeof(int));
            total+=(i+1)*sizeof(int);
        }
        printf("%d",total);
        free(p); 
}*/
//结构体和联合体
/*struct student{
int id;
char name[55];
int gradetype;
union{
    double score;
    char level;
};
}student;
int main(){
    struct student stu;
    while(scanf("%d %s %d",&stu.id,stu.name,&stu.gradetype)==3){
        if(stu.gradetype==0){
            scanf(" %lf",&stu.score);
            printf("ID: %d, Name: %s, Score Type: %d, Score: %.1lf\n",stu.id,stu.name,stu.gradetype,stu.score);
        }
        else if(stu.gradetype==1){
            scanf(" %c",&stu.level);
            printf("ID: %d, Name: %s, Score Type: %d, Grade: %c\n",stu.id,stu.name,stu.gradetype,stu.level);
        }
        getchar();
    }
}*/
//结构体遍历
/*struct student
{
    int id;
    char name[15];
    int grade;
    int class;
    double score;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student studentall[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d",&studentall[i].id,studentall[i].name,&studentall[i].grade,&studentall[i].class);
    }
    for(int i=0;i<n;i++){
        int ids;
        scanf("%d",&ids);
        for(int j=0;j<n;j++){
            if(studentall[j].id==ids){
                scanf("%lf",&studentall[j].score);
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %s %d %d %.1lf\n",studentall[i].id,studentall[i].name,studentall[i].grade,studentall[i].class,studentall[i].score);
    }
}*/
struct student
{
    int id;
    char name[15];
    int grade;
    int class;
    double score;
};
void swap(struct student *student1,struct student *student2){
    struct student temp=*student1;
    *student1=*student2;
    *student2=temp;

}
int main(){
    int n;
    scanf("%d",&n);
    struct student studentall[101];
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d %lf",&studentall[i].id,studentall[i].name,&studentall[i].grade,&studentall[i].class,&studentall[i].score);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(studentall[i].score>studentall[j].score){
                swap(&studentall[i],&studentall[j]);
            }
            else if(studentall[i].score==studentall[j].score){
                if(strcmp(studentall[j].name,studentall[i].name)<0){
swap(&studentall[i],&studentall[j]);
            }
            else if(strcmp(studentall[j].name,studentall[i].name)==0){
                if(studentall[i].grade>studentall[j].grade){
swap(&studentall[i],&studentall[j]);
            }
            else if(studentall[i].grade==studentall[j].grade){
                if(studentall[i].class>studentall[j].class){
swap(&studentall[i],&studentall[j]);
            }
            }
            }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d %s %d %d %.1lf\n",studentall[i].id,studentall[i].name,studentall[i].grade,studentall[i].class,studentall[i].score);
    }
}






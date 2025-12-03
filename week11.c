/*#include <stdio.h>
double a[100];
int main(){
    double sum=0;
    for(int i=0;i<100;i++){
        a[i]=1.0;
        for(double j=(i+1)*2;j<=(i+2)*2;j++){
            a[i]/=j;
        }
        if(i%2==1)a[i]=-a[i];
        sum+=a[i];
    }
    sum=sum*4.0+3.0;
    printf("%.4lf",sum);
}*/
/*#include <stdio.h>
char a[10][10];
int main(){
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
    scanf("%c",&a[i][j]);
}
getchar();
}
for(int i=0;i<10;i++){
    for(int j=0;j<6;j++){
        if(a[i][j]=='W'){
            if(a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]&&a[i][j]==a[i][j+3]&&a[i][j]==a[i][j+4]){
                printf("W");
                return 0;
}
}
        if(a[i][j]=='B'){
            if(a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]&&a[i][j]==a[i][j+3]&&a[i][j]==a[i][j+4]){
                printf("B");
                return 0;
}
}
}
}
for(int i=0;i<6;i++){
    for(int j=0;j<10;j++){
        if(a[i][j]=='W'){
            if(a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]&&a[i][j]==a[i+3][j]&&a[i][j]==a[i+4][j]){
                printf("W",a[i][j]);
                return 0;
}
}
        f(a[i][j]=='B'){
            if(a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]&&a[i][j]==a[i+3][j]&&a[i][j]==a[i+4][j]){
                printf("B",a[i][j]);
                return 0;
}
}
}
}
for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(a[i][j]=='W'){
            if(a[i][j]==a[i+1][j+1]&&a[i][j]==a[i+2][j+2]&&a[i][j]==a[i+3][j+3]&&a[i][j]==a[i+4][j+4]){
                printf("W",a[i][j]);
                return 0;
}
}
        if(a[i][j]=='B'){
            if(a[i][j]==a[i+1][j+1]&&a[i][j]==a[i+2][j+2]&&a[i][j]==a[i+3][j+3]&&a[i][j]==a[i+4][j+4]){
                printf("B",a[i][j]);
                return 0;
}
}
}
}
for(int i=9;i>3;i--){
    for(int j=0;j<6;j++){
        if(a[i][j]=='W'){
            if(a[i][j]==a[i-1][j+1]&&a[i][j]==a[i-2][j+2]&&a[i][j]==a[i-3][j+3]&&a[i][j]==a[i-4][j+4]){
                printf("W",a[i][j]);
                return 0;
}
}
        if(a[i][j]=='B'){
            if(a[i][j]==a[i-1][j+1]&&a[i][j]==a[i-2][j+2]&&a[i][j]==a[i-3][j+3]&&a[i][j]==a[i-4][j+4]){
                printf("B",a[i][j]);
                return 0;
}
}
}
}
printf("N");
}

#include <stdio.h>
int a[1000];
int b[1000];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int size=n;
    for(int i=1;i<=m;i++){
    int index,num;
    scanf("%d %d",&index,&num);
    for (int j=size;j>index;j--)
    {
        a[j]=a[j-1];
    }
    a[index]=num;
    size++;
    }
    for(int i=0;i<n+m;i++){
        printf("%d ",a[i]);
    }
}*/
/*#include <stdio.h>
double a[11][5];
int main(){
    double n;
    scanf("%lf",&n);
    for(int i=0;i<=10;i++){
        a[i][0]=n+i/10.0;
        a[i][1]=1.0/a[i][0];
        a[i][2]=a[i][0]*a[i][0];
        a[i][3]=a[i][2]*a[i][0];
        a[i][4]=a[i][3]*a[i][0];
        printf("%.4lf    %.4lf    %.4lf    %.4lf    %.4lf\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
    }
}
*/
/*#include <stdio.h>
int a[10000];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j])count++;
            if(count>n/2){
                printf("%d",a[i]);
                return 0;
            }
        }
    }
    printf("no");
}*/
/*
#include <stdio.h>
char a[10][10];
int main(){
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
    scanf("%c",&a[i][j]);
}
getchar();
}
for(int i=0;i<10;i++){
    for(int j=0;j<6;j++){
        if(a[i][j]=='W'){
            if(
                a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]&&a[i][j]==a[i][j+3]||
                a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]&&a[i][j]==a[i][j+4]||
                a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+3]&&a[i][j]==a[i][j+4]||
                a[i][j]==a[i][j+2]&&a[i][j]==a[i][j+3]&&a[i][j]==a[i][j+4]
            ){
                printf("Y");
                return 0;
}
}
}
        if(a[i][6]==a[i][7]&&a[i][6]==a[i][8]&&a[i][6]==a[i][9]){
                printf("Y");
                return 0;
}
}
for(int i=0;i<6;i++){
    for(int j=0;j<10;j++){
        if(a[i][j]=='W'){
            if(
                a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]&&a[i][j]==a[i+3][j]||
                a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]&&a[i][j]==a[i+4][j]||
                a[i][j]==a[i+1][j]&&a[i][j]==a[i+3][j]&&a[i][j]==a[i+4][j]||
                a[i][j]==a[i+2][j]&&a[i][j]==a[i+3][j]&&a[i][j]==a[i+4][j]
            ){
                printf("Y",a[i][j]);
                return 0;
}
if(a[6][j]==a[7][j]&&a[6][j]==a[8][j]&&a[6][j]==a[9][j]){
                printf("Y");
                return 0;
}
}
}

}
for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(a[i][j]=='W'){
            if(
                a[i][j]==a[i+1][j+1]&&a[i][j]==a[i+2][j+2]&&a[i][j]==a[i+3][j+3]||
                a[i][j]==a[i+1][j+1]&&a[i][j]==a[i+2][j+2]&&a[i][j]==a[i+4][j+4]||
                a[i][j]==a[i+1][j+1]&&a[i][j]==a[i+3][j+3]&&a[i][j]==a[i+4][j+4]||
                a[i][j]==a[i+2][j+2]&&a[i][j]==a[i+3][j+3]&&a[i][j]==a[i+4][j+4]
            ){
                printf("Y",a[i][j]);
                return 0;
}
}
}
}
for(int i=1;i<7;i++){
    if(a[i][6]=='W'){
        if(a[i][6]==a[i+1][7]&&a[i][6]==a[i+2][8]&&a[i][6]==a[i+3][9]){
            printf("Y");
                return 0;
        }
    }
}
for(int i=9;i>3;i--){
    for(int j=0;j<6;j++){
        if(a[i][j]=='W'){
            if(
                a[i][j]==a[i-1][j+1]&&a[i][j]==a[i-2][j+2]&&a[i][j]==a[i-3][j+3]||
                a[i][j]==a[i-1][j+1]&&a[i][j]==a[i-2][j+2]&&a[i][j]==a[i-4][j+4]||
                a[i][j]==a[i-1][j+1]&&a[i][j]==a[i-3][j+3]&&a[i][j]==a[i-4][j+4]||
                a[i][j]==a[i-2][j+2]&&a[i][j]==a[i-3][j+3]&&a[i][j]==a[i-4][j+4]
            ){
                printf("Y",a[i][j]);
                return 0;
}
}
}
}
for(int i=1;i<7;i++){
    if(a[i][0]=='W'){
        if(a[i][6]==a[i+1][7]&&a[i][6]==a[i+2][8]&&a[i][6]==a[i+3][9]){
            printf("Y");
                return 0;
        }
    }
}
printf("N");
}*/
/*
#include <stdio.h>
char a[10][10];
int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<6;j++){
            if(a[i][j]=='.'||a[i][j]=='B'){
                int count=0;
                int blank=0;
                for(int k=0;k<5;k++){
                    if(a[i][j+k]=='B')count++;
                    else if(a[i][j+k]=='.')blank++;
                    else break;
                }
                if(count==4&&blank==1){
                    printf("Y");//黑竖
                    return 0;
                }
            }
            if(a[i][j]=='W'){
                int win=1;
                for(int k=0;k<5;k++){
                    if(a[i][j+k]!='W'){
                        win=0;
                        break;
                    }
                }
                if(win){
                    printf("N");//白竖
                    return 0;
                }
            }
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<10;j++){
            if(a[i][j]=='.'||a[i][j]=='B'){
                int count=0;
                int blank=0;
                for(int k=0;k<5;k++){
                    if(a[i+k][j]=='B')count++;
                    else if(a[i+k][j]=='.')blank++;
                    else break;
                }
                if(count==4&&blank==1){
                    printf("Y");//黑横
                    return 0;
                }
            }
            if(a[i][j]=='W'){
                int win=1;
                for(int k=0;k<5;k++){
                    if(a[i+k][j]!='W'){
                        win=0;
                        break;
                    }
                }
                if(win){
                    printf("N");//白横
                    return 0;
                }
            }
        }
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(a[i][j]=='.'||a[i][j]=='B'){
                int count=0;
                int blank=0;
                for(int k=0;k<5;k++){
                    if(a[i+k][j+k]=='B')count++;
                    else if(a[i+k][j+k]=='.')blank++;
                    else break;
                }
                if(count==4&&blank==1){
                    printf("Y");//黑对角
                    return 0;
                }
            }
            if(a[i][j]=='W'){
                int win=1;
                for(int k=0;k<5;k++){
                    if(a[i+k][j+k]!='W'){
                        win=0;
                        break;
                    }
                }
                if(win){
                    printf("N");//白对角
                    return 0;
                }
            }
        }
    }
    for(int i=4;i<10;i++){
        for(int j=0;j<6;j++){
            if(a[i][j]=='.'||a[i][j]=='B'){
                int count=0;
                int blank=0;
                for(int k=0;k<5;k++){
                    if(a[i-k][j+k]=='B')count++;
                    else if(a[i-k][j+k]=='.')blank++;
                    else break;
                }
                if(count==4&&blank==1){
                    printf("Y");//黑反对角
                    return 0;
                }
            }
            if(a[i][j]=='W'){
                int win=1;
                for(int k=0;k<5;k++){
                    if(a[i-k][j+k]!='W'){
                        win=0;
                        break;
                    }
                }
                if(win){
                    printf("N");//白反对角
                    return 0;
                }
            }
        }
    }
    printf("N");
    return 0;
}*/
#include <stdio.h>
int a[200];
int n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    char ch;
    for(int i=0;i<k;i++){
        scanf(" %c",&ch);
        if(ch=='U'){
            int u,num;
            scanf("%d%d",&u,&num);
            if(u>=0&&u<n){
                a[u]=num;
            }else{
                printf("Invalid Operation!\n");
            }
        }else if(ch=='I'){
            int j,num;
            scanf("%d%d",&j,&num);
            if(j>=0&&j<=n&&n<200){
                for(int l=n;l>j;l--){
                    a[l]=a[l-1];
                }
                a[j]=num;
                n++;
            }else{
                printf("Invalid Operation!\n");
            }
        }else if(ch=='D'){
            int d;
            scanf("%d",&d);
            if(d>=0&&d<n){
                for(int l=d;l<n-1;l++){
                    a[l]=a[l+1];
                }
                n--;
            }else{
                printf("Invalid Operation!\n");
            }
        }else if(ch=='C'){
            int c,found=0;
            scanf("%d",&c);
            for(int l=0;l<n;){
                if(a[l]==c){
                    for(int m=l;m<n-1;m++){
                        a[m]=a[m+1];
                    }
                    n--;
                    found=1;
                }else{
                    l++;
                }
            }
            if(!found){
                printf("Invalid Operation!\n");
            }
        }else if(ch=='S'){
            int num1,num2,temp;
            scanf("%d%d",&num1,&num2);
            if(num1>=0&&num1<n&&num2>=0&&num2<n){
                temp=a[num1];
                a[num1]=a[num2];
                a[num2]=temp;
            }else{
                printf("Invalid Operation!\n");
            }
        }else if(ch=='Q'){
            int q;
            scanf("%d",&q);
            if(q>=0&&q<n){
                printf("%d\n",a[q]);
            }else{
                printf("Invalid Operation!\n");
            }
        }
    }
    return 0;
}
/*#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);//检索一个奇数
    int row=(n+1)/2;//行数
    for(int i=0;i<row-1;i++){//除了底边的其他行
        for(int j=1;j<=row+i+1;j++){
            if(j==row-i||j==row+i){
                printf("*");//输出斜边
            }
            else if(j==row+i+1){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("*");//输出底边
    }
}*/
#include <stdio.h>
#include <ctype.h>
/*int main(){
    char ch;
    int digitsum=0;
    int uppersum=0;
    int lowersum=0;
    int word=1;
    while((ch=getchar())!=EOF){
        if(isdigit(ch))digitsum++;
        else if(isupper(ch))uppersum++;
        else if(islower(ch))lowersum++;
        else if(ch==' '||ch=='\n'||ch=='\t')word++;
    }
    printf("%d %d %d %d",digitsum,uppersum,lowersum,word);
    return 0;
}
*/
/*void movement(int n,char from,char to,char temp){
    if(n==1){
    printf("move disk 1 from %c to %c\n",from,to);
    return;
    }
    movement(n-1,from,temp,to);
    printf("move disk %d from %c to %c\n",n,from,to);
    movement(n-1,temp,to,from);
}
int main(){
    int i;
    char A,B,C;
    scanf("%d %c %c %c",&i,&A,&B,&C);
    movement(i,A,B,C);
    return 0;
}*/
/*void sliverash(int b){
    static int a=0;
    a+=b;
}
int main(){
    int x=8,y=5;
    int sum=x>y?x:(y=10);
    printf("%d %d %d",x,y,sum);
}*/
int main(){
char kind;
double s,l,w,h;
double price=0;
double totalprice=0;
while(scanf("%c %lf %lf %lf %lf",&kind,&s,&l,&w,&h)==5){
    if(kind=='P')price=s*l*w*h*0.89/12;
    if(kind=='F')price=s*l*w*h*1.09/12;
    if(kind=='C')price=s*l*w*h*2.26/12;
    if(kind=='M')price=s*l*w*h*4.50/12;
    if(kind=='O')price=s*l*w*h*3.10/12;
    totalprice+=price;
    printf("%.2lf\n",price);
    while (getchar() != '\n');
}
printf("%.2lf",totalprice);

}
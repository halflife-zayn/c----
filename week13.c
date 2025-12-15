#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*int main(){
    //char msgA[]="Hello world";
    //char *msg="Hello world";
    //printf("%s\n",msg);
    //printf("%c\n",*msg);
    //printf("%s\n",msgA);
    //msg++; okay
    //msgA++; wrong
    //printf("%c\n",*++msg);
    //printf("%c\n",++*msg);  地址错误
    //printf("%c\n",++*msgA);
    //printf("%s\n",msgA);
    char msgA[]="How are you!";
    char *msg=msgA;
    double d=7.13;
    int *p1;
    double *p2=&d;
    printf("sizeof(char*):%d\n",sizeof(char*));
    printf("sizeof(msg):%d\n",sizeof(msg));
    printf("sizeof(msgA):%d\n",sizeof(msgA));
    printf("sizeof(msgA+1):%d\n",sizeof(msgA+1));//退化
    printf("sizeof(p1):%d\n",sizeof(p1));
    printf("sizeof(p2):%d\n",sizeof(p2));
    printf("msg address:%p\n",msg);
    printf("msgA address:%p\n",msgA);
    msg++;
    printf("msg address:%p\n",msg);//char 类型指针，后移一位

    printf("p1 address:%p\n",p1);//虽然没有初始化，但可以打印
    p1++;
    printf("p1 address:%p\n",p1);//右移四位
    printf("p2 address:%p\n",p2);
    p2++;
    printf("p2 address:%p\n",p2);//右移八位

}*/
/*int main(){
    int a[100];
    int b[100];
    int n;
    int i=0;
    char ch;
    while (scanf("%d%c", &n, &ch) == 2) {
        a[i++] = n;
        if (ch == '\n') break;
        if (i >= 100) break; 
    }
        
    for(int j=0;j<i;j++){
        int count=0;
        for(int k=0;k<i;k++){
            if(a[j]>a[k])count++;
            else if(a[j]==a[k]&&j>k)count++;
    }
    b[count]=a[j];
    }
    printf("%d",b[0]);
    for(int j=1;j<i;j++){
        printf(" %d",b[j]);
    }
}*/
#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main() {
    int a[100];
    int n;
    int i=0;
    while(scanf("%d",&n)==1){
        a[i++]=n;
        if (getchar()=='\n')break;
    }
    for (int j=0;j<i-1;j++){
        for (int k=0;k<i-1-j;k++){
            if (a[k]>a[k+1]){
                swap(&a[k],&a[k+1]);
            }
        }
    }
    printf("%d",a[0]);
        for (int j=1;j<i;j++){
            printf(" %d",a[j]);
        }
    
    printf("\n");
    return 0;
}


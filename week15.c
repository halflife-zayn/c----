#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
            scanf("%d", &p[i]);
            total+=p[i];
        }
       printf("%.4lf\n",total/n);
       free(p);
    }
}*/

/*int main(){
    int n;
    scanf("%d",&n);
    int **row=(int **)malloc(n*sizeof(int *));
    int total=n*sizeof(int *);
    for(int i=0;i<n;i++){
        row[i]=(int *)malloc((i+1)*sizeof(int));
        total+=(i+1)*sizeof(int);
    }
    printf("%d",total);
    free(row);
}*/

/*int main(){
    for(int i=1000;i<10000;i++){
        int sqrt=0;
        for(int j=32;j<=100;j++){
            if(i==j*j)sqrt=1;
        }
        if(sqrt){
            int o=i;
            int a,b,c,d;
            d=o%10;
            o/=10;
            c=o%10;
            o/=10;
            b=o%10;
            o/=10;
            a=o;
            if(d==c&&a==b)printf("%d\n",i);
        }
    }
}*/

/*int main(){
    int x,y,m,n,l;
    scanf("%d %d %d %d %d",&x,&y,&m,&n,&l);
    int st=(y-x)%l;
    int ds=m-n;
    int count=0;
    while(st<0)st+=l;
    while(st!=0){
        st=(st-ds)%l;
        if(st<0)st+=l;
        count++;
    }
    printf("%d",count);
}*/
/*int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int presum=1;
    int prepresum=1;
    n--;
    while(n--){
        sum=prepresum+presum;
        prepresum=presum;
        presum=sum;

    }
    printf("%d",sum);
}*/

/*int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j||i+j==n+1){
                printf("X");
            }
            else printf(" ");

        }
        printf("\n");
    }
}*/
int main(){
    char str[105];
    scanf("%s",str);
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        char c=str[i];
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&
        str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
        str[j++]=c;
        }
    }
    str[j]='\0';
    printf("%s",str);
}

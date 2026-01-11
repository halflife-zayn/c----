#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int value;
    struct Node* next;
}Node;
Node* createNode(int value){
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->value=value;
    newNode->next=NULL;
    return newNode;
}
Node* insertNode(Node* head,int index,int value){
    Node* newNode=createNode(value);
    if(index==0){
        newNode->next=head;
        return newNode;
    }
    Node* current=head;
    for(int i=0;i<index-1;i++){
        current=current->next;
    }
    newNode->next=current->next;
    current->next=newNode;
    return head;
}
Node* deleteNode(Node* head, int index){
    if(index == 0){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* current=head;
    for(int i=0;i<index-1;i++){
        current=current->next;
    }
    Node* temp=current->next;
    current->next=temp->next;
    free(temp);
    return head;
}
void printnode(Node* node){
    while(node!=NULL){
        printf("%d ",node->value);
        node=node->next;
    }
}
int main(){
    int n;
    struct Node* head=NULL,* tail=NULL;
    scanf("%d",&n);
    n--;    
    int value;
    scanf("%d",&value);
    Node* new=createNode(value);
    head=new;
    tail=head;
    while(n--){
        scanf("%d",&value);
        Node* new=createNode(value);
        tail->next=new;
        tail=new;
    }
    int t;
    scanf("%d",&t);
    char op;
    while(t--){
        scanf(" %c",&op);
        if(op=='I'){
            int index,value;
            scanf("%d %d",&index,&value);
            head=insertNode(head,index,value);
        }
        else{
            int index;
            scanf("%d",&index);
            head=deleteNode(head,index);
        }
    }
    printnode(head);
    free(head);
}
/*struct point
{
    int x;
    int y;
};
int main(){
    int n;
    struct point point1[200];
    int x1[202]={0};
    int y1[202]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&point1[i].x,&point1[i].y);
        x1[point1[i].x+100]++;
        y1[point1[i].y+100]++;
    }
    int maxx=0;int x2;
    int maxy=0;int y2;
    for(int i=0;i<=200;i++){
        if(maxx<x1[i]||(maxx==x1[i]&&(i-100)<x2)){maxx=x1[i];x2=i-100;}
        if(maxy<y1[i]||(maxy==y1[i]&&(i-100)<y2)){maxy=y1[i];y2=i-100;}
    }
    double avex=0,avey=0;
    int cntx=0,cnty=0;
    for(int i=0;i<n;i++){
        if(point1[i].x==x2){avey+=point1[i].y;cntx++;}
        if(point1[i].y==y2){avex+=point1[i].x;cnty++;}
    }
    avex/=cnty;
    avey/=cntx;
    printf("%.2lf\n%.2lf",avey,avex);
}*/
/**/
/*struct student
{
    int id;
    char name[15];
    int type;
    union
    {
        double score;
        char rank;
    };
};
int main(){
    struct student student1;
    while(scanf("%d %s %d",&student1.id,student1.name,&student1.type)==3){
        if(student1.type==0){
            scanf("%lf",&student1.score);
            printf("ID: %d, Name: %s, Score Type: %d, Score: %.1lf\n",student1.id,student1.name,student1.type,student1.score);
        }
        else if(student1.type==1){
            scanf(" %c",&student1.rank);
            printf("ID: %d, Name: %s, Score Type: %d, Grade: %c\n",student1.id,student1.name,student1.type,student1.rank);
        }
    }
}*/
/*struct student
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
        int k=i;
        for(int j=i+1;j<n;j++){
            if(studentall[k].score>studentall[j].score){
                k=j;
                
            }
            else if(studentall[k].score==studentall[j].score){
                if(strcmp(studentall[j].name,studentall[k].name)<0){
                k=j;
            }
            else if(strcmp(studentall[j].name,studentall[k].name)==0){
                if(studentall[k].grade>studentall[j].grade){
                k=j;
            }
            else if(studentall[k].grade==studentall[j].grade){
                if(studentall[k].class>studentall[j].class){
                k=j;
            }
            }
            }
            }
        }
        if(k!=i)swap(&studentall[i],&studentall[k]);
    }
    for(int i=0;i<n;i++){
        printf("%d %s %d %d %.1lf\n",studentall[i].id,studentall[i].name,studentall[i].grade,studentall[i].class,studentall[i].score);
    }
}*/
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
    struct student studentall[101];
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
/*struct student
{
    int id;
    char name[15];
    int grade;
    int class;
};
int main(){
    struct student student1={1003,"Bob",3,10} ;
    struct student student2;
    scanf("%d %s %d %d",&student2.id,student2.name,&student2.grade,&student2.class);
    
    if(student1.grade<student2.grade){
        printf("%d %s %d %d",student1.id,student1.name,student1.grade,student1.class);
    }
    else printf("%d %s %d %d",student2.id,student2.name,student2.grade,student2.class);
}*/
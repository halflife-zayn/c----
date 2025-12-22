#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/*int main() {
    char *words[205], *others[205]; //pointer for storing words and non-words address
    char input[205], temp[205];  //temp array for storing input line and each word
    char *pos = input;  //pointer for traversing input array
    int wordPos[205];   //array for storing the position type of each token (word or non-word)
    fgets(input, sizeof(input), stdin);
    input[strlen(input)-1] = '\0';
    int n=0, n_word=0, n_other=0;
    while(*pos != '\0'){
        while(*pos == ' ') pos++; //skip spaces
        int word_len = 0, is_word = 1;
        while(*pos != ' ' && *pos != '\0'){ //extract a token
            if(!isalpha(*pos)){  //check if it's a word
                is_word = 0;   
            }
            temp[word_len++] = *pos;
            pos++;
        }
        temp[word_len] = '\0';
        if(word_len == 0) break;  // break if no more tokens
        if(is_word){              // store a word
            words[n_word] = (char *)malloc(word_len + 1);
            strcpy(words[n_word], temp);
            n_word++;
            wordPos[n] = 1;
        } else {           // store a non-word
            others[n_other] = (char *)malloc(word_len + 1);
            strcpy(others[n_other], temp);
            n_other++;
            wordPos[n] = 0;
        }
        n++;
    }   

    // ========== 第39行开始填空 ==========
    // 对纯单词进行排序（使用冒泡排序）
    for(int i = 0; i < n_word-1; i++) {
        for(int j = 0; j < n_word-i-1; j++) {
            if(strcmp(words[j], words[j+1]) > 0) {
                char *temp_ptr = words[j];
                words[j] = words[j+1];
                words[j+1] = temp_ptr;
            }
        }
    }
    
    // 重新组合并输出
    int word_idx = 0, other_idx = 0;
    for(int i = 0; i < n; i++) {
        if(i > 0) printf(" ");  // 单词间加空格
        if(wordPos[i] == 1) {
            printf("%s", words[word_idx++]);
        } else {
            printf("%s", others[other_idx++]);
        }
    }
    printf("\n");
    // ========== 填空结束 ==========

    for(int i=0; i<n_word;i++){
        free(words[i]);
    }
    for(int i=0; i<n_other;i++){
        free(others[i]);
    }
}*/
/*int main(){
    int a[10]={0,0,12,0};
    int *ptr=a;
    printf("%d\n",a[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",*ptr+2);
    printf("%d\n",*(ptr+3));
}*/


/*int main(){
    int i[1000000000];
int map[10][10]={0};
printf("address of 2-dimansion array:%p\n",map);
printf("address of 1st row:%p\n",map+0);
printf("address of 2nd row:%p\n",map+1);
printf("address of 1st element of 1st row:%p\n",&map[0][0]);
printf("address of 1st element of 1st row:%p\n",*(map+0)+0);
printf("address of 2st element of 1st row:%p\n",*(*(map+0)+1));
printf("distance between 2 rows:%ld\n",(long)(&map[1]-&map[0]));
//printf("distance between 2 rows:%ld\n",(long)(&map[1]-&map[0][0]));
printf("distance between 2 element in a row:%ld\n",(long)(&map[0][5]-&map[0][0]));
printf("distance between 2 rows:%ld\n",(long)(&map[5][0]-&map[0][0]));
printf("distance between 2 rows:%ld\n",(long)(&map[5]+5-&map[0]+0));

}
int min(int *arr,int size){

}*/
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char str[100][85];
    char *swh[100];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        fgets(str[i],81,stdin);
        int len=strlen(str[i]);
        if(str[i][len-1]=='\n'){
            str[i][len-1]='\0';
        }
        swh[i]=str[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int result=strcmp(swh[j],swh[j+1]);
            if(result>0){
                char *temp=swh[j];
                swh[j]=swh[j+1];
                swh[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s\n",swh[i]);
    }
    return 0;
}
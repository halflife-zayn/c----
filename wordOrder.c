#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

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

    

    for(int i=0; i<n_word;i++){
        free(words[i]);
    }
    for(int i=0; i<n_other;i++){
        free(others[i]);
    }
}
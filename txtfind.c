#include <stdio.h>
#include <string.h>
#include "txtfind.h"

int getLine(char * s){
        char c=getchar();
        int i=0,count=0;
        while(c!='\n'&&c!=EOF) {
                if(i<LINE) {
                        *(s+i)=c;
                        i++;
                }
                count++;
                c=getchar();
        }
        if(c!=EOF) {
                *(s+i)='\0';
        }else{
                *(s+i)=EOF;
        }
        return count;
}
int getword(char * w){
        int i=0,count=0;
        char c=getchar();
        while(c!='\n'&&c!=' '&&c!='\t'&&c!=EOF) {
                if(i<WORD) {
                        *(w+i)=c;
                        i++;
                }
                count++;
                c=getchar();
        }
        if(c!=EOF) {
                *(w+i)='\0';
        }else{
                *(w+i)=EOF;
        }
        return count;
}
int substring( char * str1, char * str2){
        //Note that strstr returns a pointer to the start of the word
        //in sent if the word str2 is found
        if(strstr(str1, str2) != NULL) {
                return 1;
        }else{
                return 0;
        }
}
int similar (char *s, char *t){
        int count_s=0;
        int count_t=0;
        while((count_s < strlen(s)) && (count_t < strlen(t)))
        {
                if(*(s+count_s) == *(t+count_t))
                {
                        count_t++;
                        count_s++;
                }
                else
                {
                        count_t++;
                }
        }
        if( count_t+(strlen(t)-count_t) - count_s+(strlen(s)-count_s) <= 1)
        {
                return 1;
        }
        return 0;
}

void print_lines(char * str){
        char line[LINE];
        while(1) {
                int n = getLine(line);
                int flag=substring(line,str);
                if(*(line+n)==EOF) {
                        break;
                }
                if(flag ==1) {
                        printf("%s\n",line);
                }
        }
}
void print_similar_words(char * str){
        char word[WORD];
        while(1) {
                int n = getword(word);
                int flag=similar(str,word);
                if(flag !=0) {
                        printf("%s\n",word);
                }
                if(*(word+n)==EOF) {
                        break;
                }
        }
}

#include <stdio.h>
#include <stdlib.h>
#include "utilFunctions.h"
#include "string.h"

#define EXIT "exit"
#define CLEAR "clear"
#define CAT "cat"
#define SUM "topla"


char *newargv[3];
int i,f;
char *data;
ssize_t buffersize = 0;

void initializeNewargv(char c1[],char c2[],char c3[]){
	newargv[0] = c1;
	newargv[1] = c2;
	newargv[2] = c3;
}

int main(int argc,char *argv[],char ** envp){
	
	while(1){
		memset(&KOMUT[0], 0, sizeof(KOMUT));//KOMUT arrayini temizledik
    	printf("myshell>>");
		getline(&data,&buffersize,stdin);	
		splitWords(data);
		if(equals(KOMUT,EXIT)){
			exit(0);
		}
		f = fork();
		if(f == 0){		
	    	if(equals(KOMUT,CLEAR)){
				system("clear");	    
			}else if(equals(KOMUT,CAT)){
				text(data,' ','\0');
				initializeNewargv(CAT,TXT,NULL);
				i = execve(CAT,newargv,envp);
				perror("execve failed!");
			}else if(equals(KOMUT,SUM)){	
				initializeNewargv(ARG1,ARG2,NULL);
				i = execv(SUM,newargv);
				perror("execve failed!");
			}else {
				printf("komut bulunamadı!\n");		
			}
		}
		else{wait(&i);}
	}
   
	return 0;
}

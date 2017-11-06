#include <stdio.h>
#include <string.h>


void isPalindrome(char str[]);

int main(int argc,char *argv[],char **envp){
   
    isPalindrome(argv[0]);
 
    return 0;
}

void isPalindrome(char str[]){   
   
    int l = 0;
    int h = strlen(str);
    int i= 0;

    int j = 0;
    int lenght = h-1;
    int isPalindrom = 0; 
  
    char newStr[lenght];

    for ( j = 0; j < lenght; ++j)    {
        newStr[j] = str[j];      
    }     
   
    while (lenght > l)    {
        lenght--;      
        if (newStr[l] != newStr[lenght]){          
            isPalindrom++;
        }
        l++;        

    }
    if (isPalindrom > 0)    {
        printf("%s> Palindromik değil!\n", newStr);        
    }else{
        printf("%s> Palindromdur.\n", newStr);
    }
    
}

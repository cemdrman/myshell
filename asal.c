#include <stdio.h>
#include "utilFunctions.h"

int main(int argc,char *argv[],char ** envp){

    int i,sayi,sayac=0;
   // sayi = stringToInt(argv[0]);
    sayi = 15;
    
    for(i = 2; i < sayi; i++)    {
       if(sayi % i == 0)       {
           sayac++;
       }    
    }     
    
    if(sayac == 0)    {
        printf("%d > asaldır\n",sayi);                    
    }else    {
        printf("%d > asal degildir\n",sayi); 
    }
    
   return 0;
}
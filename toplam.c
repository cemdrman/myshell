#include <stdio.h>
#include "utilFunctions.h"

int main(int argc,char *argv[],char **envp){
	int altLimit = stringToInt(argv[0]);
	int ustLimit = stringToInt(argv[1]);
	int diziSinir = (ustLimit - altLimit) + 1;
	
	int i = 0;
	int j = 0;
	int counter = 0;
	int total = 0;

	int numberList[diziSinir];
	for (i = altLimit; i <= ustLimit; ++i)	{
		numberList[counter] = i;
		total += i;
		counter++;
	}
	
	for (j = 0; j < diziSinir; j++){
		if (j < diziSinir - 1){
			printf("%d + ",numberList[j]);
		}else if(diziSinir == j + 1){
			printf("%d = %d\n",numberList[j],total);
		}		
	}
	
	return 0;
}

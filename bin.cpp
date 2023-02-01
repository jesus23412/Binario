#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char num[10];
	char *str1;

	printf("Ingrese un No. decimal del No1 al No9\n");
	gets(num);
	
	if(strlen(num)<=1){
		
		if(num[0]=='0'){	printf("\nNo Bin: 0");	}
		else if(num[0] == '1'){	printf("\nNo Bin: 1");	}
		else if(num[0] == '2'){	printf("\nNo Bin: 10");	}
		else if(num[0] == '3'){	printf("\nNo Bin: 11");	}
		else if(num[0] == '4'){	printf("\nNo Bin: 100");	}
		else if(num[0] == '5'){	printf("\nNo Bin: 101");	}
		else if(num[0] == '6'){	printf("\nNo Bin: 110");	}
		else if(num[0] == '7'){	printf("\nNo Bin: 111");	}
		else if(num[0] == '8'){	printf("\nNo Bin: 1000");	}
		else if(num[0] == '9'){	printf("\nNo Bin: 1001");	}	
		
		else{
			printf("\nError");
		}
	}
	
	else{
		printf("\nEste valor es invalido");
	}
	getch();
}

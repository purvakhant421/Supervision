/#include<stdio.h>
#include<string.h>
int main(){
	FILE *p;
	char ch[50];

	p=fopen("file.txt","w");
	if(p==NULL){
		printf("error");
		
	}
	else{
		printf("Enter text:");
		gets(ch);
		fputs(ch,p);
		fclose(p);
	}
	
return 0;
}
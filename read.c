#include<stdio.h>
#include<string.h>
int main(){
	FILE *p;
	char ch;

	p=fopen("file.txt","r");
	if(p==NULL){
		printf("error");
		
	}
	else{
	 	while(ch!=EOF){
	 		ch=fgetc(p);
	 		printf("%c",ch);
		 }
		 fclose(p);
	}
	
return 0;
}
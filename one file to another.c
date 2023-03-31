#include<stdio.h>
#include<string.h>  
int main(){
      int ch;
      FILE *f1,*f2;
      f1=fopen("file.txt","r");
      f2=fopen("backup.txt","w");   
      if(f1==NULL||f2==NULL){
	      printf("File does not exist!!");
	  }
      else{
      	while((ch=fgetc(f1))!=EOF)
            {
                  fputc(ch,f2);
            }
	  }
            
      printf("File copied!!");
      return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include<conio.h>
int len = 0;
int text[100000];
void writeToFile()
{
	FILE *fp;
	int n,i;
	fp=fopen("Encrypted.txt","w");
	for(int i=0;i<len;i++)
		fprintf(fp,"%d,",text[i]);
	
	fclose(fp);
	getch();

}
int MEA(int p, int e, int n){
 
  int r2 = 1;
  int r1 = 0;
  int Q = 0;
  int R = 0;
 
  while( e != 0 ){
     R = (e % 2);
     Q = ((e - R) / 2);
 
     r1 = ((p * p) % n);
 
       if(R == 1){
          r2 = ((r2 * p) % n);
       }
     p = r1;
     e = Q;
  }
return r2;
}

// Received input from user
void encode(int e,int n){
  int i = 0;

  int c = getchar();
  do{
    c = getchar();
    text[i] = MEA(c, e, n);
    len++;
    i++;
  }while(c != '\n');
}

void clear_input(){
  // Clears the text array
  memset(text,0,sizeof(text));
  len = 0;
}


int main(){

    // Header style
    printf("***************************************************\n");
    printf("*                                                 *\n");
    printf("*       	        RSA Program               *\n");
    printf("*              Created by: Prabal Bansal          *\n");
    printf("*                                                 *\n");
    printf("***************************************************\n");
    int n = 2279; // n = p * q;
    int e = 5; // Public exponent
    printf("\n");
    printf("\tOverview\n");
    printf("\nEnter text to be encrypted: ");
	encode(e,n);
	printf("\n  Total number of characters: %d", len);
    printf("\nWriting Ciphertext to file\n");
    writeToFile();
    printf("\n*************************************\n");
    return 0;
}


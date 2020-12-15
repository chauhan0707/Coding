#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int text[1000],pp[1000],length,i;
void getArray()
{
	int b=1;//boolean
	char *token;
	char help[256];
	FILE *InputFile;
	InputFile = fopen("Encrypted_receive.txt","r");
	fscanf(InputFile,"%s",help);
	token = strtok(help,",");
	i=0;
	while(token!=NULL)
	{
		text[i] = atoi(token);
		token = strtok(NULL,",");
		i++;
	}
	length=i;
}

void Printarray()
{
	for(int i=0;i<length;i++)
	{
		printf("%d\t",text[i]);
	}
}

// d = (1/e) mod n
int mod_inverse(int u, int v)
{
    int inv, u1, u3, v1, v3, t1, t3, q;
    int iter;
    /* Step X1. Initialise */
    u1 = 1;
    u3 = u;
    v1 = 0;
    v3 = v;
    /* Remember odd/even iterations */
    iter = 1;
    /* Step X2. Loop while v3 != 0 */
    while (v3 != 0)
    {
        /* Step X3. Divide and "Subtract" */
        q = u3 / v3;
        t3 = u3 % v3;
        t1 = u1 + q * v1;
        /* Swap */
        u1 = v1; v1 = t1; u3 = v3; v3 = t3;
        iter = -iter;
    }
    /* Make sure u3 = gcd(u,v) == 1 */
    if (u3 != 1)
        return 0;   /* Error: No inverse exists */
    /* Ensure a positive result */
    if (iter < 0)
        inv = v - u1;
    else
        inv = u1;
    return inv;
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
void decode(int d,int n){
  printf("\n");

  for(int i = 0; i < length; i++){
    pp[i] = MEA(text[i], d, n);
  }

  printf("\n*************************************");
  printf("\n   Deciphered text: ");
  for(int i = 0; i < length; i++){
    printf("%c",pp[i]);
  }
}

int main(){

    // Header style
    printf("\n");
    printf("***************************************************\n");
    printf("*                                                 *\n");
    printf("*              RSA (Decryption) Program           *\n");
    printf("*              Created by: Prabal Bansal          *\n");
    printf("*                                                 *\n");
    printf("***************************************************\n");

    int selection = 0;
    int p = 43; // Prime 1
    int q = 53; // Prime 2
    int n = p*q; // n = p * q;
    int e = 5; // Public exponent
    int d = 0; // d = (1/e) mod (phi)
    int phi = 0; // (p - 1) * (q - 1)
	n = p * q;
    phi = (p-1)*(q-1);

    d = mod_inverse(e, phi);
            
    printf("\n*************************************\n");
    printf("  Public encryption key: \n");
    printf("    e = %d\n", e);
    printf("    n = %d\n", n);

    printf("\n");

    printf("  Private decryption key: \n");
    printf("    d = %d\n", d);
    printf("    n = %d", n);
    printf("\n*************************************\n");
            //
            //
            //	Socket for receiving file;
            //
    getArray();
  // Printarray();
  	printf("\n");
    printf("The encrypted data is of length %d",length);
    decode(d,n);
    return 0;
}

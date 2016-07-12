#include <stdio.h>
#include <stdlib.h>
#define S2 "#include <stdio.h>%c#include <stdlib.h>%c#define S2 %c%s%c%c#define S1 %c%s%c%c#define %s%c/*%c Call main by macro%c*/%cFT()%c"
#define S1 "FT()int main(){char a='%cn',b='%c',c='%c%c';\\%cint i = %i;\\%cchar *str=NULL;char *in=NULL;while(i > -1){asprintf(&str,S1,c,b,c,c,i,b,b,b,b);asprintf(&in, %cSully_%i.c%c, i);FILE *f=fopen(in, %cw%c);fprintf(f,S2,a,b,S2,b,a,b,S1,b,a,str,a,a,a,a,a);fclose(f);free(str);i--};return 0;}"
#define FT()int main(){char a='\n',b='"',c='\\';\
int i = 5;\
char *str=NULL;char *in=NULL;while(i > -1){asprintf(&str,S1,c,b,c,c,a,i,a,b,b,b,i,b);asprintf(&in, "Sully_%i.c", i);FILE *f=fopen(in, "w");if (f==NULL)return -1;fprintf(f,S2,a,a,b,S2,b,a,b,S1,b,a,str,a,a,a,a,a);fclose(f);free(str);free(in);i--;}return 0;}
/*
 Call main by macro
*/
FT()

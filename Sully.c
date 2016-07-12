#include <stdio.h>
#include <stdlib.h>
#define S2 "#include <stdio.h>%c#include <stdlib.h>%c#define S2 %c%s%c%c#define S1 %c%s%c%cint foo(char *s){while((*s < '0' || *s > '9') && *s != 0)s++;return *s == 0 ? -1 : atoi(s);}%c#define %s%cFT()%c"
#define S1 "FT()int main(int ac, char**av){char a='%cn',b='%c',c='%c%c';%c%cint i = %i;%c%cif(ac && foo(av[0])>0)i--;if(foo(av[0])==0)return 0;char *str=NULL;char *in=NULL;asprintf(&str,S1,c,b,c,c,c,a,i,c,a,b,b,b,b,b,b);asprintf(&in, %cSully_%%i.c%c, i);FILE *f=fopen(in, %cw%c);if (f==NULL)return -1;fprintf(f,S2,a,a,b,S2,b,a,b,S1,b,a,a,str,a,a);fclose(f);free(str);free(in);char *cmd=NULL;asprintf(&cmd, %cclang -Wall -Wextra -Werror Sully_%%i.c -o Sully_%%i && ./Sully_%%i%c,i,i,i);system(cmd);free(cmd);return 0;}"
int foo(char *s){while((*s < '0' || *s > '9') && *s != 0)s++;return *s == 0 ? -1 : atoi(s);}
#define FT()int main(int ac, char**av){char a='\n',b='"',c='\\';\
int i = 5;\
if(ac && foo(av[0])>0)i--;if(foo(av[0])==0)return 0;char *str=NULL;char *in=NULL;asprintf(&str,S1,c,b,c,c,c,a,i,c,a,b,b,b,b,b,b);asprintf(&in, "Sully_%i.c", i);FILE *f=fopen(in, "w");if (f==NULL)return -1;fprintf(f,S2,a,a,b,S2,b,a,b,S1,b,a,a,str,a,a);fclose(f);free(str);free(in);char *cmd=NULL;asprintf(&cmd, "clang -Wall -Wextra -Werror Sully_%i.c -o Sully_%i && ./Sully_%i",i,i,i);system(cmd);free(cmd);return 0;}
FT()

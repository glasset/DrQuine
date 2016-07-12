#include <stdio.h>
#define S2 "#include <stdio.h>%c#define S2 %c%s%c%c#define S1 %c%s%c%c#define %s%c/*%c Call main by macro%c*/%cFT()%c"
#define S1 "FT()int main(){char a='%cn',b='%c',c='%c%c';char *str=NULL;asprintf(&str,S1,c,b,c,c,b,b,b,b);FILE *f=fopen(%cGrace_kid.c%c, %cw%c);if (f==NULL)return -1;fprintf(f,S2,a,b,S2,b,a,b,S1,b,a,str,a,a,a,a,a);fclose(f);return 0;}"
#define FT()int main(){char a='\n',b='"',c='\\';char *str=NULL;asprintf(&str,S1,c,b,c,c,b,b,b,b);FILE *f=fopen("Grace_kid.c", "w");if (f==NULL)return -1;fprintf(f,S2,a,b,S2,b,a,b,S1,b,a,str,a,a,a,a,a);fclose(f);return 0;}
/*
 Call main by macro
*/
FT()

#include <stdio.h>
#define FOO(a,b)(a<b?a:b)
/*
 Here is my main
*/
int main(void){
/*
 bar comment
*/
char *s0="#include <stdio.h>%c#define FOO(a,b)(a<b?a:b)%c/*%c Here is my main%c*/%cint main(void){%c/*%c bar comment%c*/%c";
char *s1="char *s%c=%c%s%c;%cchar *s%c=%c%s%c;%c";
char *s2="char a='%cn',b='%c',c='%c%c';%c";
char *s3="printf(";
char *s4="%ss0,a,a,a,a,a,a,a,a,a);%c";
char *s5="%ss1,'0',b,s0,b,a,'1',b,s1,b,a);printf(s1,'2',b,s2,b,a,'3',b,s3,b,a);%c";
char *s6="%ss1,'4',b,s4,b,a,'5',b,s5,b,a);printf(s1,'6',b,s6,b,a,'7',b,s7,b,a);printf(s1,'8',b,s8,b,a,'9',b,s9,b,a);%c";
char *s7="%ss2,c,b,c,c,a);printf(s4,s3,a);printf(s5,s3,a);printf(s6,s3,a);%c";
char *s8="%ss7,s3,a);%ss8,s3,s3,a,a,a);%creturn 0;%c}%c";
char *s9="helloworld";
char a='\n',b='"',c='\\';
printf(s0,a,a,a,a,a,a,a,a,a);
printf(s1,'0',b,s0,b,a,'1',b,s1,b,a);printf(s1,'2',b,s2,b,a,'3',b,s3,b,a);
printf(s1,'4',b,s4,b,a,'5',b,s5,b,a);printf(s1,'6',b,s6,b,a,'7',b,s7,b,a);printf(s1,'8',b,s8,b,a,'9',b,s9,b,a);
printf(s2,c,b,c,c,a);printf(s4,s3,a);printf(s5,s3,a);printf(s6,s3,a);
printf(s7,s3,a);printf(s8,s3,s3,a,a,a);
return 0;
}

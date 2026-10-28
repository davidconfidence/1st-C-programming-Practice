#include <stdio.h>

int main ()
{
    char say[10] = "Hello People";
    char* D = &say[0];
    char* a = &say[1];
    char* v = &say[2];
    char* i = &say[3];
    char* d = &say[4];
    char* space = &say[5];
    char* J = &say[6];
    char* e = &say[7];
    char* s = &say[8];
    char* u = &say[9];
    char* sz = &say[10];

     *D = 'D';
     *a = 'a';
     *v = 'v';
     *i = 'i';
     *d = 'd';
     *space = ' ';
     *J = 'J';
     *e = 'e';
     *s = 's';
     *u = 'u';
     *sz = 's';


    //char say[] = &new_Say;


    printf("%c%c%c%c%c%c%c%c%c%c%c", *D, *a, *v, *i, *d, *space, *J, *e, *s, *u, *s);

return 0;
}

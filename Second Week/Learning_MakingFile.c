#include <stdio.h>
int main(){ //!MAIN
char n[50];
char fn[60];
scanf("%s", n);
sprintf(fn, "%s.txt", n);

FILE *ab = fopen(fn, "w");
char eee;
scanf("%s", &eee);
fprintf(ab, "%s", &eee);
fprintf(ab, "gge");

fclose(ab);
}
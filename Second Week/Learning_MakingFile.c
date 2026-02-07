#include <stdio.h>
int main(){ //!MAIN
char n[50];
char fn[60];
scanf("%s", n);
sprintf(fn, "%s.txt", n);

FILE *ab = fopen(fn, "w");

fprintf(ab, "Bank");
fclose(ab);
}
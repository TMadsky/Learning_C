#include <stdio.h>
int main(){ //!MAIN

    
FILE *ab = fopen("test.txt", "w");

fprintf(ab, "Bank");

fclose(ab);
}
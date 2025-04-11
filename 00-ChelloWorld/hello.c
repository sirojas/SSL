#include <stdio.h>

int main(){
    FILE *output = fopen("output.txt","w");
    printf("hola Simon Rojas");
    fprintf(output,"hola Simon Rojas");
    fclose(output);
    return 0;
}
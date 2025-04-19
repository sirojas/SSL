#include <stdio.h>

int main(){
    FILE *output = fopen("output.txt","w");
    printf("hola Simon Rojas");
    stdout = output;
    printf("hola Simon Rojas");
    fclose(output);
    return 0;
}

#include <stdio.h>

int main(){

FILE *plik;
int n, tab[31];

plik = fopen("liczby1.txt","r");
fscanf(plik, "%d", &n);
fclose(plik);
printf("liczba z pliku: %d", n);


}

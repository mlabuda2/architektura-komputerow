#include <stdio.h>
#include <stdio.h>

#define bit32 32;
#define bit64 64;
int main() {

    FILE *plik;
    plik = fopen("liczby1.txt", "r");
    int n, k, l;
    fscanf(plik, "%d", &n);
    printf ("liczba w systemie dziesietnym: %d \n", n);
    fclose(plik);

    printf ("liczba w systemie U2 na 32 bitach:  \n");
    for (int c = 31; c >= 0; c--){
      k = n >> c;
      if (k & 1)
        printf("1");
      else
        printf("0");
 }

    printf ("\n liczba w systemie U2 na 64 bitach:  \n");
    for (int d = 63; d >= 0; d--){
      l = n >> d;
      printf("\n l: %d, d: %d \n", l, d);
      if (l & 1) //1&1 daje 1 co jest true, w c wszystko jest true oprócz 0; 0&1,1&0 daje 0 -> false
        printf("1");
      else
        printf("0");
}

 printf("\n");

 return 0;
}

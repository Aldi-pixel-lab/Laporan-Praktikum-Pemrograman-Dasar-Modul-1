#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;
    int tinggi = 12;

    float sisi_a = tinggi;
    float sisi_c = alas;
    float sisi_b = sqrt(alas * alas + tinggi * tinggi);

    float keliling = sisi_a + sisi_b + sisi_c;
    float luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", sisi_a);
    printf("Sisi B = %.0f cm\n", sisi_b);
    printf("Sisi C = %.0f cm\n", sisi_c);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %f cm\n", luas);

    return 0;
}
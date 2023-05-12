#include <stdio.h>


int linearSearch(int dizi[], int boyut, int eleman) {
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] == eleman) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int boyut;
    printf("Dizi boyutunu girin: ");
    scanf("%d", &boyut);

    int dizi[boyut];

    printf("Dizi elemanlarini girin:\n");
    for (int i = 0; i < boyut; i++) {
        printf("Eleman %d: ", i+1);
        scanf("%d", &dizi[i]);
    }

    printf("Girilen dizinin elemanlari:\n");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    
    int eleman;
    printf("\n\nDizi aramak istediginiz elemani girin: ");
    scanf("%d", &eleman);


    int sonuc = linearSearch(dizi, boyut, eleman);

    if (sonuc == -1) {
        printf("Eleman bulunamadi.\n");
    } else {
        printf("Eleman %d, dizinin indeksi %d.\n", eleman, sonuc);
    }

    
    return 0;
}


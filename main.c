#include <stdio.h>

void geriyeSay(int n) {
    // Sayıyı ekrana yazdır
    printf("%d ", n);
    // Temel durum: n sıfırsa fonksiyondan çık
    if (n == 0) {
        return;
    }
    // Recursive çağrı: n-1 için geriyeSay fonksiyonunu çağır
    geriyeSay(n - 1);
}

int main() {
    int n = 5; // Geriye sayılacak başlangıç sayısı
    // geriyeSay fonksiyonunu çağır
    geriyeSay(n);
    return 0;
}

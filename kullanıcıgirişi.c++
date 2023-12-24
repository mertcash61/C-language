#include <iostream>

// Faktöriyel hesaplama fonksiyonu
int faktoriyel(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}

int main() {
    int sayi;

    // Kullanıcıdan sayı girişi alma
    std::cout << "Faktoriyeli hesaplanacak sayıyı girin: ";
    std::cin >> sayi;

    // Girilen sayının faktöriyelini hesaplayıp ekrana yazdırma
    if (sayi < 0) {
        std::cout << "Negatif sayıların faktöriyeli hesaplanamaz." << std::endl;
    } else {
        int sonuc = faktoriyel(sayi);
        std::cout << sayi << "! = " << sonuc << std::endl;
    }

    return 0;
}

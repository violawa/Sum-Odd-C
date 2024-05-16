#include <stdio.h>

int main() {
    int n, i;
    int sum_odd = 0, sum_even = 0;

    // Meminta jumlah angka yang ingin diinput dari pengguna
    printf("Masukkan jumlah angka yang ingin diinput: ");
    scanf("%d", &n);

    int numbers[n]; // Array untuk menyimpan angka-angka yang diinput

    // Meminta input angka sebanyak n kali
    for (i = 0; i < n; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Menjumlahkan angka di urutan ganjil dan genap
    for (i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) { // Indeks ganjil (urutan genap)
            sum_even += numbers[i];
        } else { // Indeks genap (urutan ganjil)
            sum_odd += numbers[i];
        }
    }

    // Menampilkan hasil penjumlahan
    printf("Jumlah angka di urutan ganjil: %d\n", sum_odd);
    printf("Jumlah angka di urutan genap: %d\n", sum_even);

    return 0;
}

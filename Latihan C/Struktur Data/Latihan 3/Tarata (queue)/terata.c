#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1000 // maksimal jumlah antiran

struct data {
    
};


int nomor[MAX];
int head = -1;
int tail = -1;

bool IsEmpty() {
    if (tail == -1) {
        return true;
    } else {
        return false;
    }
}

bool IsFull() {
    if (tail == MAX - 1) {
        return true;
    } else {
        return false;
    }
}

void DataMasuk(int data) {
    if (IsEmpty()) {
        head = tail = 0;
    } else {
        tail++;
    }
    nomor[tail] = data;
}

void DataKeluar() {
    if (IsEmpty()) {
        printf("Antrian Sudah Kosong!");
        getch();
    } else {
        for (int i = head; i < tail; i++) {
            nomor[i] = nomor[i + 1];
        }
        tail--;
        if (tail == -1) {
            head = -1;
        }
    }
}

void Clear() {
    head = tail = -1;
}

void View() {
    if (IsEmpty()) {
        printf("Antrian Kosong!");
    } else {
        system("cls");
        for (int i = head; i <= tail; i++) {
            printf("No. Data    : %d\n", nomor[i]);
        }
    }
}


int main() {
    int pilih, p = 1, urut;

    do {
        system("cls");
        printf("===Program Queue===\n");
        printf("1. Tambah Data\n2. Panggil Data\n3. Lihat Daftar Data\n4. Clear Data\n5. Exit\n");
        printf("===================\n");
        printf("Pilih: ");
        scanf("%d", &pilih);

        if (pilih == 1 ) {
            if(IsFull()) {
                printf("Data sudah penuh!");
            } else {
                urut = p;
                DataMasuk(urut);
                printf("-----------------------------\n");
                printf("|           No Data         |\n");
                printf("|              %d            |\n", p);
                printf("-----------------------------\n");
                printf("|      Silahkan Mengantri   |\n");
                printf("|     Menunggu %d Antrian    |\n", tail);
                printf("-----------------------------\n");
                p++;
            }
        } else if (pilih == 2) {
            printf("-----------------------------\n");
            printf("No. Antri   : [%d]\n", nomor[head]);
            printf("-----------------------------\n");
            DataKeluar();
            printf("Silahkan Dipanggil!!");
        } else if (pilih == 3) {
            View();
        } else if (pilih == 4) {
            Clear();
            printf("Data Dikosongkan !");
        } else if (pilih == 5) {
        } else {
            printf("Masukkan Anda Salah!!");
        }
        getch();
        
    } while (pilih != 5);
    
}
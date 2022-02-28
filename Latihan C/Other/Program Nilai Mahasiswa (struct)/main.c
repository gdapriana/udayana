#include <stdio.h>
#include <string.h>

struct data {
    char nama[100], nim[100];
    float uts, uas, tugas, kuis;
};


int main() {
    struct data mahasiswa;

    printf("Masukkan NIM            : ");
    gets(mahasiswa.nim);
    printf("Masukkan Nama           : ");
    gets(mahasiswa.nama);
    printf("Masukkan Nilai UTS      : ");
    scanf("%f", &mahasiswa.uts);
    printf("Masukkan Nilai UAS      : ");
    scanf("%f", &mahasiswa.uas);
    printf("Masukkan Nilai Tugas    : ");
    scanf("%f", &mahasiswa.tugas);
    printf("Masukkan Nilai Kuis     : ");
    scanf("%f", &mahasiswa.kuis);

    printf("\n");

    float nUts = mahasiswa.uts * 0.3;
    float nUas = mahasiswa.uas * 0.3;
    float nTugas = mahasiswa.tugas * 0.2;
    float nKuis = mahasiswa.kuis * 0.2;


    float totalNilai = nUts + nUas + nTugas + nKuis;
    
    printf("NIM         : %s\n", mahasiswa.nim);
    printf("Nama        : %s\n", mahasiswa.nama);
    printf("Total Nilai : %.0f\n", totalNilai);
    printf("Nilai Mutu  : "); 
    
    if ((totalNilai <= 100) && (totalNilai >= 80)) {
        return printf("A");
    } else if ((totalNilai < 80) && (totalNilai >= 70)) {
        return printf("B+");
    } else if ((totalNilai < 70) && (totalNilai >= 65)) {
        return printf("B");
    } else if ((totalNilai < 65) && (totalNilai >= 60)) {
        return printf("C+");
    } else if ((totalNilai < 60) && (totalNilai >= 55)) {
        return printf("C");
    } else if ((totalNilai < 55) && (totalNilai >= 50)) {
        return printf("D+");
    } else if ((totalNilai < 50) && (totalNilai >=45 )) {
        return printf("D");
    } else if (totalNilai < 45) {
        return printf("E");
    } else {
        return printf("Nilai Melampaui Batas!!");
    }
    
    return 0;
}
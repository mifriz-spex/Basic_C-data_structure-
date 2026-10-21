#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char dataKelas[36][50] = {
        "WINDI",
        "MUHAMMAD PUTRA CIPIKA PANDIA",
        "REZA MULIA PUTRA",
        "AYU AULIA SARIYANTI",
        "RISKA AYU FEBRIANA",
        "ALBERT PRASETYO SITUMORANG",
        "MARIMAR SITUMEANG",
        "UMAR HIDAYAT",
        "T.FAHREZA",
        "MUTIARA CHALISTA TARIGAN",
        "MHD. RIDHO REYHAN",
        "SITI ZULAYKA MAULIDA AMALI",
        "RACHEL AULIA",
        "DHANY ROLAS",
        "SAMUEL JACKSEN BRAHMANA",
        "YESY PELITA ESTELA PARDEDE",
        "GANDI ARMANA TARIGAN",
        "KEEGAN GIBRAN JEHIAN",
        "REVALDO GINTING",
        "TESA AURELIO GINTING",
        "FAREL LUTHER SIAGIAN",
        "MIFTAH RIZQI NUARI",
        "RAHMAT HAMONANGAN NASUTION",
        "FATIH TAQIYYUDDIN",
        "MUHAMMAD ALIF HABIBIE",
        "AJENG PAWESTRI MASHYTO",
        "YONATAN SIMANJUNTAK",
        "ANNISA NURUL HAYATI",
        "MELISA PUTRI",
        "RAFIQ AHMADANI HARAHAP",
        "HOLAN KRISTIAN SAMOSIR",
        "SYAHRU RAMADHAN NASUTION",
        "ALYA NAZWA M",
        "FARHAN ZUHAIRI HARAHAP",
        "YUDA JAYA SARAGIH",
        "NAYLA SALSABILA"
    };

    char namaDicari[50];
    int indexDitemukan = -1; 

    printf("Masukkan nama mahasiswa yang dicari: ");
    fgets(namaDicari, sizeof(namaDicari), stdin);
    
    namaDicari[strcspn(namaDicari, "\n")] = 0;

    for (int i = 0; i < 36; i++) {
        int match = 1;
        for (int j = 0; dataKelas[i][j] != '\0' || namaDicari[j] != '\0'; j++) {
            if (toupper(dataKelas[i][j]) != toupper(namaDicari[j])) {
                match = 0;
                break;
            }
        }
        
        if (match) {
            indexDitemukan = i;
            break; 
        }
    }

    if (indexDitemukan != -1) {
        printf("%s ditemukan dan ada di index %d\n", dataKelas[indexDitemukan], indexDitemukan);
    } else {
        printf("Mahasiswa tidak ditemukan\n");
    }

    return 0;
}
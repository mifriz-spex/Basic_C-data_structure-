#include <stdio.h>

int main(){
    int mahasiswaUnimed = 1;
    int mengambilProyektor = 0;

    printf("Mahasiswa biasa: %d\n", mahasiswaUnimed && !mengambilProyektor);
    printf("Komting: %d\n", mahasiswaUnimed || mengambilProyektor);
    printf("Bukan Mahasiswa Unimed: %d\n", !mahasiswaUnimed);
    return 0;
}
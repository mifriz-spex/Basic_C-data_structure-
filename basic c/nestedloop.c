#include <stdio.h>

int main(){
    int set, repetisi;

    printf("Push Up\n");

for (set = 1; set <= 2; ++set) {
    printf("Set ke-%d mulai!\n", set); 

    for (repetisi = 1; repetisi <= 3; ++repetisi) {
        printf("  - Push-up hitungan ke-%d\n", repetisi); 
    }
    
    printf("Istirahat sebentar, capek.\n\n");
}

printf("Latihan selesai!.\n");

return 0;
}
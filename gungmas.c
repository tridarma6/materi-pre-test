#include <stdio.h>

int main(){

    int F = 100;
    int finish = 0;

    while(F >= finish){
        if(F % 3 != 0){
            printf("%d", F);
        }
        F--;
    }
    system("cls");    
    return 0;
}

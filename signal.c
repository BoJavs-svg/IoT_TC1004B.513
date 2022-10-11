#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int var=1;
void holaMundo(int signNum){
    if(signNum==10){
        printf("Es la señal 10 \n");
        var=0;
    }else{
        printf("Otro valor");
    }
}
int main(){
    signal(10,holaMundo);
    signal(12,holaMundo);
    signal(11,holaMundo);
    while (var){
        printf("Estoy Trabajando \n");
        sleep(1);
    }
    printf("FUGA \n");
    return 0;
}
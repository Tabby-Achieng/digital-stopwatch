#include <stdio.h>
#include <windows.h>

int main() {

    int Hr = 0;
    int Min = 0;
    int Sec = 0;
    int ms = 0;

    while (1){

     printf(" %2d HOURS : %2d MINUTES : %2d SECONDS : %2d MILLISECONDS", Hr, Min, Sec, ms);
     sleep(10);
     ++ms;
     
     fflush(stdout);

     if (ms == 1000){
     ms=0;
     ++Sec; 
     }

     if (Sec = 60){
     Sec = 0;
     ms = 0;
     ++Min;
     }

     if (Min == 60){
     Min = 0;
     Sec = 0;
     ms = 0;
     ++Hr;
     }


    }
return 0;
}
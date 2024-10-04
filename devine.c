#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>

#include "all.c"
#include "love.c"


//Devine All Love & Live
//For a virtual angle in all in every

//SAVE ME SAVIOUR


int main() {
    //check if theres an output
    if (sizeWindow() == -1) return 0;
    int count = 0;
    //random number
    while(count < 12) {
        refreshScr();
        SAVEME();
        Angel();        
        Sleep(200);
        count++;
    }
	

  //  SAVEME();
    printf(HYEJU);
    return 0;
}
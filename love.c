#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>
#include <sys/ioctl.h>

void refreshScr() {
    write(STDOUT_FILENO, "\x1b[2J",4);  //clr screen
    write(STDOUT_FILENO, "\x1b[H",3);   //cursor to top
}

int sizeWindow() {
    struct winsize ws; //from ioctl

    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws) == -1 || ws.ws_col == 0)
        return -1;
    else return 1;
}

void SAVEME()
{
    //random
    time_t t;
    srand((unsigned int) time(&t)); //seed
    int solo = rand() % 14;
    switch(solo){
        case 1:
            printf(HEEJIN);
            break;
        case 2:
            printf(HYUNJIN);
            break;
        case 3:
            printf(HASEUL);
            break;
        case 4:
            printf(YEOJIN);
            break;
        case 5:
            printf(VIVI);
            break;
        case 6:
            printf(KIMLIP);
            break;
        case 7:
            printf(JINSOUL);
            break;
        case 8:
            printf(CHOERRY);
            break;
        case 9:
            printf(YVES);
            break;
        case 10:
            printf(CHUU);
            break;
        case 11:
            printf(GOWON);
            break;
        case 12:
            printf(HYEJU);
            break;
    }
    printf("                           SAVE ME SAVIOUR\n");
    solo = rand() % 14;
    Sleep(200);
    
}

void Angel(){
    puts("                           ♦                ");
    puts("                          * *               ");
    puts("                         *   *              ");
    puts("                        *  ♦  *             ");
    puts("                         :   :              ");
    puts("                         : A :              ");
    puts("                         : R :              ");
    puts("                     __* : T : *__          ");
    puts("              ..___/** T ♦ E ♦ M **\\___..   ");
    puts("             /*** R ^````: M :````^ I ***\\  ");
    puts("            <* A \"\"      : I :      \"\" S *> ");
    puts("              `\"`        : S :        `\"`   ");
    puts("                         :   :              ");
    puts("                         :   :              ");
    puts("                         :   :              ");
    puts("                         : ♥ :              ");
    puts("                         : ♥ :              ");
    puts("                         : ♥ :              ");
    puts("                         : ♥ :              ");
    puts("                         : ♥ :              ");
    puts("                         :   :              ");
    puts("                         :   :              ");
    puts("                         :   :              ");
    puts("                         :   :              ");
    puts("                        ♦  ♦  ♦             ");
    puts("                         *   *              ");
    puts("                          * *               ");
    puts("                           ♦                ");
}
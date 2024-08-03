#include <ncurses.h>

int screenSetUp();

int main() {
    screenSetUp();

    getchar();

    endwin();

    return 0;
}

int screenSetUp(){
    initscr();
    printf("Hello Word");
    noecho();
    refresh();

    return 0;
}
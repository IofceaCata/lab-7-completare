#include <conio.h>
#include <stdio.h>
#define EOL '\n'

void reverse( void );

int main( void ) {
    reverse();
    return 0;
}
void reverse() {
    char txt;
    if ((txt = getchar()) != EOL) {
        reverse();
    }
    putchar(txt);
    return;
}

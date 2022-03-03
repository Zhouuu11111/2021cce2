#include <stdio.h>
char mirror( char C)
{
    if( C=='A') return 'A';
    if( C=='B') return ' ';
    if( C=='C') return ' ';
    if( C=='D') return ' ';
    if( C=='E') return '3';
    if( C=='F') return ' ';
    if( C=='G') return ' ';
    if( C=='H') return 'H';
    if( C=='I') return 'I';
    if( C=='J') return 'L';
    if( C=='K') return ' ';
    if( C=='L') return 'J';
    if( C=='M') return 'M';
    if( C=='N') return ' ';
    if( C=='O') return 'O';
    if( C=='P') return ' ';
    if( C=='Q') return ' ';
    if( C=='R') return ' ';
    if( C=='S') return '2';
    if( C=='T') return 'T';
    if( C=='U') return 'U';
    if( C=='V') return 'V';
    if( C=='W') return 'W';
    if( C=='X') return 'X';
    if( C=='Y') return 'Y';
    if( C=='Z') return '5';
    if( C=='1') return '1';
    if( C=='2') return 'S';
    if( C=='3') return 'E';
    if( C=='4') return ' ';
    if( C=='5') return 'Z';
    if( C=='6') return ' ';
    if( C=='7') return ' ';
    if( C=='8') return '8';
    if( C=='9') return ' ';

    return ' ';
}
int main()
{
    char c;
    scanf("%c", &c );

    char ans = mirror(c);
    printf("它的鏡像字是--%c--\n", ans );
    return 0;
}

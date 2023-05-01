#include <stdio.h>

int char_to_ascii(char a){
    int val = a;
    return val;
}
char small_to_capital(char small){
    char val = small-32;
    return val;
}
char capital_to_small(char capital){
    char val = capital+32;
    return val;
}
int main() {
    int ascii = char_to_ascii('0');
    char capital = small_to_capital('t');
    char small = capital_to_small('A');
    printf("%d\n%c\n", ascii, capital);
    printf("%c\n", small);
    return 0;
}
#include  "main.h"
#include <stdio.h>
#include <unistd.h>


int _kip(char c) {
    return (write(1, &c, 1));
}

void print_alphabet(void) {
    char letter;

    for (letter = 'a'; letter < 'z'; letter ++) {
        _kip(letter);
    }
}

int main(void) {
    print_alphabet();

    return (0);
}
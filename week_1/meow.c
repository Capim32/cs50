#include <stdio.h>

// function prototipe -> says that the function meow will exist in some ponint of the program, so main can call it before the declaration
void meow ();

int main(void) {
    meow();
}


void meow () {
    for(int i = 0; i < 10; i++) {
        printf("meow");
    }
}
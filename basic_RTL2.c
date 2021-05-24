#include <stdio.h>
#include <stdlib.h>

int main(){

    write(1,"@.@ something different..? Good luck @.@~", 42);


    char buf[125];

    read(0, buf, 0x100);
    write(1, buf, 0x100);

    return 0;
}
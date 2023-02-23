#include <iostream>
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

using namespace std;

int main () {
    char src[] = "Aticleworld.com";
    // The destination string size is 16.
    char dest[16] = {0};
    // copying 12 bytes of src into dest.
    strncpy_s(dest, sizeof(dest), src, 12);
    printf("Copied string: %s\n", dest);
    return 0;
}
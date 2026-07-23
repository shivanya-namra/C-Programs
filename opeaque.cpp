
#include <stdio.h>
#include "opaque.h"

int main() {
    Opaque* handle = createOpaque(42);

    printf("Initial value: %d\n", getValue(handle));

    setValue(handle, 99);
    printf("Updated value: %d\n", getValue(handle));

    destroyOpaque(handle);
    return 0;
}

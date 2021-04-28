#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h> 

#include <stdio.h>
#include "hash.h"
#include "for_all.h"


const int size = 7;

int main() {
    Table* table = new_table(size);
    dialog(table);
    printf("That's all. Bye!\n");
    del_table(table);
    _CrtDumpMemoryLeaks();
    return 0;
}
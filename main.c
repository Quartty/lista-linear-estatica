#include "list.h"

int main() {
    List * A = list_new(4);

    list_info(A);
    
    list_insert(A,4);
    list_insert(A,10);
    list_insert(A,2);
    list_insert(A,7);

    list_info(A);
    list_expand(A, 8);
    list_info(A);

    list_insert(A,20);
    list_info(A);

    list_remove(A,1);
    list_info(A);

    list_insert(A,45);
    list_info(A);

    list_reduce(A);
    list_info(A);
    
    list_free(A);
    return 0;
}
#include "../include/libft.h"
#include <stdio.h>
int main(){
    char* ptr = malloc(10);
    ft_bzero(ptr, 10);
    printf("ptr: [%s]\n", ptr);
    return 0;
}

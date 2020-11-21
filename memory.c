/**
 * @https://www.runoob.com/cprogramming/c-memory-management.html
 * Description: realloc使用
 * Created by y.q on 2020.11.20
 */
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {

    char *c = malloc(sizeof(char) * 10);
    strcpy(c, "123456789\0");
    printf("origin_str = %s\n", c);

    char *new_c = realloc(c, 15);
    if(new_c == NULL){
        free(c);
        exit(-1);
    }
    strcat(new_c, "abcd\0");
    printf("new_str = %s\n", new_c);

    printf("origin_str = %s\n", c);
    printf("%u\n", &c);
    printf("%u\n", &new_c);
    return 0;
}
#include <stdio.h>

#define MAX_ARRAY_SIZE 128

void fill_array(int *ngram, char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        ngram[(int) str[i]] += 1;
    }
}

void print_array(int *ngram, int size) {
    for (int i = 0; i < size; i++) {
            if (ngram[i] != 0)
                printf("%c: %d\n", i, ngram[i]);
        }
}

int main(int argc, char *argv[]) {
    int ngram[MAX_ARRAY_SIZE] = {0};
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            fill_array(ngram, argv[i]);
        }
        print_array(ngram, MAX_ARRAY_SIZE);
    }
    return 0;
}
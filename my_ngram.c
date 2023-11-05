#include <stdio.h>

void count_chars(int *ngram, char *str) {
    for (int i = 0; str[i]; i++) {
        ngram[(unsigned int) str[i]] += 1;
    }
}

int main(int argc, char *argv[]) {
    int ngram[128] = {0};
    if (argc > 1) {
        // iterate over args and count chars
        for (int i = 1; i < argc; i++) {
            count_chars(ngram, argv[i]);
        }
        // iterate ngram and print recorded values
        for (int i = 0; i < 128; i++) {
            if (ngram[i] != 0)
                printf("%c: %d\n", i, ngram[i]);
        }
    }
    return 0;
}
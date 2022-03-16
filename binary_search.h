#ifndef BASE_SORT_H_BINARY_SEARCH_H
#define BASE_SORT_H_BINARY_SEARCH_H

#include "base_sort.h"

/**
 * Utilizzo ricerca binaria applicata in versione iterativa
 *
 * @param V
 * @param inizio
 * @param fine
 * @param num
 * @return
 */
int iterative_binary_search(int V[], int inizio, int fine, int num) {
    int cellaMedia;
    while (inizio <= fine) {
        cellaMedia = (inizio + fine) / 2;
        if (num > V[cellaMedia]) {
            inizio = cellaMedia + 1;
        } else if (num < V[cellaMedia]) {
            fine = cellaMedia - 1;
        } else {
            return cellaMedia;
        }
    }
    return -1;
}

/**
 * Utilizzo ricerca binaria applicata in versione ricorsiva
 *
 * @param V
 * @param inizio
 * @param fine
 * @param num
 * @return
 */
int ricorsive_binary_search(int V[], int inizio, int fine, int num) {
    int cellaMedia = (inizio + fine) / 2;
    if (inizio <= fine) {
        if (num > V[cellaMedia]) {
            return ricorsive_binary_search(V, cellaMedia + 1, fine, num);
        } else if (num < V[cellaMedia]) {
            return ricorsive_binary_search(V, inizio, cellaMedia - 1, num);
        } else {
            return cellaMedia;
        }
    } else {
        return -1;
    }
}

#endif
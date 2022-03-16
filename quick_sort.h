#ifndef TEXT_COLOR_H_QUICK_SORT_H
#define TEXT_COLOR_H_QUICK_SORT_H

#include <iostream>

using namespace std;

/**
 * Funzione per partizionare il vettore di partenza in due sotto vettori
 *
 * @param V
 * @param sinistro
 * @param destro
 * @return
 */
int singolar_partizionaVettore(int V[], int sinistro, int destro) {
    int perno, temp;
    perno = sinistro;
    while (sinistro < destro) {
        while (V[sinistro] <= V[perno] && sinistro < destro)
            sinistro++;
        while (V[destro] > V[perno])
            destro--;
        if (sinistro < destro) {
            temp = V[sinistro];
            V[sinistro] = V[destro];
            V[destro] = temp;
        }
    }
    if (destro != perno) {
        temp = V[perno];
        V[perno] = V[destro];
        V[destro] = temp;
    }
    return destro;
}

/**
 *Funzione per riordinare un vettore con il quick-sort
 *
 * @param V
 * @param esteSinistro
 * @param esteDestro
 */
void singolar_quickSort(int V[], int esteSinistro, int esteDestro) {
    int q;
    if (esteSinistro < esteDestro) {
        q = singolar_partizionaVettore(V, esteSinistro, esteDestro);
        singolar_quickSort(V, esteSinistro, q - 1);
        singolar_quickSort(V, q + 1, esteDestro);
    }
}

/**
 * Funzione per partizionare il vettore di partenza in due sotto vettori
 *
 * @param V
 * @param sinistro
 * @param destro
 * @param V2
 * @return
 */
int increasing_parallel_partizionaVettore(int V[], int sinistro, int destro, string V2[]) {
    int perno, temp1;
    string temp2;
    perno = sinistro;
    while (sinistro < destro) {
        while (V[sinistro] <= V[perno] && sinistro < destro)
            sinistro++;
        while (V[destro] > V[perno])
            destro--;
        if (sinistro < destro) {
            temp1 = V[sinistro];
            V[sinistro] = V[destro];
            V[destro] = temp1;
            temp2 = V2[sinistro];
            V2[sinistro] = V2[destro];
            V2[destro] = temp2;
        }
    }
    if (destro != perno) {
        temp1 = V[perno];
        V[perno] = V[destro];
        V[destro] = temp1;
        temp2 = V2[perno];
        V2[perno] = V2[destro];
        V2[destro] = temp2;
    }
    return destro;
}

/**
 *Funzione per riordinare due vettori paralleli in ordine crescente con il quick-sort
 *
 * @param V
 * @param esteSinistro
 * @param esteDestro
 * @param V2
 */
void increasing_parallel_quickSort(int V[], int esteSinistro, int esteDestro, string V2[]) {
    int q;
    if (esteSinistro < esteDestro) {
        q = increasing_parallel_partizionaVettore(V, esteSinistro, esteDestro, V2);
        increasing_parallel_quickSort(V, esteSinistro, q - 1, V2);
        increasing_parallel_quickSort(V, q + 1, esteDestro, V2);
    }
}

/**
 * Funzione per partizionare il vettore di partenza in due sotto vettori
 *
 * @param V
 * @param sinistro
 * @param destro
 * @param V2
 * @return
 */
int descending_parallel_partizionaVettore(int V[], int sinistro, int destro, string V2[]) {
    int perno, temp1;
    string temp2;
    perno = destro;
    while (sinistro < destro) {
        while (V[destro] <= V[perno] && sinistro < destro)
            destro--;
        while (V[sinistro] > V[perno])
            sinistro++;
        if (sinistro < destro) {
            temp1 = V[sinistro];
            V[sinistro] = V[destro];
            V[destro] = temp1;
            temp2 = V2[sinistro];
            V2[sinistro] = V2[destro];
            V2[destro] = temp2;
        }
    }
    if (sinistro != perno) {
        temp1 = V[perno];
        V[perno] = V[sinistro];
        V[sinistro] = temp1;
        temp2 = V2[perno];
        V2[perno] = V2[sinistro];
        V2[sinistro] = temp2;
    }
    return sinistro;
}

/**
 *Funzione per riordinare due vettori paralleli in ordine decrescente con il quick-sort
 *
 * @param V
 * @param esteSinistro
 * @param esteDestro
 * @param V2
 */
void descending_parallel_quickSort(int V[], int esteSinistro, int esteDestro, string V2[]) {
    int q;
    if (esteSinistro < esteDestro) {
        q = descending_parallel_partizionaVettore(V, esteSinistro, esteDestro, V2);
        descending_parallel_quickSort(V, q + 1, esteDestro, V2);
        descending_parallel_quickSort(V, esteSinistro, q - 1, V2);
    }
}

#endif //TEXT_COLOR_H_QUICK_SORT_H

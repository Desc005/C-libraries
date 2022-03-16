#ifndef FUNCTIONS_LIBRARY_H
#define FUNCTIONS_LIBRARY_H

#include <ctime>
#include <iostream>

using namespace std;

/**
 * Funzione per ordinare un vettore utilizzando il bubbleSort1
 *
 * @param V
 * @param N
 */
void bubbleSort1(int V[], int N) {
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (V[j] > V[j + 1]) {
                temp = V[j];
                V[j] = V[j + 1];
                V[j + 1] = temp;
            }
        }
    }
}

/**
 * Funzione per ordinare un vettore utilizzando il bubbleSort2
 *
 * @param V
 * @param N
 */
void bubbleSort2(int V[], int N) {
    int temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (V[j] > V[j + 1]) {
                temp = V[j];
                V[j] = V[j + 1];
                V[j + 1] = temp;
            }
        }
    }
}

/**
 * Funzione per ordinare un vettore in ordine crescente con il bubbleSort3
 *
 * @param V
 * @param N
 */
static void increasing_bubbleSort3(int V[], int N) {
    int temp, j = 0;
    bool unordered = false;
    do {
        unordered = false;
        for (int i = 0; i < N - 1 - j; i++) {
            if (V[i] > V[i + 1]) {
                temp = V[i + 1];
                V[i + 1] = V[i];
                V[i] = temp;
                unordered = true;
            }
        }
        j++;
    } while (unordered);
}

/**
 * Funzione per ordinare un vettore in ordine decrescente con il bubbleSort3
 *
 * @param V
 * @param N
 */
static void decreasing_bubbleSort3(int V[], int N) {
    int temp, j = 0;
    bool unordered = false;
    do {
        unordered = false;
        for (int i = 0; i < N - 1 - j; i++) {
            if (V[i] < V[i + 1]) {
                temp = V[i + 1];
                V[i + 1] = V[i];
                V[i] = temp;
                unordered = true;
            }
        }
        j++;
    } while (unordered);
}

/**
 * Funzione per spostare a destra tutti gli elementi del vettore successivi all'elemento minore di tutti
 *
 * @param V
 * @param N
 * @param position
 * @param neww
 */
void shift(int V[], int N, int &position, int neww) {
    while (position > 0 && V[position - 1] > neww) {
        V[position] = V[position - 1];
        position--;
    }
}

/**
 * Funzione per ordinare un vettore con l'insertion sort
 *
 * @param V
 * @param N
 * @param max
 */
void insertSort(int V[], int N, const int max) {
    int position = 0, neww;
    srand((unsigned) time(nullptr));
    for (int i = 0; i < N; i++) {
        neww = rand() % max;
        position = i;
        shift(V, N, position, neww);
        V[position] = neww;
    }
}

/**
 * Funzione per ordinare un vettore di interi con il selection sort
 *
 * @param V
 * @param N
 */
void seleSort(int V[], int N) {
    int minn, temp;
    for (int i = 0; i < N - 1; i++) {
        minn = i;
        for (int j = i + 1; j < N; j++) {
            if (V[j] < V[minn]) {
                minn = j;
            }
        }
        temp = V[minn];
        V[minn] = V[i];
        V[i] = temp;
    }
}

/**
 * Funzione per ordinare un vettore di numeri reali con approssimazione a 7 cifre decimali con il selection sort
 *
 * @param V
 * @param N
 */
void float_seleSort(float V[], int N) {
    int minn;
    float temp;
    for (int i = 0; i < N - 1; i++) {
        minn = i;
        for (int j = i + 1; j < N; j++) {
            if (V[j] < V[minn]) {
                minn = j;
            }
        }
        temp = V[minn];
        V[minn] = V[i];
        V[i] = temp;
    }
}

/**
 * Funzione per ordinare un vettore di numeri reali con approssimazione a 15 cifre decimali con il selection sort
 *
 * @param V
 * @param N
 */
void double_seleSort(double V[], int N) {
    int minn;
    double temp;
    for (int i = 0; i < N - 1; i++) {
        minn = i;
        for (int j = i + 1; j < N; j++) {
            if (V[j] < V[minn]) {
                minn = j;
            }
        }
        temp = V[minn];
        V[minn] = V[i];
        V[i] = temp;
    }
}

void parallel_seleSort(int V[], int V2[], int N) {
    int minn;
    int temp;
    for (int i = 0; i < N - 1; i++) {
        minn = i;
        for (int j = i + 1; j < N; j++) {
            if (V[j] < V[minn]) {
                minn = j;
            }
        }
        temp = V[minn];
        V[minn] = V[i];
        V[i] = temp;
        temp = V2[minn];
        V2[minn] = V2[i];
        V2[i] = temp;
    }
}

#endif //FUNCTIONS_LIBRARY_H

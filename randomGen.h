#ifndef MAIN_CPP_RANDOMGEN_H
#define MAIN_CPP_RANDOMGEN_H

#include <random>
#include <ctime>

using namespace std;

//setting del seme per generare i numeri casuali al giorno, mese, anno, ore, minuti, secondi e millisecondi del sistema operativo
mt19937 rng(time(nullptr));

/**
 * Funzione per generare numeri interi casuali
 *
 * @param minn
 * @param maxx
 * @return
 */
int integerRanedomizer(int minn, int maxx) {
    uniform_int_distribution<int> distribution(minn, maxx);
    return distribution(rng);
}

/**
 * Funzione per generare numeri reali di tipo float casuali
 *
 * @param minn
 * @param maxx
 * @return
 */
float floatRanedomizer(float minn, float maxx) {
    uniform_real_distribution<float> distribution(minn, maxx);
    return distribution(rng);
}

/**
 * Funzione per generare numeri reali di tipo double casuali
 *
 * @param minn
 * @param maxx
 * @return
 */
double doubleRanedomizer(double minn, double maxx) {
    uniform_real_distribution<double> distribution(minn, maxx);
    return distribution(rng);
}

#endif //MAIN_CPP_RANDOMGEN_H

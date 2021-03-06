//
// Created by jonathan on 19/09/18.
//

#ifndef DATASTRUCTURES_BUBBLE_H
#define DATASTRUCTURES_BUBBLE_H

#include <cstdio>
#include "iostream"
#include "Swap.h"

using namespace std;

/**
 * Metodo que se encarga de realizar un ordenamiento mediante el algoritmo BubbleSort.
 * @param arr
 * @param n
 */
void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

#endif //DATASTRUCTURES_BUBBLE_H
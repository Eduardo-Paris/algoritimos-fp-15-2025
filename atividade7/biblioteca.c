#include "biblioteca.h"

int maior2(int a, int b) {
    return (a > b) ? a : b;
}

int maior3(int a, int b, int c) {
    int m = (a > b) ? a : b;
    return (m > c) ? m : c;
}

int menor2(int a, int b) {
    return (a < b) ? a : b;
}

int menor3(int a, int b, int c) {
    int m = (a < b) ? a : b;
    return (m < c) ? m : c;
}

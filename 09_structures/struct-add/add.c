#include<stdio.h>
#include "struct.h"
typedef struct {
     double real;
     double imag;
     } complex;

    complex add(complex a, complex b);

    complex add(complex a, complex b) {
    complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
    }
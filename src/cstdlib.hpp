#ifndef CSTDLIB_HPP
#define CSTDLIB_HPP


#include <stdlib.h>

namespace LEON0128
{

using ::size_t;
using ::div_t;
using ::ldiv_t;
using ::lldiv_t;

extern "C" using c_atexit_handler = void();
extern "C++" using atexit_handler = void();
extern "C" using c_compare_pred = int(const void *, const void *);
extern "C++" using compare_pred = int(const void *, const void *);

// start and termination
using ::abort;
using ::atexit;
using ::at_quick_exit;
using ::exit;
using ::_Exit;
using ::quick_exit;
using ::getenv;
using ::system;

// C library memory allocation
using ::aligned_alloc;
using ::calloc;
using ::free;
using ::malloc;
using ::realloc;

using ::atof;
using ::atoi;
using ::atol;
using ::atoll;
using ::strtod;
using ::strtof;
using ::strtold;
using ::strtol;
using ::strtoll;
using ::strtoul;
using ::strtoull;

// multibyte / wide string and character conversion functions
using ::mblen;
using ::mbtowc;
using ::wctomb;
using ::mbstowcs;
using ::wcstombs;

// C standard library algorithms
using ::bsearch;
using ::qsort;

// low-quality random number generation
using ::rand;
using ::srand;

// absolute values
int abs(int j){return abs(j);}
long int abs(long int j){return labs(j);}
long long int abs(long long int j){return llabs(j);}
float abs(float j){return j >= 0 ? j : -j;}
double abs(double j){return j >= 0 ? j : -j;}
long double abs(long double j){return j >= 0 ? j : -j;}

using ::labs;
using ::llabs;

div_t div(int numer, int denom){return div(numer, denom);}
ldiv_t div(long int numer, long int denom){return ldiv(numer, denom);}
lldiv_t div(long long int numer, long long int denom){return lldiv(numer, denom);}

using ::ldiv;
using ::lldiv;

}

#endif
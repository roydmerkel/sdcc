/*
   920721-1.c from the execute part of the gcc torture suite.
 */

#include <testfwk.h>

#ifdef __SDCC
#pragma std_c99
#endif

#ifndef __SDCC_pdk14 // Lack of memory
long f(short a,short b){return (long)a/b;}
#endif
void
testTortureExecute (void){
#ifndef __SDCC_pdk14 // Lack of memory
if(f(-32768,-1)!=32768L)ASSERT(0);else return;
#endif
}

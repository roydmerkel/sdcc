/*
   930702-1.c from the execute part of the gcc torture suite.
 */

#include <testfwk.h>

#ifdef __SDCC
#pragma std_c99
#pragma disable_warning 93
#endif

int fp (double a, int b)
{
  if (a != 33 || b != 11)
    ASSERT (0);
  return (0);
}

void
testTortureExecute (void)
{
#if !defined(__SDCC_hc08) && !defined(__SDCC_s08) && !defined(__SDCC_ds390) && !defined(__SDCC_mcs51)
#if !((defined __SDCC_stm8) && defined (__SDCC_MODEL_LARGE)) // Assembler not suitable for 24-bit function pointers
  int (*f) (double, int) = fp;

  fp (33, 11);
  f (33, 11);
  return;
#endif
#endif
}

/* Test the `vorns64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O2" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

int64x1_t out_int64x1_t;
int64x1_t arg0_int64x1_t;
int64x1_t arg1_int64x1_t;
void test_vorns64 (void)
{

  out_int64x1_t = vorn_s64 (arg0_int64x1_t, arg1_int64x1_t);
}

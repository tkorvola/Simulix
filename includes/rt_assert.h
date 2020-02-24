#infdef RT_ASSERT_H_
#define RT_ASSERT_H_

/* Assertion support for Simulix.
 *
 * A file with the same name may be generated by Matlab Coder.  This file
 * replaces it.
 */

#include "Simulix_capi_utils.h"

#define sx_assert(expr, msg) AssertFunc((expr), __FILE__, __LINE__, (msg))

#define utAssert(expr) sx_assert((expr), "Assertion " #expr " failed")

#endif

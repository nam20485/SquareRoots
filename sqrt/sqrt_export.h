#pragma once


#if defined(_WIN32)
#  if defined(sqrt_EXPORTS)
#    define SQRT_API __declspec(dllexport)
#	 define EXPIMP_TEMPLATE
#  else
#    define SQRT_API __declspec(dllimport)
#	 //define EXPIMP_TEMPLATE extern
#  endif
#else // non windows define it to nothing (Linux exports by default)
#  define SQRT_API
#endif

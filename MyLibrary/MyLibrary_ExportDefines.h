#pragma once

#ifdef _MSC_VER
#  ifdef MYLIBRARY_DLL
#    define MYLIBRARY_EXPORT __declspec(dllexport) 
#  else
#    define MYLIBRARY_EXPORT __declspec(dllimport)
#  endif
#else
#  define MYLIBRARY_EXPORT
#endif
#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define CLIP_EXPORT __declspec(dllexport)
#else
  #define CLIP_EXPORT
#endif


CLIP_EXPORT void clip_test();

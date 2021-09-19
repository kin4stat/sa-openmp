add_library(reversiblehooks STATIC
  ReversibleHooks.cpp
  SSimpleReversibleHook.cpp
  SVirtualReversibleHook.cpp)
target_include_directories(reversiblehooks PUBLIC . ..)
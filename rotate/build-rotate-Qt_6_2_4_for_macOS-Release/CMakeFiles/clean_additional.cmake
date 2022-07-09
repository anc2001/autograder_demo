# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/rotate_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/rotate_autogen.dir/ParseCache.txt"
  "rotate_autogen"
  )
endif()

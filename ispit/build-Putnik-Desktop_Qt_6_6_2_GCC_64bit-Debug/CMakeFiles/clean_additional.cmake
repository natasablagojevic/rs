# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Putnik_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Putnik_autogen.dir/ParseCache.txt"
  "Putnik_autogen"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Soruces_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Soruces_autogen.dir/ParseCache.txt"
  "Soruces_autogen"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\back_up_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\back_up_autogen.dir\\ParseCache.txt"
  "back_up_autogen"
  )
endif()

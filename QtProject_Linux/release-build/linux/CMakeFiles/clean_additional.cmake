# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/video-simili-duplicate-cleaner_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/video-simili-duplicate-cleaner_autogen.dir/ParseCache.txt"
  "video-simili-duplicate-cleaner_autogen"
  )
endif()

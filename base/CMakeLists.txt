set(base_SRCS
  Date.cc
#   Exception.cc
  TimeZone.cc
  )

add_library(XServer_base ${base_SRCS})
target_link_libraries(XServer_base pthread rt)

#add_library(muduo_base_cpp11 ${base_SRCS})
#target_link_libraries(muduo_base_cpp11 pthread rt)
#set_target_properties(muduo_base_cpp11 PROPERTIES COMPILE_FLAGS "-std=c++0x")

install(TARGETS XServer_base DESTINATION lib)
#install(TARGETS muduo_base_cpp11 DESTINATION lib)

file(GLOB HEADERS "*.h")
install(FILES ${HEADERS} DESTINATION include/XServer/base)

# if(MUDUO_BUILD_EXAMPLES)
#  add_subdirectory(tests)
# endif()
add_subdirectory(tests)
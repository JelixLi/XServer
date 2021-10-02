add_executable(date_unittest Date_unittest.cc)
target_link_libraries(date_unittest XServer_base)
add_test(NAME date_unittest COMMAND date_unittest)

# add_executable(exception_test Exception_test.cc)
# target_link_libraries(exception_test muduo_base)
# add_test(NAME exception_test COMMAND exception_test)

# add_executable(timezone_unittest TimeZone_unittest.cc)
# target_link_libraries(timezone_unittest muduo_base)
# add_test(NAME timezone_unittest COMMAND timezone_unittest)
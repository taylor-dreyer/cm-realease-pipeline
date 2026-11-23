add_library(cm_util STATIC src/utillib.c)
target_include_directories(cm_util PUBLIC include)

add_executable(test_utillib tests/test_utillib.c)
target_link_libraries(test_utillib PRIVATE cm_util)
add_test(NAME utillib COMMAND test_utillib)
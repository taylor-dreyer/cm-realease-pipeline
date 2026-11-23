add_library(cm_math STATIC src/mathlib.c)
target_include_directories(cm_math PUBLIC include)

add_executable(test_mathlib tests/test_mathlib.c)
target_link_libraries(test_mathlib PRIVATE cm_math)
add_test(NAME mathlib COMMAND test_mathlib)
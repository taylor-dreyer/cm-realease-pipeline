add_executable(myapp main.c)
target_include_directories(myapp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(myapp PRIVATE cm_math cm_util cjson)
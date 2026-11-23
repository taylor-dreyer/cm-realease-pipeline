add_library(cjson STATIC cJSON/cJSON.c)
target_include_directories(cjson PUBLIC cJSON)
target_link_libraries(cjson PRIVATE m)
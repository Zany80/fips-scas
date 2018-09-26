set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

fips_begin_module(scas)
fips_src(src/)
fips_include_directories("${PROJECT_SOURCE_DIR}/headers")
fips_end_module()

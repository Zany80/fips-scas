cmake_minimum_required(VERSION 3.1)

get_filename_component(FIPS_ROOT_DIR "../fips" ABSOLUTE)
include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

fips_setup(PROJECT scas)
fips_begin_sharedlib(scas)
fips_src(src/)
fips_end_sharedlib()

set_target_properties(scas PROPERTIES PREFIX "")

fips_include_directories("${CMAKE_CURRENT_SOURCE_DIR}/headers")

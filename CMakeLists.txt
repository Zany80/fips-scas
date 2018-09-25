cmake_minimum_required(VERSION 3.1)

get_filename_component(FIPS_ROOT_DIR "./build/fips" ABSOLUTE)
include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

fips_setup(PROJECT scas)
fips_include_directories("${PROJECT_SOURCE_DIR}/headers")

fips_begin_module(scas)
fips_src(src/)
fips_end_module()

fips_finish()

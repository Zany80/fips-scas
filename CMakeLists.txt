cmake_minimum_required(VERSION 3.1)

get_filename_component(FIPS_ROOT_DIR "./build/fips" ABSOLUTE)
include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

fips_setup(PROJECT scas)
fips_include_directories("${PROJECT_SOURCE_DIR}/headers")

fips_begin_sharedlib(scas)
fips_src(src/)
fips_end_sharedlib()

if (FIPS_EMSCRIPTEN)
	if (FIPS_EMSCRIPTEN_USE_WASM)
		set_target_properties(scas PROPERTIES SUFFIX ".wasm")
	else()
		set_target_properties(scas PROPERTIES SUFFIX ".js")
	endif()
endif()

fips_finish()

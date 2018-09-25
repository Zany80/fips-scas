fips_setup(PROJECT scas)
fips_include_directories("${PROJECT_SOURCE_DIR}/headers")

fips_begin_module(scas)
fips_src(src/)
fips_end_module()

fips_finish()

project(
        'cpp-meson-boilerplate',
        'cpp',
        version : '0.0.1',
        default_options : ['cpp_std=c++14'])

#include google-test
gtest = dependency(
                    'gtest',
                    required : false)
if gtest.found()
else

#search for gtest in the subjrojects folder
    gtest_sp = subproject('gtest')

# build the static library because gtest ask for it
    gtest_lib = static_library('gteststuff', gtest_sp.get_variable('libsources'),
                include_directories : gtest_sp.get_variable('incdir'))

# get the environmental variables from gtest that are set by meson.wrap
# includes sources and includes for gtest
    gtest_inc = gtest_sp.get_variable('incdir')
endif

# includes
include = include_directories('source')
priv_includes = [include, gtest_inc]
priv_sources = ['source/main.cpp',
                'source/example.cpp']

# build the executable
exe = executable(
                'meson-cpp',
                [priv_sources],
                include_directories : priv_includes,
                dependencies : [gtest])

# build the executable
e = executable(
        'testprog',
        'tests/test.cc',
        link_with : gtest_lib,
        include_directories : priv_includes,
        dependencies : gtest)
test('gtest test', e)

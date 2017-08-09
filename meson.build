project(
        'cpp-meson-boilerplate',
        'cpp',
        version : '0.0.1',
        default_options : ['cpp_std=c++14'])

#include google-test
gtest_sp = subproject('gtest')
gtest = dependency('gtest', main : true)
gtest_nomain = dependency('gtest', main : false)

# includes
include = include_directories('source')
priv_includes = [include]
priv_sources = ['source/main.cpp',
                'source/example.cpp']

# build the executable
exe = executable(
                'meson-cpp',
                [priv_sources],
                include_directories : priv_includes,
                dependencies : [gtest])

# build the executable
e = executable('testprog', 'tests/test.cc', dependencies : gtest)
test('gtest test', e)

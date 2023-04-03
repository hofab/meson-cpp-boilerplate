project(
        'cpp-meson-boilerplate',
        'cpp',
        version : '0.0.1',
        default_options : ['cpp_std=c++17'])

#include google-test
gtest_dep = dependency('gtest', main : true, required : true)
gmock_dep = dependency('gmock', main : true, required : true)

# includes
include = include_directories('source')
priv_includes = [include]
priv_sources = ['source/main.cpp',
                'source/example.cpp']

# build the executable
exe = executable(
                'cpp-test',
                [priv_sources],
                include_directories : priv_includes,
                dependencies : [gtest_dep])

# build the executable
exe = executable(
                'ringbuffer',
                [priv_sources],
                include_directories : priv_includes,
                dependencies : [gtest_dep])

# build the executable
e = executable(
        'testprog',
        ['tests/test.cc', 'source/classA.cc'],
        include_directories : priv_includes,
        dependencies : gtest_dep)
test('gtest test', e)

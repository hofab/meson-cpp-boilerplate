project(
        'cpp-meson-boilerplate',
        'cpp',
        version : '0.0.1',
        default_options : ['cpp_std=c++14'])

# includes
include = include_directories('source')
priv_includes = [include]
priv_sources = ['source/main.cpp',
                'source/example.cpp']

# build the executable
exe = executable('meson-cpp', [priv_sources],
        include_directories : priv_includes)
